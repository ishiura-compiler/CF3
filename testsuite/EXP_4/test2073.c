#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = -53;
uint64_t x14 = 168196428029LLU;
static int16_t x16 = -13581;
volatile int32_t x36 = INT32_MAX;
int8_t x63 = INT8_MAX;
static int16_t x89 = 0;
volatile int16_t x90 = 2;
volatile int32_t t9 = -164744417;
uint64_t x101 = 1380417579683778752LLU;
volatile uint64_t t11 = 4446901908144LLU;
int32_t x115 = INT32_MAX;
int32_t t13 = 0;
volatile int64_t t14 = -1187013324420817875LL;
int32_t x178 = -1;
int32_t t16 = -8329817;
volatile int64_t x191 = -483288820367691697LL;
uint8_t x193 = 1U;
volatile int16_t x196 = INT16_MIN;
int8_t x206 = 0;
int32_t x207 = INT32_MIN;
int32_t t20 = 487510874;
int8_t x210 = INT8_MAX;
int16_t x211 = -1;
int32_t t24 = -50892;
int16_t x253 = INT16_MAX;
volatile int8_t x254 = 32;
int8_t x256 = INT8_MIN;
uint32_t x297 = 797097143U;
int16_t x300 = -1;
static volatile uint32_t t29 = 0U;
uint64_t x316 = 1468716LLU;
volatile uint64_t t33 = 123290269453816996LLU;
static volatile int32_t t35 = 926954251;
volatile uint32_t x397 = 1U;
uint8_t x399 = 14U;
volatile uint32_t x401 = 27099914U;
uint32_t t37 = 257209461U;
uint64_t x425 = 403800052989559LLU;
int64_t x427 = INT64_MIN;
static int16_t x434 = INT16_MAX;
int32_t x436 = -517119971;
uint32_t t40 = UINT32_MAX;
volatile uint32_t x451 = 1U;
static volatile uint64_t t42 = UINT64_MAX;
int64_t x457 = 0LL;
uint32_t x487 = 308U;
uint64_t x502 = UINT64_MAX;
int64_t x514 = 1LL;
uint8_t x516 = 16U;
int32_t x545 = 1816843;
static volatile int32_t x592 = INT32_MAX;
uint8_t x617 = 2U;
int8_t x618 = INT8_MIN;
int32_t t55 = -189;
volatile uint8_t x649 = UINT8_MAX;
volatile uint16_t x653 = 0U;
int16_t x656 = -15206;
static volatile int32_t x671 = INT32_MIN;
static uint64_t t61 = 34880955048546779LLU;
uint8_t x684 = 15U;
volatile uint32_t x697 = 2843416U;
uint16_t x699 = 8014U;
uint32_t x708 = 17087U;
uint32_t x717 = 58165U;
int32_t x722 = INT32_MIN;
volatile int64_t x723 = INT64_MAX;
uint8_t x729 = 1U;
int32_t x730 = -2722349;
uint32_t x731 = 1U;
static volatile int64_t x749 = 3191358375981LL;
static uint32_t x757 = UINT32_MAX;
int64_t x759 = -1308342953LL;
uint32_t t72 = UINT32_MAX;
volatile uint8_t x791 = 3U;
volatile int32_t x797 = INT32_MAX;
uint32_t x798 = 29243U;
int16_t x800 = INT16_MIN;
int16_t x826 = -1;
static uint8_t x827 = 46U;
volatile uint64_t x829 = UINT64_MAX;
uint64_t x845 = 7LLU;
uint8_t x847 = 1U;
volatile int64_t x856 = INT64_MAX;
volatile uint64_t x889 = 14497299199516194LLU;
int8_t x890 = INT8_MIN;
uint16_t x891 = 23U;
static int64_t x892 = INT64_MAX;
uint32_t t86 = 84114U;
volatile int16_t x904 = INT16_MIN;
volatile int16_t x917 = 116;
int64_t t91 = 88189LL;
static volatile uint64_t t92 = 1LLU;
uint64_t x969 = UINT64_MAX;
uint16_t x972 = UINT16_MAX;
uint16_t x1011 = 2108U;
uint64_t x1012 = UINT64_MAX;
static volatile uint64_t t96 = 626241535848014LLU;
int32_t x1014 = -1;
int64_t x1038 = INT64_MIN;
uint64_t x1039 = UINT64_MAX;
static int32_t x1042 = INT32_MAX;


