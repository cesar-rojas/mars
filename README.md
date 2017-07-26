# MARS - Multivariate Adaptive Regression Splines

I had an interesting project where I was needing to regress a multivariate nonlinear function using C# language. The complexity of the problem was increased because some variables are relevant in an interval of values of independent variables and irrelevant for the rest of the intervals. To solve this type of problems I was needing some form of stepwise linear regression. After some research I found that the best algorithm was the Multivariate Adaptive Regression Splines (MARS).

Multivariate Adaptive Regression Splines (MARS) is an implementation of techniques popularized by Jerome H. Friedman in 1991. MARS is a nonparametric regression procedure that makes no assumption about the underlying functional relationship between the dependent and independent variables. Instead, MARS constructs this relation from a set of coefficients and basis functions that are entirely "driven" from the regression data. In a sense, the method is based on the "divide and conquer" strategy, which partitions the input space into regions, each with its own regression equation. This makes MARS particularly suitable for problems with higher input dimensions (i.e., with more than 2 variables), where the curse of dimensionality would likely create problems for other techniques. Some initial information on how MARS works can be found in Wikipedia <u>https://en.wikipedia.org/wiki/Multivariate_adaptive_regression_splines</u>. For a deeper understanding of how MARS works, the reader should read the original Friedman's paper which is located at <u>https://projecteuclid.org/download/pdf_1/euclid.aos/1176347963</u>

The MARS model is designed to predict continuous numeric outcomes such as the average monthly bill of a mobile phone customer or the amount that a shopper is expected to spend in a web site visit. MARS is also capable of producing high quality probability models for a yes/no outcome. MARS performs variable selection, variable transformation, interaction detection, and self-testing, all automatically and at high speed.

I have found two good implementations of MARS algorithm. The first implementation is produced by Salford Systems. The second implementation I have found is a library in R Statistics called Earth. Both programs produce similar results when they are tested with the same set of data.

The problem is that I was needing a library to embed in a system that I was working to forecast prices. Salford System is a closed desktop application that does not allow to embedded into another system. R Statistics library can be embedded into another software through software connectors that are not reliable and difficult to integrate into the current software being implemented. The option I took was to get the source code in R of Earth implementation and update/rewrite it to be compatible with Microsoft .NET. The main part of the program was written in C/C++. I implemented a C# wrapper that calls exportable functions written in C/C++. This new C# implementation allows to train the model first and then use it as many times you want without the need of training the model again each time that the model needs to predict something.

Here is an example how to use MARS in C#.

// Create training set</br>
Double[][] xTraining = new Double[][] {</br>
&nbsp;&nbsp;&nbsp;new Double[] {1.5, 3.0, 4.5},</br>
&nbsp;&nbsp;&nbsp;new Double[] {0.5, 1.2, 2.3},</br>
&nbsp;&nbsp;&nbsp;new Double[] {2.5, 1.0, 3.5},</br>
&nbsp;&nbsp;&nbsp;new Double[] {4.3, 5.1, 6.3},</br>
&nbsp;&nbsp;&nbsp;new Double[] {-0.8, 7.4, 1.2}</br>
};</br>
Double[] yTraining = new Double[] {</br>
&nbsp;&nbsp;&nbsp;0.5, 1.2, 2.3, 3.5, -0.3</br>
};</br>
</br>
// Instantiate MARS and Learn from the training model</br>
MARS mars = new MARS();</br>
mars.Learn(xTraining , yTraining );</br>
</br>
// Show how good was the training fitting</br>
System.Console.WriteLine("RSquare Training = {0}", mars.RSquareTraining);</br>
System.Console.WriteLine("MAPE Training = {0}", mars.MAPETraining);</br>
</br>
// Create testing set</br>
Double[] xTesting = new Double[] {</br>
&nbsp;&nbsp;&nbsp;3.2, 4.3, 5.1</br>
};</br>
// Predict new Y value using xTesting </br>
Double yHat = mars.Predict(xTesting);</br>
</br>
// Show how good was the testing fitting</br>
System.Console.WriteLine("Predicted value = {0}", yHat);</br>
System.Console.WriteLine("RSquare Testing = {0}", mars.RSquareTesting);</br>
System.Console.WriteLine("MAPE Testing    = {0}", mars.MAPETesting);</br>
</br>


