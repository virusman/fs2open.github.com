#pragma once

#include "globalincs/pstypes.h"

#include "AbstractExpression.h"

namespace actions {
namespace expression {

class ExpressionParser {
  public:
	ExpressionParser(SCP_string expressionText);

	std::shared_ptr<AbstractExpression> parse();

	const SCP_string& getErrorText() const;

  private:
	SCP_string m_expressionText;

	SCP_string m_errorText;
};

} // namespace expression
} // namespace actions