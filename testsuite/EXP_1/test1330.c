#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 7425;
uint16_t x9 = 196U;
int64_t x10 = INT64_MIN;
int64_t t3 = -2331167347712467870LL;
int16_t x20 = INT16_MIN;
int32_t x25 = INT32_MIN;
int32_t t6 = -18971;
static uint32_t x29 = 3U;
volatile uint32_t t9 = 6524348U;
int64_t x46 = -1LL;
int8_t x56 = INT8_MIN;
volatile int16_t x60 = 15363;
int16_t x66 = INT16_MIN;
int8_t x70 = INT8_MAX;
static volatile int16_t x71 = INT16_MIN;
static uint32_t x82 = UINT32_MAX;
int16_t x83 = INT16_MIN;
uint64_t x88 = 119147490983543275LLU;
uint64_t t22 = 6131067LLU;
int8_t x98 = INT8_MIN;
uint8_t x100 = 1U;
uint32_t t27 = 7632296U;
static int16_t x113 = INT16_MIN;
static int64_t x120 = INT64_MIN;
uint16_t x135 = 774U;
volatile int64_t x139 = -1LL;
int16_t x140 = 11721;
volatile int64_t t34 = -4343666958LL;
int64_t x146 = -1LL;
int32_t t38 = 826503;
volatile int32_t t39 = 18897883;
int16_t x161 = -6338;
int8_t x177 = -1;
uint64_t x182 = 5667LLU;
volatile int64_t t45 = 286018493901LL;
int8_t x189 = INT8_MIN;
int32_t x190 = INT32_MIN;
int16_t x196 = INT16_MIN;
int16_t x199 = -1;
int64_t x201 = INT64_MAX;
int16_t x207 = INT16_MIN;
static int32_t x211 = INT32_MAX;
static uint64_t t51 = 3LLU;
volatile uint64_t t53 = 9410461211LLU;
int32_t t54 = 1525511;
static int64_t t55 = -557260997860LL;
int16_t x232 = INT16_MIN;
int64_t x238 = -5238LL;
uint32_t x240 = UINT32_MAX;
int32_t x243 = INT32_MIN;
static volatile int32_t x245 = INT32_MIN;
uint16_t x258 = 9U;
volatile int8_t x259 = -1;
int64_t x266 = 218323387LL;
static uint64_t t66 = 531785463LLU;
int32_t x274 = INT32_MAX;
int16_t x276 = 2423;
int8_t x290 = INT8_MAX;
uint8_t x296 = 1U;
int64_t t72 = INT64_MIN;
static int64_t x298 = INT64_MIN;
uint32_t x306 = 14U;
uint32_t x310 = UINT32_MAX;
uint8_t x316 = UINT8_MAX;
int8_t x318 = INT8_MIN;
int32_t t80 = -10;
volatile int64_t t81 = -50255897LL;
volatile int8_t x337 = -1;
volatile int64_t t83 = -1035LL;
static volatile uint64_t t84 = 199LLU;
uint16_t x346 = 22864U;
int32_t t85 = 0;
int64_t x350 = -1LL;
int32_t x354 = -1;
volatile int32_t t87 = 215213261;
uint32_t x357 = 26072538U;
uint8_t x362 = 1U;
int8_t x363 = -15;
static uint32_t x371 = 1705010638U;
volatile uint32_t t90 = 480U;
int32_t x373 = INT32_MIN;
uint64_t x376 = UINT64_MAX;
uint64_t t91 = 61005413503544563LLU;
static volatile int32_t x380 = -1;
int32_t x381 = -15856550;
static volatile int8_t x390 = -1;
uint32_t x394 = 260778770U;
int32_t x395 = INT32_MAX;
uint64_t t96 = 1LLU;
static int16_t x399 = 1;


