#include "pch.h"
#include "CppUnitTest.h"
#include "studentas.h"
#include "funkcijos.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTestavimas
{
	Studentas testing(const std::string& vardas,
		const std::string& pavarde,
		const std::vector<int>& paz,
		int egzas,
		float rez,
		float mediana)
	{
		Studentas stud;
		stud.setVardas(vardas);
		stud.setPavarde(pavarde);
		stud.setPazymiai(paz);
		stud.setEgzas(egzas);
		stud.setRez(rez);
		stud.setMediana(mediana);
		return stud;
	}
	TEST_CLASS(Testavimas)
	{
	public:
		TEST_METHOD(DefaultConstuctor)
		{
			Logger::WriteMessage("Default Constructor");
			Studentas Stud;
			Studentas Stud2 = testing("", "", {}, 0, 0.0f, 0.0f);
			Assert::AreEqual(Stud.output(), Stud2.output());
		}
		TEST_METHOD(ParameterizedConstuctor)
		{
			Logger::WriteMessage("Parameterized Constructor");
			Studentas Stud = testing("Vardas", "Pavarde", { 1,2,3 }, 10, 8.6, 2);
			Studentas Stud2 = testing("Vardas", "Pavarde", { 1,2,3 }, 10, 8.6, 2);
			Assert::AreEqual(Stud.output(), Stud2.output());
		}
		TEST_METHOD(CopyConstuctor)
		{
			Logger::WriteMessage("Copy Constructor");
			Studentas Stud = testing("Vardas", "Pavarde", { 1,2,3 }, 10, 8.6, 2);
			Studentas Stud2(Stud);
			Assert::AreEqual(Stud.output(), Stud2.output());
		}
		TEST_METHOD(CopyAssignment)
		{
			Logger::WriteMessage("Copy Assignmnet Operator");
			Studentas Stud = testing("Vardas", "Pavarde", { 1,2,3 }, 10, 8.6, 2);
			Studentas Stud2;
			Stud2 = Stud;
			Assert::AreEqual(Stud.output(), Stud2.output());
		}
		TEST_METHOD(Getters)
		{
			Logger::WriteMessage("Getters");
			Studentas Stud = testing("Vardas", "Pavarde", { 1,2,3 }, 10, 8.6, 2);
			Assert::AreEqual(Stud.vardas().c_str(), "Vardas");
			Assert::AreEqual(Stud.pavarde().c_str(), "Pavarde");
			const std::vector<int>& paz = Stud.pazymiai();
			Assert::AreEqual(static_cast<size_t>(3), paz.size());			Assert::AreEqual(10, Stud.egzas());
			Assert::AreEqual(8.6f, Stud.rez());
			Assert::AreEqual(2.0f, Stud.mediana());

		}
	};
}
