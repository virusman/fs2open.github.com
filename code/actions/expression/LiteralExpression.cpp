
#include "LiteralExpression.h"

namespace actions {
namespace expression {

LiteralExpression::LiteralExpression(antlr4::Token* token, Value literalValue)
	: AbstractExpression(token), m_literalValue(std::move(literalValue))
{
}
LiteralExpression::~LiteralExpression() = default;

Value LiteralExpression::execute()
{
	return m_literalValue;
}
bool LiteralExpression::validate(antlr4::Parser* /*parser*/)
{
	// Literals are always valid
	return true;
}
ValueType LiteralExpression::determineReturnType() const
{
	return m_literalValue.getType();
}

} // namespace expression
} // namespace actions