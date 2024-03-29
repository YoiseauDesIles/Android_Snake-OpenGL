#pragma once

#include <iostream>

struct vec2 {
	uint16_t posX;
	uint16_t posY;

	bool operator==(const vec2& other) {
		return (posX == other.posX) && (posY == other.posY);
	}

    bool isEmpty() {
        return posX==0 && posY == 0;
    }
};

enum class caseStatus {
	EMPTY,
	SNAKE,
	FRUIT
};

class Case
{
private:
	vec2 m_coord;
	caseStatus m_status;

public:
	Case();
	Case(vec2 coord);
	~Case() = default;

	bool isEmpty() const;
	bool isSnake() const;
	bool isFruit() const;
	caseStatus getCaseStatus() const;
	vec2 getCoords() const { return m_coord; }
	void setCaseStatus(caseStatus status);
	void emptyCase() { m_status = caseStatus::EMPTY; }
	void setFruit() { m_status = caseStatus::FRUIT; }
	void setSnake() { m_status = caseStatus::SNAKE; }

};

