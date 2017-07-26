# MARS - Multivariate Adaptive Regression Splines

I had an interesting project where I was needing to regress a multivariate nonlinear function using C# language. The complexity of the problem was increased because some variables are relevant in an interval of values of independent variables and irrelevant for the rest of the intervals. To solve this type of problems I was needing some form of stepwise linear regression. After some research I found that the best algorithm was the Multivariate Adaptive Regression Splines (MARS).

Multivariate Adaptive Regression Splines (MARS) is an implementation of techniques popularized by Jerome H. Friedman in 1991. Some initial information on how the MARS works can be found in Wikipedia at <u>https://en.wikipedia.org/wiki/Multivariate_adaptive_regression_splines</u>. For a deeper understanding of how MARS works, you should read the original Friedman's paper which is located at <u>https://projecteuclid.org/download/pdf_1/euclid.aos/1176347963</u>

The MARS model is designed to predict continuous numeric outcomes such as the average monthly bill of a mobile phone customer or the amount that a shopper is expected to spend in a web site visit. MARS is also capable of producing high quality probability models for a yes/no outcome. MARS performs variable selection, variable transformation, interaction detection, and self-testing, all automatically and at high speed.

I have found two good implementations of MARS algorithm. The first implementation is produced by Salford Systems. The second implementation I have found is a library in R Statistics called Earth. Both programs produce similar results when they are tested with the same data.

My problem is that I was needing a library to embed in a system I was working to forecast prices. Salford System is a closed desktop application that does not allow to embed into another system. R Statistics library can be embedded into another software through software connectors that are not reliable and difficult to integrate into the current software being implemented. 