void f0(void) {
	volatile uint64_t x9 = UINT64_MAX;
	int8_t x11 = INT8_MIN;
	static uint32_t x12 = 29293665U;
	uint64_t t0 = 41529176693LLU;

	t0 = (x9<<(x10/(x11^x12)));

	if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x13 = 9;
	uint16_t x15 = UINT16_MAX;
	int32_t t1 = -22094;

	t1 = (x13<<(x14/(x15^x16)));

	if (t1 != 9) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x29 = INT16_MAX;
	int8_t x30 = -1;
	int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MIN;
	static int32_t t2 = 28;

	t2 = (x29<<(x30/(x31^x32)));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x33 = INT32_MAX;
	int16_t x34 = INT16_MAX;
	volatile int8_t x35 = INT8_MAX;
	static int32_t t3 = INT32_MAX;

	t3 = (x33<<(x34/(x35^x36)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x37 = 220988U;
	uint32_t x38 = UINT32_MAX;
	static int32_t x39 = INT32_MIN;
	int16_t x40 = 11274;
	volatile uint32_t t4 = 465930U;

	t4 = (x37<<(x38/(x39^x40)));

	if (t4 != 441976U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = 107U;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = -7;
	int64_t x44 = INT64_MAX;
	static volatile uint32_t t5 = 15991772U;

	t5 = (x41<<(x42/(x43^x44)));

	if (t5 != 107U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x53 = 1U;
	int16_t x54 = INT16_MAX;
	int32_t x55 = 491008;
	int16_t x56 = 3;
	volatile int32_t t6 = 6074;

	t6 = (x53<<(x54/(x55^x56)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x61 = 0U;
	int8_t x62 = -1;
	int32_t x64 = 58901;
	static volatile int32_t t7 = 384343;

	t7 = (x61<<(x62/(x63^x64)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = INT8_MAX;
	int32_t x66 = -900;
	volatile uint8_t x67 = UINT8_MAX;
	int32_t x68 = INT32_MAX;
	volatile int32_t t8 = 1921;

	t8 = (x65<<(x66/(x67^x68)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x91 = UINT16_MAX;
	static int8_t x92 = -61;

	t9 = (x89<<(x90/(x91^x92)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x97 = UINT16_MAX;
	static uint32_t x98 = 62784U;
	int16_t x99 = INT16_MIN;
	int16_t x100 = 0;
	int32_t t10 = 503479;

	t10 = (x97<<(x98/(x99^x100)));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x102 = 41059U;
	volatile int16_t x103 = INT16_MAX;
	volatile int32_t x104 = INT32_MAX;

	t11 = (x101<<(x102/(x103^x104)));

	if (t11 != 1380417579683778752LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x113 = 61LLU;
	int16_t x114 = INT16_MAX;
	volatile int64_t x116 = 183216514184LL;
	static uint64_t t12 = 865LLU;

	t12 = (x113<<(x114/(x115^x116)));

	if (t12 != 61LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x121 = UINT8_MAX;
	uint16_t x122 = UINT16_MAX;
	volatile uint16_t x123 = UINT16_MAX;
	volatile uint8_t x124 = 63U;

	t13 = (x121<<(x122/(x123^x124)));

	if (t13 != 510) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x125 = 33509820LL;
	int8_t x126 = INT8_MIN;
	static int16_t x127 = -6450;
	uint64_t x128 = 302309LLU;

	t14 = (x125<<(x126/(x127^x128)));

	if (t14 != 67019640LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x141 = 0U;
	volatile int16_t x142 = -71;
	uint8_t x143 = 0U;
	static int8_t x144 = -35;
	int32_t t15 = 1;

	t15 = (x141<<(x142/(x143^x144)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x177 = 0U;
	static uint16_t x179 = 30U;
	static uint64_t x180 = UINT64_MAX;

	t16 = (x177<<(x178/(x179^x180)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x185 = INT32_MAX;
	int32_t x186 = 3138;
	static int32_t x187 = INT32_MIN;
	int16_t x188 = -1;
	volatile int32_t t17 = INT32_MAX;

	t17 = (x185<<(x186/(x187^x188)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x189 = 4U;
	int16_t x190 = 52;
	int32_t x192 = INT32_MIN;
	uint32_t t18 = 174600U;

	t18 = (x189<<(x190/(x191^x192)));

	if (t18 != 4U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x194 = INT8_MIN;
	static uint8_t x195 = 1U;
	static int32_t t19 = 26827;

	t19 = (x193<<(x194/(x195^x196)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x205 = INT8_MAX;
	int16_t x208 = INT16_MIN;

	t20 = (x205<<(x206/(x207^x208)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x209 = UINT64_MAX;
	static volatile int8_t x212 = INT8_MIN;
	uint64_t t21 = 33738879059LLU;

	t21 = (x209<<(x210/(x211^x212)));

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x213 = 1160015019U;
	int16_t x214 = -1;
	static int8_t x215 = -1;
	volatile int8_t x216 = INT8_MAX;
	volatile uint32_t t22 = 57U;

	t22 = (x213<<(x214/(x215^x216)));

	if (t22 != 1160015019U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x221 = 611U;
	static int8_t x222 = -1;
	volatile int32_t x223 = INT32_MIN;
	int8_t x224 = 39;
	volatile int32_t t23 = -37409;

	t23 = (x221<<(x222/(x223^x224)));

	if (t23 != 611) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x237 = UINT8_MAX;
	int8_t x238 = -1;
	static uint16_t x239 = 2922U;
	volatile int8_t x240 = INT8_MIN;

	t24 = (x237<<(x238/(x239^x240)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x255 = -1;
	volatile int32_t t25 = 1;

	t25 = (x253<<(x254/(x255^x256)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x265 = 107159U;
	uint8_t x266 = UINT8_MAX;
	volatile int64_t x267 = 1798031420849344LL;
	volatile int32_t x268 = INT32_MIN;
	static uint32_t t26 = 6650918U;

	t26 = (x265<<(x266/(x267^x268)));

	if (t26 != 107159U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x277 = 2168852545LLU;
	volatile uint16_t x278 = 58U;
	uint16_t x279 = 2U;
	int64_t x280 = INT64_MIN;
	uint64_t t27 = 902364379LLU;

	t27 = (x277<<(x278/(x279^x280)));

	if (t27 != 2168852545LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x293 = INT64_MAX;
	int16_t x294 = 158;
	uint8_t x295 = 1U;
	uint64_t x296 = UINT64_MAX;
	volatile int64_t t28 = INT64_MAX;

	t28 = (x293<<(x294/(x295^x296)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x298 = 455758LLU;
	int64_t x299 = INT64_MAX;

	t29 = (x297<<(x298/(x299^x300)));

	if (t29 != 797097143U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x301 = INT64_MAX;
	volatile int16_t x302 = 1;
	static volatile int8_t x303 = -1;
	uint32_t x304 = 1237U;
	int64_t t30 = INT64_MAX;

	t30 = (x301<<(x302/(x303^x304)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x309 = UINT32_MAX;
	static volatile int16_t x310 = INT16_MAX;
	int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MAX;
	uint32_t t31 = UINT32_MAX;

	t31 = (x309<<(x310/(x311^x312)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x313 = 419281250455LLU;
	static int64_t x314 = -120009LL;
	int64_t x315 = -1LL;
	uint64_t t32 = 253LLU;

	t32 = (x313<<(x314/(x315^x316)));

	if (t32 != 838562500910LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x325 = 29463LLU;
	volatile int8_t x326 = -1;
	volatile int32_t x327 = -1;
	static int16_t x328 = INT16_MIN;

	t33 = (x325<<(x326/(x327^x328)));

	if (t33 != 29463LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x389 = UINT8_MAX;
	uint16_t x390 = 28U;
	int64_t x391 = 286217652067LL;
	static uint32_t x392 = 67080064U;
	volatile int32_t t34 = 8065;

	t34 = (x389<<(x390/(x391^x392)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = INT8_MIN;
	uint64_t x395 = 303277706052843LLU;
	int32_t x396 = -1;

	t35 = (x393<<(x394/(x395^x396)));

	if (t35 != 131070) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x398 = UINT32_MAX;
	int16_t x400 = -3;
	volatile uint32_t t36 = 2U;

	t36 = (x397<<(x398/(x399^x400)));

	if (t36 != 2U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x402 = 5;
	volatile int16_t x403 = INT16_MAX;
	uint16_t x404 = 216U;

	t37 = (x401<<(x402/(x403^x404)));

	if (t37 != 27099914U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x409 = 1U;
	int16_t x410 = 633;
	int32_t x411 = INT32_MIN;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t38 = -4252556;

	t38 = (x409<<(x410/(x411^x412)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x426 = INT8_MIN;
	int32_t x428 = 37115;
	volatile uint64_t t39 = 330714LLU;

	t39 = (x425<<(x426/(x427^x428)));

	if (t39 != 403800052989559LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x433 = UINT32_MAX;
	int64_t x435 = INT64_MAX;

	t40 = (x433<<(x434/(x435^x436)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x449 = 18LLU;
	static uint32_t x450 = 1U;
	static volatile uint64_t x452 = 59237LLU;
	volatile uint64_t t41 = 5854710024160933370LLU;

	t41 = (x449<<(x450/(x451^x452)));

	if (t41 != 18LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x453 = UINT64_MAX;
	int16_t x454 = INT16_MAX;
	int64_t x455 = INT64_MIN;
	static uint64_t x456 = 350935251LLU;

	t42 = (x453<<(x454/(x455^x456)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x458 = 4668U;
	uint16_t x459 = 1369U;
	uint64_t x460 = 165084602701095LLU;
	static volatile int64_t t43 = -575539461629226LL;

	t43 = (x457<<(x458/(x459^x460)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x477 = INT16_MAX;
	volatile int16_t x478 = INT16_MIN;
	uint16_t x479 = UINT16_MAX;
	int64_t x480 = INT64_MIN;
	int32_t t44 = 1;

	t44 = (x477<<(x478/(x479^x480)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x481 = 3U;
	int32_t x482 = INT32_MIN;
	int8_t x483 = -50;
	int64_t x484 = INT64_MAX;
	int32_t t45 = 10575;

	t45 = (x481<<(x482/(x483^x484)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x485 = 1782913335930096LLU;
	static uint32_t x486 = 6007U;
	volatile int64_t x488 = INT64_MAX;
	volatile uint64_t t46 = 16168632LLU;

	t46 = (x485<<(x486/(x487^x488)));

	if (t46 != 1782913335930096LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x489 = 1;
	int64_t x490 = 7068LL;
	static int16_t x491 = INT16_MAX;
	int64_t x492 = -5904544579LL;
	int32_t t47 = 3434220;

	t47 = (x489<<(x490/(x491^x492)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x501 = UINT64_MAX;
	static uint64_t x503 = 10LLU;
	int16_t x504 = -1;
	static volatile uint64_t t48 = 5LLU;

	t48 = (x501<<(x502/(x503^x504)));

	if (t48 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x513 = 226931760052815203LL;
	volatile uint64_t x515 = 421178738115360LLU;
	static volatile int64_t t49 = -10035236677045423LL;

	t49 = (x513<<(x514/(x515^x516)));

	if (t49 != 226931760052815203LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x529 = 0;
	uint8_t x530 = 1U;
	int16_t x531 = INT16_MAX;
	int16_t x532 = 20;
	volatile int32_t t50 = 1187;

	t50 = (x529<<(x530/(x531^x532)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x537 = UINT16_MAX;
	int32_t x538 = INT32_MAX;
	volatile uint32_t x539 = 925942321U;
	int8_t x540 = INT8_MIN;
	volatile int32_t t51 = 0;

	t51 = (x537<<(x538/(x539^x540)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x546 = UINT64_MAX;
	int16_t x547 = INT16_MAX;
	static int64_t x548 = INT64_MAX;
	static int32_t t52 = -169;

	t52 = (x545<<(x546/(x547^x548)));

	if (t52 != 7267372) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x589 = UINT64_MAX;
	static uint32_t x590 = UINT32_MAX;
	int8_t x591 = -1;
	uint64_t t53 = 357786099LLU;

	t53 = (x589<<(x590/(x591^x592)));

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x605 = UINT16_MAX;
	volatile int64_t x606 = 3360361LL;
	volatile uint16_t x607 = 4U;
	int32_t x608 = -7932756;
	volatile int32_t t54 = -3079;

	t54 = (x605<<(x606/(x607^x608)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x619 = 0;
	int16_t x620 = INT16_MIN;

	t55 = (x617<<(x618/(x619^x620)));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x633 = UINT32_MAX;
	int16_t x634 = -1;
	uint32_t x635 = UINT32_MAX;
	static int32_t x636 = INT32_MAX;
	static volatile uint32_t t56 = 121U;

	t56 = (x633<<(x634/(x635^x636)));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x650 = 0;
	int8_t x651 = 7;
	uint8_t x652 = 9U;
	volatile int32_t t57 = -22377;

	t57 = (x649<<(x650/(x651^x652)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x654 = 4713U;
	int32_t x655 = -5207;
	int32_t t58 = 36763;

	t58 = (x653<<(x654/(x655^x656)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x661 = 1U;
	int32_t x662 = -6159;
	volatile uint64_t x663 = 740230001LLU;
	static int16_t x664 = INT16_MIN;
	int32_t t59 = -97535688;

	t59 = (x661<<(x662/(x663^x664)));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x669 = UINT64_MAX;
	volatile int32_t x670 = INT32_MIN;
	int16_t x672 = INT16_MAX;
	volatile uint64_t t60 = 24221LLU;

	t60 = (x669<<(x670/(x671^x672)));

	if (t60 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x673 = 172536976798LLU;
	int8_t x674 = INT8_MIN;
	int64_t x675 = INT64_MIN;
	volatile uint16_t x676 = UINT16_MAX;

	t61 = (x673<<(x674/(x675^x676)));

	if (t61 != 172536976798LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x681 = 5122305816LLU;
	volatile int8_t x682 = INT8_MIN;
	int16_t x683 = INT16_MAX;
	uint64_t t62 = 16128349LLU;

	t62 = (x681<<(x682/(x683^x684)));

	if (t62 != 5122305816LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x685 = UINT32_MAX;
	int16_t x686 = -1;
	int16_t x687 = INT16_MAX;
	int64_t x688 = 9088688090607LL;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x685<<(x686/(x687^x688)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x698 = -4LL;
	int32_t x700 = INT32_MAX;
	volatile uint32_t t64 = 3195740U;

	t64 = (x697<<(x698/(x699^x700)));

	if (t64 != 2843416U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x705 = 7872251;
	int8_t x706 = -1;
	int32_t x707 = -1;
	volatile int32_t t65 = -700183;

	t65 = (x705<<(x706/(x707^x708)));

	if (t65 != 15744502) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x713 = 5542;
	volatile int16_t x714 = INT16_MIN;
	int32_t x715 = INT32_MAX;
	volatile int32_t x716 = 1553;
	static int32_t t66 = -144649;

	t66 = (x713<<(x714/(x715^x716)));

	if (t66 != 5542) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x718 = INT8_MAX;
	uint64_t x719 = 538993457477567LLU;
	int64_t x720 = INT64_MIN;
	volatile uint32_t t67 = 0U;

	t67 = (x717<<(x718/(x719^x720)));

	if (t67 != 58165U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x721 = 247608485LLU;
	static volatile uint8_t x724 = 79U;
	volatile uint64_t t68 = 1LLU;

	t68 = (x721<<(x722/(x723^x724)));

	if (t68 != 247608485LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x732 = INT8_MIN;
	int32_t t69 = -9634;

	t69 = (x729<<(x730/(x731^x732)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x733 = UINT16_MAX;
	volatile int32_t x734 = 118;
	static int8_t x735 = INT8_MIN;
	volatile uint32_t x736 = 6U;
	int32_t t70 = 13;

	t70 = (x733<<(x734/(x735^x736)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x750 = 1335;
	int16_t x751 = -1;
	static int32_t x752 = INT32_MAX;
	volatile int64_t t71 = 1948779554883560LL;

	t71 = (x749<<(x750/(x751^x752)));

	if (t71 != 3191358375981LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x758 = -2;
	int8_t x760 = INT8_MIN;

	t72 = (x757<<(x758/(x759^x760)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x765 = INT8_MAX;
	int16_t x766 = INT16_MIN;
	volatile int32_t x767 = INT32_MAX;
	int8_t x768 = INT8_MIN;
	volatile int32_t t73 = -28824;

	t73 = (x765<<(x766/(x767^x768)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x769 = 4063857412544LLU;
	static uint64_t x770 = 1167479449032LLU;
	int16_t x771 = INT16_MIN;
	int64_t x772 = INT64_MIN;
	volatile uint64_t t74 = 11724LLU;

	t74 = (x769<<(x770/(x771^x772)));

	if (t74 != 4063857412544LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x777 = UINT64_MAX;
	uint32_t x778 = 2U;
	uint64_t x779 = UINT64_MAX;
	int8_t x780 = -3;
	volatile uint64_t t75 = 208512356LLU;

	t75 = (x777<<(x778/(x779^x780)));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x789 = UINT64_MAX;
	volatile uint32_t x790 = UINT32_MAX;
	volatile int64_t x792 = INT64_MAX;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x789<<(x790/(x791^x792)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x799 = 502342;
	int32_t t77 = INT32_MAX;

	t77 = (x797<<(x798/(x799^x800)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x801 = 1602U;
	static volatile uint8_t x802 = UINT8_MAX;
	int8_t x803 = INT8_MAX;
	static volatile int16_t x804 = 449;
	static uint32_t t78 = 896U;

	t78 = (x801<<(x802/(x803^x804)));

	if (t78 != 1602U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x825 = 877LLU;
	static uint16_t x828 = 15U;
	uint64_t t79 = 30944LLU;

	t79 = (x825<<(x826/(x827^x828)));

	if (t79 != 877LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x830 = UINT32_MAX;
	int16_t x831 = -1;
	uint16_t x832 = UINT16_MAX;
	volatile uint64_t t80 = 2891237360149109LLU;

	t80 = (x829<<(x830/(x831^x832)));

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x846 = 24;
	static int32_t x848 = INT32_MAX;
	volatile uint64_t t81 = 186642793443749730LLU;

	t81 = (x845<<(x846/(x847^x848)));

	if (t81 != 7LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x849 = 7965138518212LLU;
	volatile int64_t x850 = -1LL;
	int32_t x851 = INT32_MAX;
	int64_t x852 = -1LL;
	uint64_t t82 = 1556243083388LLU;

	t82 = (x849<<(x850/(x851^x852)));

	if (t82 != 7965138518212LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x853 = 54U;
	int32_t x854 = INT32_MAX;
	volatile uint32_t x855 = UINT32_MAX;
	static int32_t t83 = 744;

	t83 = (x853<<(x854/(x855^x856)));

	if (t83 != 54) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x881 = 7401641U;
	volatile int64_t x882 = -1LL;
	static uint16_t x883 = 225U;
	static volatile int16_t x884 = 2;
	volatile uint32_t t84 = 477U;

	t84 = (x881<<(x882/(x883^x884)));

	if (t84 != 7401641U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t t85 = 892486LLU;

	t85 = (x889<<(x890/(x891^x892)));

	if (t85 != 14497299199516194LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x893 = 4612U;
	int16_t x894 = INT16_MAX;
	int16_t x895 = INT16_MAX;
	static uint16_t x896 = 21064U;

	t86 = (x893<<(x894/(x895^x896)));

	if (t86 != 18448U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x901 = UINT16_MAX;
	volatile uint16_t x902 = 16261U;
	uint32_t x903 = 1366560U;
	int32_t t87 = -1719409;

	t87 = (x901<<(x902/(x903^x904)));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x913 = UINT8_MAX;
	int8_t x914 = INT8_MAX;
	int16_t x915 = INT16_MIN;
	int8_t x916 = 1;
	volatile int32_t t88 = -194;

	t88 = (x913<<(x914/(x915^x916)));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x918 = 712;
	uint32_t x919 = 6U;
	int8_t x920 = -15;
	volatile int32_t t89 = -498573646;

	t89 = (x917<<(x918/(x919^x920)));

	if (t89 != 116) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x937 = 92740;
	int64_t x938 = 3148472013510114LL;
	static int64_t x939 = 16701236119952454LL;
	volatile uint32_t x940 = 191360541U;
	int32_t t90 = -166333622;

	t90 = (x937<<(x938/(x939^x940)));

	if (t90 != 92740) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x941 = 1870LL;
	int32_t x942 = -1;
	int64_t x943 = -25328LL;
	int32_t x944 = INT32_MAX;

	t91 = (x941<<(x942/(x943^x944)));

	if (t91 != 1870LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x957 = UINT64_MAX;
	volatile int16_t x958 = -1;
	uint32_t x959 = 32735352U;
	int16_t x960 = INT16_MIN;

	t92 = (x957<<(x958/(x959^x960)));

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x970 = INT8_MAX;
	uint32_t x971 = 55272U;
	static uint64_t t93 = UINT64_MAX;

	t93 = (x969<<(x970/(x971^x972)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x989 = 40295379LL;
	uint16_t x990 = 1U;
	volatile int32_t x991 = -1;
	int16_t x992 = 1;
	static int64_t t94 = -15226980583948LL;

	t94 = (x989<<(x990/(x991^x992)));

	if (t94 != 40295379LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x997 = UINT8_MAX;
	int8_t x998 = -3;
	static uint32_t x999 = 17411853U;
	static int32_t x1000 = -264175;
	volatile int32_t t95 = -29835;

	t95 = (x997<<(x998/(x999^x1000)));

	if (t95 != 510) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1009 = 35488LLU;
	uint32_t x1010 = UINT32_MAX;

	t96 = (x1009<<(x1010/(x1011^x1012)));

	if (t96 != 35488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1013 = 1U;
	int32_t x1015 = -82932313;
	volatile int32_t x1016 = INT32_MIN;
	int32_t t97 = 23;

	t97 = (x1013<<(x1014/(x1015^x1016)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1037 = INT32_MAX;
	uint16_t x1040 = 13U;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x1037<<(x1038/(x1039^x1040)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1041 = 798188LLU;
	int32_t x1043 = INT32_MIN;
	uint64_t x1044 = UINT64_MAX;
	volatile uint64_t t99 = 71705405721356866LLU;

	t99 = (x1041<<(x1042/(x1043^x1044)));

	if (t99 != 1596376LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

