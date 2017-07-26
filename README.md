# MARS - Multivariate Adaptive Regression Splines

I had an interesting project where I was needing to regress a multivariate nonlinear function. The complexity of the problem was increased because some variables are relevant in an interval of values of independent variables and irrelevant for the rest of the intervals. For this type of problems I was needing some form of stepwise linear regression. After some research I found that the best algorithm was the Multivariate Adaptive Regression Splines (MARS).

Multivariate Adaptive Regression Splines (MARS) is an implementation of techniques popularized by Jerome H. Friedman in 1991.

The MARS model is designed to predict continuous numeric outcomes such as the average monthly bill of a mobile phone customer or the amount that a shopper is expected to spend in a web site visit. MARS is also capable of producing high quality probability models for a yes/no outcome. MARS performs variable selection, variable transformation, interaction detection, and self-testing, all automatically and at high speed. 
