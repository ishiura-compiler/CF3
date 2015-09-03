#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 127299U;
volatile uint64_t t2 = 310507289388670491LLU;
static volatile int32_t x282 = 93695;
static int8_t x283 = INT8_MIN;
uint32_t t6 = 45935197U;
uint8_t x569 = 101U;
int8_t x570 = INT8_MAX;
volatile uint64_t t10 = 1930LLU;
uint16_t x616 = 11U;
uint8_t x761 = 3U;
uint64_t x959 = 28102199LLU;
uint8_t x1017 = 1U;
uint16_t x1206 = 2389U;
uint64_t x1285 = 0LLU;
uint16_t x1308 = 0U;
int32_t t26 = -938;
static uint16_t x1431 = UINT16_MAX;
volatile int64_t x1441 = 472LL;
uint8_t x1505 = 2U;
volatile uint16_t x1752 = 30U;
int32_t x2022 = -81;
uint64_t x2127 = 2LLU;
static uint16_t x2253 = UINT16_MAX;


void f0(void) {
	uint32_t x25 = 89045U;
	uint8_t x26 = UINT8_MAX;
	uint16_t x27 = 2U;
	int8_t x28 = 1;

	t0 = (((x25|x26)|x27)<<x28);

	if (t0 != 178174U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x37 = 42U;
	int8_t x38 = 19;
	int16_t x39 = INT16_MAX;
	uint16_t x40 = 4U;
	volatile int32_t t1 = -18000;

	t1 = (((x37|x38)|x39)<<x40);

	if (t1 != 524272) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x177 = 47391891LLU;
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = INT64_MIN;
	uint16_t x180 = 52U;

	t2 = (((x177|x178)|x179)<<x180);

	if (t2 != 18442240474082181120LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x281 = UINT64_MAX;
	int8_t x284 = 3;
	uint64_t t3 = 17292146687515452LLU;

	t3 = (((x281|x282)|x283)<<x284);

	if (t3 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x305 = 31U;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = UINT16_MAX;
	static int16_t x308 = 2;
	static volatile uint32_t t4 = 384176U;

	t4 = (((x305|x306)|x307)<<x308);

	if (t4 != 4294967292U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x325 = 1;
	static int8_t x326 = 1;
	int16_t x327 = 1;
	uint16_t x328 = 1U;
	static int32_t t5 = -402;

	t5 = (((x325|x326)|x327)<<x328);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = 7;

	t6 = (((x385|x386)|x387)<<x388);

	if (t6 != 4294967168U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x433 = UINT32_MAX;
	uint8_t x434 = 119U;
	int16_t x435 = -2;
	int8_t x436 = 22;
	uint32_t t7 = 18805U;

	t7 = (((x433|x434)|x435)<<x436);

	if (t7 != 4290772992U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x497 = INT8_MIN;
	int8_t x498 = INT8_MIN;
	uint32_t x499 = 4U;
	volatile uint8_t x500 = 2U;
	volatile uint32_t t8 = 418390217U;

	t8 = (((x497|x498)|x499)<<x500);

	if (t8 != 4294966800U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x571 = UINT32_MAX;
	uint64_t x572 = 0LLU;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (((x569|x570)|x571)<<x572);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x601 = 47U;
	static uint64_t x602 = 252238786818366673LLU;
	int8_t x603 = -1;
	uint8_t x604 = 11U;

	t10 = (((x601|x602)|x603)<<x604);

	if (t10 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x613 = -1;
	uint64_t x614 = 198399LLU;
	int64_t x615 = INT64_MAX;
	volatile uint64_t t11 = 9954LLU;

	t11 = (((x613|x614)|x615)<<x616);

	if (t11 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x633 = 413612624178LLU;
	int8_t x634 = -1;
	volatile uint32_t x635 = UINT32_MAX;
	uint8_t x636 = 5U;
	volatile uint64_t t12 = 12LLU;

	t12 = (((x633|x634)|x635)<<x636);

	if (t12 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x677 = 2;
	int64_t x678 = 92277652LL;
	volatile uint8_t x679 = UINT8_MAX;
	uint32_t x680 = 26U;
	int64_t t13 = -31281023LL;

	t13 = (((x677|x678)|x679)<<x680);

	if (t13 != 6192655578955776LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x762 = INT8_MIN;
	uint32_t x763 = 62U;
	volatile uint16_t x764 = 2U;
	volatile uint32_t t14 = 9330112U;

	t14 = (((x761|x762)|x763)<<x764);

	if (t14 != 4294967036U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x789 = 1U;
	int32_t x790 = INT32_MIN;
	volatile int32_t x791 = INT32_MIN;
	static uint16_t x792 = 1U;
	static uint32_t t15 = 1816U;

	t15 = (((x789|x790)|x791)<<x792);

	if (t15 != 2U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x801 = UINT32_MAX;
	int16_t x802 = -1;
	int32_t x803 = -776200310;
	uint8_t x804 = 2U;
	uint32_t t16 = 176U;

	t16 = (((x801|x802)|x803)<<x804);

	if (t16 != 4294967292U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x957 = UINT8_MAX;
	static int8_t x958 = INT8_MIN;
	volatile uint8_t x960 = 9U;
	static volatile uint64_t t17 = 1610772LLU;

	t17 = (((x957|x958)|x959)<<x960);

	if (t17 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1018 = 1035010394488717LL;
	uint16_t x1019 = 39U;
	uint8_t x1020 = 6U;
	volatile int64_t t18 = 342613LL;

	t18 = (((x1017|x1018)|x1019)<<x1020);

	if (t18 != 66240665247280064LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1109 = -1;
	uint64_t x1110 = 11123487416014LLU;
	uint16_t x1111 = UINT16_MAX;
	uint32_t x1112 = 2U;
	volatile uint64_t t19 = 466740LLU;

	t19 = (((x1109|x1110)|x1111)<<x1112);

	if (t19 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1197 = 5818U;
	volatile int16_t x1198 = INT16_MIN;
	volatile uint64_t x1199 = UINT64_MAX;
	uint8_t x1200 = 2U;
	uint64_t t20 = 3147095827011509LLU;

	t20 = (((x1197|x1198)|x1199)<<x1200);

	if (t20 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1205 = 1201279176992038451LLU;
	int8_t x1207 = -1;
	int32_t x1208 = 10;
	static volatile uint64_t t21 = 11332843083494LLU;

	t21 = (((x1205|x1206)|x1207)<<x1208);

	if (t21 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1229 = 0U;
	int16_t x1230 = INT16_MIN;
	static uint8_t x1231 = 32U;
	int8_t x1232 = 24;
	volatile uint32_t t22 = 7599U;

	t22 = (((x1229|x1230)|x1231)<<x1232);

	if (t22 != 536870912U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1241 = 32U;
	uint8_t x1242 = UINT8_MAX;
	volatile int32_t x1243 = INT32_MAX;
	int8_t x1244 = 2;
	static volatile uint32_t t23 = 6303260U;

	t23 = (((x1241|x1242)|x1243)<<x1244);

	if (t23 != 4294967292U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1286 = 17U;
	int32_t x1287 = 207862197;
	int8_t x1288 = 7;
	uint64_t t24 = 1033783502525271LLU;

	t24 = (((x1285|x1286)|x1287)<<x1288);

	if (t24 != 26606361216LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1305 = 937045034U;
	static int16_t x1306 = 15;
	uint64_t x1307 = 116161519988327LLU;
	uint64_t t25 = 285791873LLU;

	t25 = (((x1305|x1306)|x1307)<<x1308);

	if (t25 != 116161550921327LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1369 = 43U;
	int8_t x1370 = INT8_MAX;
	int8_t x1371 = INT8_MAX;
	int8_t x1372 = 11;

	t26 = (((x1369|x1370)|x1371)<<x1372);

	if (t26 != 260096) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1429 = 26952U;
	int16_t x1430 = INT16_MAX;
	uint8_t x1432 = 0U;
	int32_t t27 = 115;

	t27 = (((x1429|x1430)|x1431)<<x1432);

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1442 = -997392666706715974LL;
	uint64_t x1443 = 256216900585LLU;
	uint8_t x1444 = 1U;
	volatile uint64_t t28 = 136698838LLU;

	t28 = (((x1441|x1442)|x1443)<<x1444);

	if (t28 != 16451958950770767862LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1506 = UINT64_MAX;
	uint32_t x1507 = 19696106U;
	volatile uint16_t x1508 = 20U;
	uint64_t t29 = 8381558489LLU;

	t29 = (((x1505|x1506)|x1507)<<x1508);

	if (t29 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1749 = UINT64_MAX;
	uint32_t x1750 = UINT32_MAX;
	uint16_t x1751 = 21156U;
	uint64_t t30 = 8017384229534LLU;

	t30 = (((x1749|x1750)|x1751)<<x1752);

	if (t30 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2021 = 18995915U;
	int32_t x2023 = INT32_MIN;
	uint32_t x2024 = 10U;
	uint32_t t31 = 1011189U;

	t31 = (((x2021|x2022)|x2023)<<x2024);

	if (t31 != 4294949888U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2097 = UINT8_MAX;
	static uint64_t x2098 = 97160096LLU;
	static int8_t x2099 = INT8_MIN;
	int8_t x2100 = 28;
	volatile uint64_t t32 = 645590LLU;

	t32 = (((x2097|x2098)|x2099)<<x2100);

	if (t32 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2125 = INT32_MIN;
	volatile uint64_t x2126 = 6939408771LLU;
	static uint16_t x2128 = 26U;
	uint64_t t33 = 1410034964555306LLU;

	t33 = (((x2125|x2126)|x2127)<<x2128);

	if (t33 != 18335979160859574272LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2141 = UINT32_MAX;
	int32_t x2142 = INT32_MAX;
	static int32_t x2143 = 4169423;
	static int32_t x2144 = 3;
	uint32_t t34 = 210804U;

	t34 = (((x2141|x2142)|x2143)<<x2144);

	if (t34 != 4294967288U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2193 = -110;
	uint64_t x2194 = 13464899LLU;
	static uint64_t x2195 = UINT64_MAX;
	uint8_t x2196 = 14U;
	static uint64_t t35 = 2LLU;

	t35 = (((x2193|x2194)|x2195)<<x2196);

	if (t35 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2225 = UINT8_MAX;
	int8_t x2226 = INT8_MIN;
	volatile uint32_t x2227 = 27427U;
	int16_t x2228 = 1;
	volatile uint32_t t36 = 13852U;

	t36 = (((x2225|x2226)|x2227)<<x2228);

	if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x2254 = UINT64_MAX;
	uint32_t x2255 = 124625617U;
	uint32_t x2256 = 27U;
	volatile uint64_t t37 = 888318348716052676LLU;

	t37 = (((x2253|x2254)|x2255)<<x2256);

	if (t37 != 18446744073575333888LLU) { NG(); } else { ; }
	
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


    return 0;
}

