{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "# Use the numpy library\n",
    "import numpy as np"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "def prepare_inputs(inputs):\n",
    "    # TODO: create a 2-dimensional ndarray from the given 1-dimensional list;\n",
    "    #       assign it to input_array\n",
    "    input_array = None\n",
    "    \n",
    "    # TODO: find the minimum value in input_array and subtract that\n",
    "    #       value from all the elements of input_array. Store the\n",
    "    #       result in inputs_minus_min\n",
    "    inputs_minus_min = None\n",
    "\n",
    "    # TODO: find the maximum value in inputs_minus_min and divide\n",
    "    #       all of the values in inputs_minus_min by the maximum value.\n",
    "    #       Store the results in inputs_div_max.\n",
    "    inputs_div_max = None\n",
    "\n",
    "    # return the three arrays we've created\n",
    "    return input_array, inputs_minus_min, inputs_div_max\n",
    "    "
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "def multiply_inputs(m1, m2):\n",
    "    # TODO: Check the shapes of the matrices m1 and m2. \n",
    "    #       m1 and m2 will be ndarray objects.\n",
    "    #\n",
    "    #       Return False if the shapes cannot be used for matrix\n",
    "    #       multiplication. You may not use a transpose\n",
    "    pass\n",
    "\n",
    "\n",
    "    # TODO: If you have not returned False, then calculate the matrix product\n",
    "    #       of m1 and m2 and return it. Do not use a transpose,\n",
    "    #       but you swap their order if necessary\n",
    "    pass\n",
    "    "
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "def find_mean(values):\n",
    "    # TODO: Return the average of the values in the given Python list\n",
    "    pass"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 3,
   "metadata": {},
   "outputs": [],
   "source": [
    "input_array, inputs_minus_min, inputs_div_max = prepare_inputs([-1,2,7])"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 7,
   "metadata": {},
   "outputs": [],
   "source": [
    "input_array=np.arange(15).reshape(3, 5)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 8,
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Input as Array: [[ 0  1  2  3  4]\n",
      " [ 5  6  7  8  9]\n",
      " [10 11 12 13 14]]\n"
     ]
    }
   ],
   "source": [
    "print(\"Input as Array: {}\".format(input_array))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "print(\"Input minus min: {}\".format(inputs_minus_min))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "print(\"Input  Array: {}\".format(inputs_div_max))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "print(\"Multiply 1:\\n{}\".format(multiply_inputs(np.array([[1,2,3],[4,5,6]]), np.array([[1],[2],[3],[4]]))))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "print(\"Multiply 2:\\n{}\".format(multiply_inputs(np.array([[1,2,3],[4,5,6]]), np.array([[1],[2],[3]]))))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "print(\"Multiply 3:\\n{}\".format(multiply_inputs(np.array([[1,2,3],[4,5,6]]), np.array([[1,2]]))))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 2,
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Input as Array: None\n",
      "Input minus min: None\n",
      "Input  Array: None\n",
      "Multiply 1:\n",
      "None\n",
      "Multiply 2:\n",
      "None\n",
      "Multiply 3:\n",
      "None\n",
      "Mean == None\n"
     ]
    }
   ],
   "source": [
    "print(\"Mean == {}\".format(find_mean([1,3,4])))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python [conda env:PankajEnv]",
   "language": "python",
   "name": "conda-env-PankajEnv-py"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.7.1"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}