void f0(void) {
	int16_t x1 = -1452;
	uint16_t x2 = 350U;
	volatile int16_t x3 = INT16_MIN;
	static volatile int32_t x4 = 919474254;
	int32_t t0 = 2;

	t0 = (((x1==x2)|x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -71;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = -1;
	int8_t x8 = INT8_MIN;

	t1 = (((x5==x6)|x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x11 = UINT64_MAX;
	static volatile int16_t x12 = INT16_MIN;
	uint64_t t2 = 1170LLU;

	t2 = (((x9==x10)|x11)/x12);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int16_t x14 = INT16_MIN;
	static volatile int64_t x15 = INT64_MIN;
	int64_t x16 = -1205942334862551270LL;

	t3 = (((x13==x14)|x15)/x16);

	if (t3 != 7LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 135554LLU;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MIN;
	static volatile int32_t t4 = 0;

	t4 = (((x17==x18)|x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MAX;
	static uint8_t x22 = 0U;
	uint32_t x23 = 20363528U;
	uint8_t x24 = 114U;
	static uint32_t t5 = 5558U;

	t5 = (((x21==x22)|x23)/x24);

	if (t5 != 178627U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	static volatile int32_t x27 = -22;
	int16_t x28 = INT16_MIN;

	t6 = (((x25==x26)|x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MAX;
	int8_t x31 = INT8_MAX;
	int64_t x32 = -1LL;
	volatile int64_t t7 = -1005LL;

	t7 = (((x29==x30)|x31)/x32);

	if (t7 != -127LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	static volatile uint32_t x34 = 2405U;
	uint16_t x35 = UINT16_MAX;
	int32_t x36 = INT32_MIN;
	static int32_t t8 = 351137;

	t8 = (((x33==x34)|x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 26U;
	volatile uint16_t x38 = 344U;
	volatile int8_t x39 = INT8_MAX;
	uint32_t x40 = 75U;

	t9 = (((x37==x38)|x39)/x40);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int64_t x42 = INT64_MIN;
	volatile uint32_t x43 = UINT32_MAX;
	static int32_t x44 = INT32_MIN;
	volatile uint32_t t10 = 23679U;

	t10 = (((x41==x42)|x43)/x44);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	volatile uint64_t x47 = UINT64_MAX;
	int64_t x48 = -1LL;
	uint64_t t11 = 32385705247LLU;

	t11 = (((x45==x46)|x47)/x48);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 932523676143321923LLU;
	int32_t x50 = INT32_MIN;
	volatile uint64_t x51 = 4489102722614LLU;
	volatile int32_t x52 = INT32_MAX;
	volatile uint64_t t12 = 93167350157LLU;

	t12 = (((x49==x50)|x51)/x52);

	if (t12 != 2090LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x53 = 409LLU;
	int64_t x54 = INT64_MIN;
	uint8_t x55 = 21U;
	int32_t t13 = 48771177;

	t13 = (((x53==x54)|x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	int8_t x58 = INT8_MIN;
	uint64_t x59 = 14LLU;
	volatile uint64_t t14 = 64566LLU;

	t14 = (((x57==x58)|x59)/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = -10715;
	int16_t x63 = -208;
	uint32_t x64 = 30067U;
	uint32_t t15 = 27202786U;

	t15 = (((x61==x62)|x63)/x64);

	if (t15 != 142846U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	static int64_t x67 = -1LL;
	volatile uint64_t x68 = 335992570908248449LLU;
	volatile uint64_t t16 = 1286190510076165LLU;

	t16 = (((x65==x66)|x67)/x68);

	if (t16 != 54LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 188U;
	int64_t x72 = INT64_MAX;
	int64_t t17 = -2394376190LL;

	t17 = (((x69==x70)|x71)/x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 7U;
	uint64_t x74 = UINT64_MAX;
	static volatile int16_t x75 = 3264;
	uint64_t x76 = 255392218289038LLU;
	volatile uint64_t t18 = 4116619888953LLU;

	t18 = (((x73==x74)|x75)/x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int8_t x78 = -1;
	volatile int64_t x79 = INT64_MIN;
	volatile int32_t x80 = INT32_MAX;
	int64_t t19 = 87952873LL;

	t19 = (((x77==x78)|x79)/x80);

	if (t19 != -4294967298LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = -8124;
	volatile int32_t x84 = 456;
	volatile int32_t t20 = 19;

	t20 = (((x81==x82)|x83)/x84);

	if (t20 != -71) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 438;
	static uint16_t x86 = UINT16_MAX;
	int8_t x87 = INT8_MIN;
	volatile uint64_t t21 = 2LLU;

	t21 = (((x85==x86)|x87)/x88);

	if (t21 != 154LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 21767548U;
	static int16_t x90 = -111;
	uint16_t x91 = 1821U;
	uint64_t x92 = 1791LLU;

	t22 = (((x89==x90)|x91)/x92);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = 484LL;
	static int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = -2806167;

	t23 = (((x93==x94)|x95)/x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 268;
	int16_t x99 = INT16_MAX;
	static volatile int32_t t24 = -3218076;

	t24 = (((x97==x98)|x99)/x100);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = INT64_MAX;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t25 = 0LL;

	t25 = (((x101==x102)|x103)/x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -11;
	static uint32_t x106 = UINT32_MAX;
	static int32_t x107 = INT32_MAX;
	int64_t x108 = INT64_MIN;
	int64_t t26 = 484487LL;

	t26 = (((x105==x106)|x107)/x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -3;
	int32_t x110 = INT32_MIN;
	static int16_t x111 = INT16_MIN;
	uint32_t x112 = UINT32_MAX;

	t27 = (((x109==x110)|x111)/x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = 1;

	t28 = (((x113==x114)|x115)/x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 274U;
	int8_t x118 = INT8_MAX;
	static uint8_t x119 = UINT8_MAX;
	int64_t t29 = -3338982785086804153LL;

	t29 = (((x117==x118)|x119)/x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static uint8_t x122 = UINT8_MAX;
	uint16_t x123 = 8U;
	uint8_t x124 = 34U;
	volatile int32_t t30 = 451399197;

	t30 = (((x121==x122)|x123)/x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	static int16_t x126 = 1834;
	uint32_t x127 = 2U;
	int8_t x128 = INT8_MIN;
	uint32_t t31 = 213U;

	t31 = (((x125==x126)|x127)/x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -14568286LL;
	int16_t x130 = -1;
	volatile int16_t x131 = INT16_MIN;
	volatile int32_t x132 = INT32_MIN;
	int32_t t32 = -33;

	t32 = (((x129==x130)|x131)/x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	static int8_t x134 = INT8_MIN;
	uint8_t x136 = 8U;
	volatile int32_t t33 = 31498472;

	t33 = (((x133==x134)|x135)/x136);

	if (t33 != 96) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = -5999290;
	static volatile int8_t x138 = -4;

	t34 = (((x137==x138)|x139)/x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	volatile int32_t x142 = 734371201;
	volatile int16_t x143 = 610;
	static volatile int64_t x144 = INT64_MIN;
	volatile int64_t t35 = -671722454742LL;

	t35 = (((x141==x142)|x143)/x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 29754875U;
	int64_t x147 = 420240056LL;
	uint8_t x148 = 106U;
	int64_t t36 = -452157561LL;

	t36 = (((x145==x146)|x147)/x148);

	if (t36 != 3964528LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int8_t x150 = INT8_MAX;
	static uint64_t x151 = 372863606672705LLU;
	int8_t x152 = 7;
	volatile uint64_t t37 = 2863203304LLU;

	t37 = (((x149==x150)|x151)/x152);

	if (t37 != 53266229524672LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	static uint64_t x154 = 2129228LLU;
	uint16_t x155 = 367U;
	int32_t x156 = -987;

	t38 = (((x153==x154)|x155)/x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 10;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MIN;
	volatile int16_t x160 = 6187;

	t39 = (((x157==x158)|x159)/x160);

	if (t39 != -347096) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MIN;
	static int8_t x163 = -1;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -169199636;

	t40 = (((x161==x162)|x163)/x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -2406347;
	uint16_t x166 = UINT16_MAX;
	int8_t x167 = -1;
	static uint8_t x168 = UINT8_MAX;
	int32_t t41 = 155589;

	t41 = (((x165==x166)|x167)/x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x173 = 1499U;
	int32_t x174 = INT32_MIN;
	uint16_t x175 = 140U;
	static uint16_t x176 = UINT16_MAX;
	volatile int32_t t42 = 8149350;

	t42 = (((x173==x174)|x175)/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x178 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MAX;
	int64_t t43 = 14228480935023LL;

	t43 = (((x177==x178)|x179)/x180);

	if (t43 != -4294967298LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x181 = INT8_MAX;
	uint8_t x183 = UINT8_MAX;
	uint64_t x184 = UINT64_MAX;
	uint64_t t44 = 0LLU;

	t44 = (((x181==x182)|x183)/x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 17U;
	uint8_t x186 = 58U;
	int64_t x187 = -1LL;
	static volatile int64_t x188 = -1LL;

	t45 = (((x185==x186)|x187)/x188);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x191 = UINT32_MAX;
	int8_t x192 = INT8_MIN;
	volatile uint32_t t46 = 939184833U;

	t46 = (((x189==x190)|x191)/x192);

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x193 = -1;
	volatile int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MAX;
	volatile int32_t t47 = -3265583;

	t47 = (((x193==x194)|x195)/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x197 = 79U;
	uint16_t x198 = 29283U;
	int32_t x200 = INT32_MAX;
	int32_t t48 = 3809845;

	t48 = (((x197==x198)|x199)/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x202 = INT8_MIN;
	volatile int32_t x203 = -15279;
	int64_t x204 = INT64_MIN;
	volatile int64_t t49 = -15068967541LL;

	t49 = (((x201==x202)|x203)/x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = UINT16_MAX;
	int64_t x206 = INT64_MIN;
	volatile uint64_t x208 = 8996168772940218LLU;
	volatile uint64_t t50 = 4799922121037579044LLU;

	t50 = (((x205==x206)|x207)/x208);

	if (t50 != 2050LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x209 = 223887462;
	volatile uint8_t x210 = UINT8_MAX;
	uint64_t x212 = 14323993256LLU;

	t51 = (((x209==x210)|x211)/x212);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = INT32_MIN;
	uint16_t x214 = UINT16_MAX;
	static uint8_t x215 = 57U;
	static uint32_t x216 = 903U;
	volatile uint32_t t52 = 5U;

	t52 = (((x213==x214)|x215)/x216);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = UINT8_MAX;
	uint8_t x218 = UINT8_MAX;
	uint16_t x219 = UINT16_MAX;
	uint64_t x220 = 2135LLU;

	t53 = (((x217==x218)|x219)/x220);

	if (t53 != 30LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = 1;
	uint32_t x222 = UINT32_MAX;
	static int32_t x223 = -1;
	int8_t x224 = -5;

	t54 = (((x221==x222)|x223)/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = 0;
	int16_t x226 = 0;
	int64_t x227 = INT64_MIN;
	uint16_t x228 = 62U;

	t55 = (((x225==x226)|x227)/x228);

	if (t55 != -148764065110560900LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = 9676153LL;
	int32_t x230 = INT32_MAX;
	int32_t x231 = INT32_MAX;
	int32_t t56 = -14812230;

	t56 = (((x229==x230)|x231)/x232);

	if (t56 != -65535) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = -1LL;
	uint16_t x234 = UINT16_MAX;
	uint8_t x235 = 0U;
	volatile uint32_t x236 = UINT32_MAX;
	volatile uint32_t t57 = 3115U;

	t57 = (((x233==x234)|x235)/x236);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x239 = -1;
	static uint32_t t58 = 9238732U;

	t58 = (((x237==x238)|x239)/x240);

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	uint16_t x242 = 6U;
	static int64_t x244 = INT64_MIN;
	int64_t t59 = -3289557513LL;

	t59 = (((x241==x242)|x243)/x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	int64_t x248 = INT64_MIN;
	int64_t t60 = 1213881383602LL;

	t60 = (((x245==x246)|x247)/x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x249 = -1;
	static uint32_t x250 = 102656945U;
	volatile int32_t x251 = INT32_MIN;
	uint32_t x252 = 473464U;
	static volatile uint32_t t61 = 649587366U;

	t61 = (((x249==x250)|x251)/x252);

	if (t61 != 4535U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x253 = 29U;
	uint64_t x254 = 427399732938LLU;
	int16_t x255 = -1;
	int64_t x256 = 121563471844923598LL;
	int64_t t62 = 6271661344980959LL;

	t62 = (((x253==x254)|x255)/x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = 31U;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t63 = 515795345U;

	t63 = (((x257==x258)|x259)/x260);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	static int64_t x262 = 304486LL;
	uint16_t x263 = 12U;
	uint16_t x264 = 807U;
	int32_t t64 = -38485;

	t64 = (((x261==x262)|x263)/x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = INT16_MAX;
	volatile int32_t t65 = 13130391;

	t65 = (((x265==x266)|x267)/x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = UINT8_MAX;
	uint8_t x270 = 8U;
	uint64_t x271 = 564940272658413LLU;
	uint64_t x272 = 459889373868359368LLU;

	t66 = (((x269==x270)|x271)/x272);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1901072546696LL;
	int16_t x275 = 43;
	int32_t t67 = -9309;

	t67 = (((x273==x274)|x275)/x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x277 = 22567;
	int64_t x278 = INT64_MAX;
	int8_t x279 = -1;
	int32_t x280 = 25555;
	int32_t t68 = 994252157;

	t68 = (((x277==x278)|x279)/x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x281 = 1U;
	uint8_t x282 = UINT8_MAX;
	static int8_t x283 = 1;
	int8_t x284 = -1;
	int32_t t69 = -36;

	t69 = (((x281==x282)|x283)/x284);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x285 = 15410U;
	static uint16_t x286 = UINT16_MAX;
	int8_t x287 = -28;
	uint64_t x288 = 858539865303177LLU;
	static volatile uint64_t t70 = 5785314009LLU;

	t70 = (((x285==x286)|x287)/x288);

	if (t70 != 21486LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x289 = 1251088U;
	int16_t x291 = -1;
	int16_t x292 = -1;
	int32_t t71 = -8;

	t71 = (((x289==x290)|x291)/x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x293 = 1U;
	volatile uint32_t x294 = 52656654U;
	int64_t x295 = INT64_MIN;

	t72 = (((x293==x294)|x295)/x296);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MAX;
	static int16_t x299 = 4683;
	int64_t x300 = -1209600199LL;
	static volatile int64_t t73 = 1038983534LL;

	t73 = (((x297==x298)|x299)/x300);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x302 = UINT8_MAX;
	static volatile int64_t x303 = 660581204420301991LL;
	volatile uint16_t x304 = UINT16_MAX;
	volatile int64_t t74 = 56265849049105518LL;

	t74 = (((x301==x302)|x303)/x304);

	if (t74 != 10079823062795LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = INT16_MIN;
	volatile int8_t x307 = INT8_MIN;
	uint16_t x308 = UINT16_MAX;
	int32_t t75 = 81;

	t75 = (((x305==x306)|x307)/x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x309 = INT32_MIN;
	uint16_t x311 = 151U;
	int32_t x312 = -1;
	int32_t t76 = 33434;

	t76 = (((x309==x310)|x311)/x312);

	if (t76 != -151) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x314 = 1256188U;
	int16_t x315 = -1;
	volatile int32_t t77 = -3310933;

	t77 = (((x313==x314)|x315)/x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x317 = INT64_MIN;
	int32_t x319 = 1;
	int32_t x320 = INT32_MIN;
	volatile int32_t t78 = 653;

	t78 = (((x317==x318)|x319)/x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x321 = UINT32_MAX;
	static int64_t x322 = -538264399699961LL;
	int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t79 = -3005501;

	t79 = (((x321==x322)|x323)/x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x325 = INT32_MIN;
	static volatile int8_t x326 = -1;
	int32_t x327 = INT32_MIN;
	int16_t x328 = INT16_MIN;

	t80 = (((x325==x326)|x327)/x328);

	if (t80 != 65536) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x329 = UINT64_MAX;
	uint8_t x330 = 6U;
	int64_t x331 = -1LL;
	int32_t x332 = -1;

	t81 = (((x329==x330)|x331)/x332);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = -1;
	uint32_t x335 = 391440503U;
	volatile uint64_t x336 = UINT64_MAX;
	uint64_t t82 = 4243LLU;

	t82 = (((x333==x334)|x335)/x336);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x338 = INT8_MAX;
	volatile int64_t x339 = INT64_MIN;
	uint16_t x340 = 19U;

	t83 = (((x337==x338)|x339)/x340);

	if (t83 != -485440633518672410LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int32_t x342 = INT32_MAX;
	static uint64_t x343 = 5211137257LLU;
	int64_t x344 = INT64_MIN;

	t84 = (((x341==x342)|x343)/x344);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x345 = 0;
	int8_t x347 = INT8_MAX;
	int8_t x348 = -11;

	t85 = (((x345==x346)|x347)/x348);

	if (t85 != -11) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = 1U;
	int32_t x351 = INT32_MAX;
	uint16_t x352 = UINT16_MAX;
	static volatile int32_t t86 = 259091;

	t86 = (((x349==x350)|x351)/x352);

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MAX;
	static volatile int32_t x355 = -7;
	volatile int8_t x356 = INT8_MAX;

	t87 = (((x353==x354)|x355)/x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x358 = 1;
	static uint64_t x359 = 17LLU;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t88 = 63368370073518766LLU;

	t88 = (((x357==x358)|x359)/x360);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = -1;
	uint32_t x364 = 1416U;
	uint32_t t89 = 974789U;

	t89 = (((x361==x362)|x363)/x364);

	if (t89 != 3033168U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = INT64_MIN;
	static int16_t x370 = -1;
	int16_t x372 = INT16_MIN;

	t90 = (((x369==x370)|x371)/x372);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x374 = INT32_MIN;
	uint8_t x375 = 37U;

	t91 = (((x373==x374)|x375)/x376);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MAX;
	int8_t x378 = 0;
	uint32_t x379 = UINT32_MAX;
	uint32_t t92 = 55588894U;

	t92 = (((x377==x378)|x379)/x380);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = -1;
	volatile uint8_t x383 = UINT8_MAX;
	static int64_t x384 = INT64_MAX;
	static int64_t t93 = -18859641763LL;

	t93 = (((x381==x382)|x383)/x384);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MAX;
	uint64_t x387 = 0LLU;
	static int16_t x388 = -16066;
	uint64_t t94 = 3689743429384LLU;

	t94 = (((x385==x386)|x387)/x388);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = -1LL;
	int8_t x391 = INT8_MIN;
	static int32_t x392 = INT32_MIN;
	volatile int32_t t95 = 425889;

	t95 = (((x389==x390)|x391)/x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = -1;
	uint64_t x396 = 1680198864370LLU;

	t96 = (((x393==x394)|x395)/x396);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int32_t x398 = -1;
	int16_t x400 = INT16_MAX;
	int32_t t97 = -29210;

	t97 = (((x397==x398)|x399)/x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = -1;
	uint32_t x402 = 6U;
	int8_t x403 = INT8_MIN;
	volatile int8_t x404 = -1;
	volatile int32_t t98 = -1663;

	t98 = (((x401==x402)|x403)/x404);

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = -1LL;
	static uint16_t x406 = UINT16_MAX;
	volatile uint16_t x407 = 391U;
	volatile int8_t x408 = INT8_MAX;
	int32_t t99 = 1413;

	t99 = (((x405==x406)|x407)/x408);

	if (t99 != 3) { NG(); } else { ; }
	
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

