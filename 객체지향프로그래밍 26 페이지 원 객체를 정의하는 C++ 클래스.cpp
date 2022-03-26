class Circle {
	private:
		int radius;
	public:
		Circle(int r) { radius = r; }
		double getArea() { return 3.14*radius*radius; }
};
