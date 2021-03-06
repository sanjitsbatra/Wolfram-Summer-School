# Wolfram-Summer-School
Restricted Boltzmann Machines in Mathematica

To learn, perchance to dream...

Sanjit Singh Batra     Taliesin Beynon

How the human mind perceives,  is a concept that has eluded humans for hundreds of years since sciences have developed. Attempts have been made, but the difficulty in being able to confirm whether the predicted model is correct makes the problem seem intractable. 

In the last few weeks, I along with my mentor, Taliesin Beynon, have modeled and investigated a new model of machine learning due to Geoffrey Hinton. It involves a network of binary units, which are arranged in the form of layers. The layers form a bipartite graph and these connections modeled in the form of a weight matrix are used to learn structure in unlabeled data. The nature of the learning that is performed in this model is more biologically plausible than previous methods, such as back-propagation, due to the local nature of its learning rule, which requires neurons to interact only with their neighbors. 

When many such layers of these 'Boltzmann machines' are stacked on top of one another, we end up with something called 'Deep Learning'. The project investigated implementing Deep Learning using a combination of Mathematica for prototyping and Go for performance. Initially we started out with just two layers of neurons, one called the 'visible' layer, which is clamped to the the input data and the other, called the 'hidden' layer, which models learned features in the input data. 

The learning mechanism is surprisingly simple,wherein the objective is to start out from a random initial state and somehow reach the state that seems closest to 'reality', which is the input data. In order to do this, at each step, the data corresponding to reality is “promoted” and weights corresponding to its connections are increased, and weights of data corresponding to what the system “thinks” reality should look like, are reduced. In this way, gradually the 'belief' of the system becomes close to reality.

One very exciting feature of this model is that after the system has learnt the structure in the data, there is a way to cross-check what it has learnt. In other words, by clamping the hidden layer of neurons, the system can be told to “hallucinate” its conception of reality. This feature is unique to this learning model and is something that argues strongly for it, in its similarity to how the mind perceives, since the human beings often reconstruct in their own minds what their conception of reality around them. The famous “Problem of the other mind” is based on this very idea, that it is possible that each human has his/her own perception of reality and it may be, that no other human is able to relate to this conception, as a fundamental inability of the mind to perceive beyond what it has reconstructed.

Beyond the implementation of this model, the preliminary analysis of simple Boltzmann machines led to modeling their basins of attraction in the form of the Hilbert curve and the Gray code, which gave an interesting pattern, wherein units close to each other in the actual space were mapped to points close to each other on the Hilbert curve due to its distance-preserving property. As a result, locally, colors of neighbors are similar.
