#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x12 = 1;
int8_t x17 = INT8_MIN;
int32_t x19 = -78252;
int64_t t3 = -40896LL;
int64_t x25 = -64378845LL;
static int16_t x27 = INT16_MIN;
volatile int64_t x41 = INT64_MIN;
static int8_t x52 = INT8_MIN;
volatile int64_t t10 = -17311609494576LL;
uint64_t t12 = 13438647557LLU;
static int64_t x67 = INT64_MAX;
uint64_t t14 = 0LLU;
int32_t x77 = INT32_MAX;
int16_t x78 = -1;
int64_t x92 = -1LL;
static int16_t x98 = INT16_MIN;
static volatile uint16_t x100 = 15941U;
int64_t x103 = -23456862565301LL;
static int64_t x109 = -69LL;
uint64_t x112 = 203LLU;
static uint32_t x114 = 476484750U;
volatile int64_t x115 = 1LL;
volatile int64_t x118 = 761040125369LL;
int8_t x126 = INT8_MIN;
int32_t x131 = 49560;
uint16_t x136 = 1873U;
volatile uint64_t t29 = 110482904LLU;
static int64_t t30 = -3LL;
uint16_t x146 = UINT16_MAX;
volatile uint8_t x147 = 8U;
int16_t x148 = INT16_MAX;
uint64_t t33 = 202295LLU;
int64_t x156 = INT64_MAX;
static int16_t x158 = -2;
int64_t x167 = 9817507543754LL;
volatile int16_t x168 = -3796;
volatile int8_t x181 = 1;
int64_t x182 = INT64_MIN;
int16_t x184 = -1;
uint64_t x190 = UINT64_MAX;
int16_t x192 = INT16_MAX;
int16_t x195 = -1;
static int64_t t44 = 11LL;
static int16_t x197 = -5;
volatile int64_t t45 = 2704LL;
static volatile int64_t x206 = INT64_MIN;
uint8_t x210 = UINT8_MAX;
uint16_t x224 = 26646U;
int32_t x236 = INT32_MAX;
uint32_t t54 = 1197965818U;
uint64_t x241 = UINT64_MAX;
volatile uint16_t x242 = 1U;
volatile int8_t x244 = INT8_MAX;
uint16_t x252 = 365U;
uint8_t x254 = UINT8_MAX;
volatile uint32_t x255 = UINT32_MAX;
volatile int8_t x263 = 1;
static int8_t x267 = -2;
int64_t x273 = -630880482770393LL;
int64_t x275 = INT64_MAX;
uint32_t x286 = UINT32_MAX;
volatile uint64_t t66 = 18481806009809LLU;
int8_t x289 = INT8_MAX;
int32_t x293 = 15561;
int8_t x296 = -1;
int64_t x299 = 795660793168406LL;
static int8_t x302 = INT8_MIN;
int16_t x303 = -1;
uint32_t x306 = 2043453U;
static uint8_t x309 = 3U;
int16_t x312 = INT16_MIN;
uint64_t t73 = 1128LLU;
int64_t x320 = INT64_MAX;
int64_t t74 = 445332497670682LL;
uint64_t x322 = 53628268180172315LLU;
volatile int64_t x323 = INT64_MAX;
static volatile uint64_t t75 = 2237297LLU;
static int32_t x330 = INT32_MAX;
int64_t x335 = -1LL;
volatile int64_t x340 = -1LL;
volatile uint64_t t79 = UINT64_MAX;
int16_t x342 = INT16_MAX;
int8_t x345 = -1;
static int64_t x346 = INT64_MIN;
volatile int64_t t81 = -1991247893LL;
uint16_t x350 = 20U;
volatile int64_t t82 = 3040713991651820LL;
volatile uint8_t x354 = 2U;
int32_t t83 = 166793;
int8_t x361 = INT8_MAX;
static int16_t x367 = 1402;
static int8_t x384 = INT8_MAX;
uint32_t x397 = 18537178U;
volatile uint64_t x402 = UINT64_MAX;
static volatile uint16_t x405 = UINT16_MAX;
static volatile int64_t x408 = -353231040414792LL;
volatile int8_t x411 = INT8_MIN;
uint64_t x412 = 1388661832480147268LLU;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint32_t x2 = 3316410U;
	int32_t x3 = 16592258;
	int16_t x4 = -1;
	static uint32_t t0 = 18405620U;

	t0 = (x1*(x2/(x3^x4)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 864;
	uint64_t x10 = 4717709865639LLU;
	uint16_t x11 = UINT16_MAX;
	volatile uint64_t t1 = 221548575938LLU;

	t1 = (x9*(x10/(x11^x12)));

	if (t1 != 62198267904LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 6;
	static volatile int8_t x14 = -1;
	uint32_t x15 = 30U;
	uint16_t x16 = 0U;
	volatile uint32_t t2 = 1394341U;

	t2 = (x13*(x14/(x15^x16)));

	if (t2 != 858993456U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = UINT8_MAX;
	volatile int64_t x20 = INT64_MIN;

	t3 = (x17*(x18/(x19^x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x21 = 57397;
	int64_t x22 = -1LL;
	int16_t x23 = 867;
	static int32_t x24 = INT32_MIN;
	volatile int64_t t4 = 450427785578LL;

	t4 = (x21*(x22/(x23^x24)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x26 = 873U;
	static uint64_t x28 = UINT64_MAX;
	static uint64_t t5 = 3159961969159202729LLU;

	t5 = (x25*(x26/(x27^x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -755;
	int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MAX;
	static uint64_t x32 = 13262805397194LLU;
	volatile uint64_t t6 = 40095478LLU;

	t6 = (x29*(x30/(x31^x32)));

	if (t6 != 18446744072659450806LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x37 = 12952802647LLU;
	int16_t x38 = -160;
	uint16_t x39 = 1U;
	uint32_t x40 = 1768889165U;
	uint64_t t7 = 531924038689LLU;

	t7 = (x37*(x38/(x39^x40)));

	if (t7 != 25905605294LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x42 = 20;
	uint64_t x43 = 3537662429538039LLU;
	static int16_t x44 = INT16_MAX;
	static volatile uint64_t t8 = 17721LLU;

	t8 = (x41*(x42/(x43^x44)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 40U;
	int64_t x46 = INT64_MIN;
	uint8_t x47 = 5U;
	volatile int16_t x48 = -8998;
	volatile int64_t t9 = -1030715415LL;

	t9 = (x45*(x46/(x47^x48)));

	if (t9 != 41024672687000000LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x49 = 20552U;
	int64_t x50 = 12026701LL;
	int16_t x51 = 5250;

	t10 = (x49*(x50/(x51^x52)));

	if (t10 != -45974824LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	volatile int16_t x58 = 1;
	volatile int64_t x59 = INT64_MIN;
	int32_t x60 = 29292;
	int64_t t11 = 231LL;

	t11 = (x57*(x58/(x59^x60)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x61 = 1752169942U;
	volatile int64_t x62 = -1LL;
	int32_t x63 = INT32_MIN;
	uint64_t x64 = 1855920112213LLU;

	t12 = (x61*(x62/(x63^x64)));

	if (t12 != 1752169942LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 1U;
	volatile int32_t x66 = INT32_MIN;
	int32_t x68 = INT32_MAX;
	volatile int64_t t13 = -116LL;

	t13 = (x65*(x66/(x67^x68)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = -1;
	static int32_t x71 = 3;
	volatile uint64_t x72 = 45LLU;

	t14 = (x69*(x70/(x71^x72)));

	if (t14 != 4010161755154250368LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = 78163488;
	static volatile uint32_t t15 = 3897U;

	t15 = (x77*(x78/(x79^x80)));

	if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = 1U;
	int8_t x82 = INT8_MIN;
	volatile uint32_t x83 = 614968512U;
	int8_t x84 = INT8_MAX;
	volatile uint32_t t16 = 8U;

	t16 = (x81*(x82/(x83^x84)));

	if (t16 != 6U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = 2;
	int64_t x86 = INT64_MIN;
	static uint8_t x87 = 8U;
	int32_t x88 = -1;
	volatile int64_t t17 = 969767812LL;

	t17 = (x85*(x86/(x87^x88)));

	if (t17 != 2049638230412172400LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = 14;
	int32_t x90 = -1;
	static uint16_t x91 = 1U;
	int64_t t18 = 2LL;

	t18 = (x89*(x90/(x91^x92)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x93 = 127074LLU;
	int32_t x94 = 220839;
	int32_t x95 = -45743;
	int32_t x96 = INT32_MIN;
	uint64_t t19 = 30743080956118911LLU;

	t19 = (x93*(x94/(x95^x96)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x97 = 1;
	static volatile int16_t x99 = INT16_MAX;
	int32_t t20 = 94718806;

	t20 = (x97*(x98/(x99^x100)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = 29;
	volatile int16_t x102 = INT16_MIN;
	uint16_t x104 = 24U;
	int64_t t21 = -430479939793491LL;

	t21 = (x101*(x102/(x103^x104)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x105 = -1;
	int64_t x106 = INT64_MIN;
	int32_t x107 = -1;
	uint32_t x108 = 103767261U;
	int64_t t22 = -113247864543564879LL;

	t22 = (x105*(x106/(x107^x108)));

	if (t22 != 2200651832LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = -33;
	int8_t x111 = INT8_MIN;
	volatile uint64_t t23 = 3813726002552372405LLU;

	t23 = (x109*(x110/(x111^x112)));

	if (t23 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x113 = UINT64_MAX;
	int16_t x116 = 13884;
	uint64_t t24 = 633455480447066567LLU;

	t24 = (x113*(x114/(x115^x116)));

	if (t24 != 18446744073709517300LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 20U;
	uint32_t x119 = 217695108U;
	static uint64_t x120 = UINT64_MAX;
	volatile uint64_t t25 = 1863891LLU;

	t25 = (x117*(x118/(x119^x120)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -1;
	int16_t x122 = INT16_MIN;
	static int16_t x123 = -958;
	volatile uint16_t x124 = UINT16_MAX;
	int32_t t26 = 369949;

	t26 = (x121*(x122/(x123^x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x125 = INT8_MAX;
	int16_t x127 = INT16_MIN;
	uint8_t x128 = 5U;
	int32_t t27 = -12;

	t27 = (x125*(x126/(x127^x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	volatile int8_t x130 = INT8_MAX;
	int8_t x132 = INT8_MIN;
	volatile int32_t t28 = 0;

	t28 = (x129*(x130/(x131^x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = UINT8_MAX;
	int32_t x134 = INT32_MIN;
	uint64_t x135 = UINT64_MAX;

	t29 = (x133*(x134/(x135^x136)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x137 = INT8_MIN;
	int64_t x138 = -1LL;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = 1U;

	t30 = (x137*(x138/(x139^x140)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 67650U;
	static int32_t x142 = -1;
	volatile int16_t x143 = INT16_MIN;
	uint16_t x144 = 14U;
	static volatile uint32_t t31 = 4U;

	t31 = (x141*(x142/(x143^x144)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 0U;
	static volatile int32_t t32 = 44661;

	t32 = (x145*(x146/(x147^x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 114420486780LLU;
	int8_t x150 = -1;
	uint64_t x151 = 2001270706LLU;
	int16_t x152 = INT16_MIN;

	t33 = (x149*(x150/(x151^x152)));

	if (t33 != 114420486780LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = 579U;
	int64_t x154 = 3LL;
	int16_t x155 = INT16_MAX;
	static int64_t t34 = -71346243556313LL;

	t34 = (x153*(x154/(x155^x156)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = -1;
	int8_t x159 = 34;
	static int8_t x160 = INT8_MAX;
	volatile int32_t t35 = -1038;

	t35 = (x157*(x158/(x159^x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -1;
	int64_t x162 = -1LL;
	int32_t x163 = 40926;
	static uint32_t x164 = 29430U;
	volatile int64_t t36 = 30LL;

	t36 = (x161*(x162/(x163^x164)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x165 = 0U;
	int16_t x166 = INT16_MIN;
	volatile int64_t t37 = -2LL;

	t37 = (x165*(x166/(x167^x168)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = UINT8_MAX;
	uint32_t x170 = 48883545U;
	uint32_t x171 = UINT32_MAX;
	static int16_t x172 = 0;
	uint32_t t38 = 14U;

	t38 = (x169*(x170/(x171^x172)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int16_t x174 = 222;
	int32_t x175 = -2156310;
	int32_t x176 = 58620114;
	volatile uint32_t t39 = 61950U;

	t39 = (x173*(x174/(x175^x176)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x177 = INT64_MIN;
	int16_t x178 = INT16_MIN;
	uint16_t x179 = 1157U;
	static uint64_t x180 = 11376LLU;
	volatile uint64_t t40 = 51132760726146066LLU;

	t40 = (x177*(x178/(x179^x180)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x183 = 1;
	int64_t t41 = 40332676447LL;

	t41 = (x181*(x182/(x183^x184)));

	if (t41 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -32;
	volatile int32_t x186 = INT32_MIN;
	int16_t x187 = -893;
	int8_t x188 = INT8_MIN;
	int32_t t42 = -38470;

	t42 = (x185*(x186/(x187^x188)));

	if (t42 != 89130304) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = -1;
	int32_t x191 = INT32_MAX;
	volatile uint64_t t43 = 11872716357524LLU;

	t43 = (x189*(x190/(x191^x192)));

	if (t43 != 18446744065119485950LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = INT64_MAX;
	static uint32_t x194 = UINT32_MAX;
	volatile int64_t x196 = INT64_MAX;

	t44 = (x193*(x194/(x195^x196)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x198 = 41214342LL;
	int32_t x199 = INT32_MAX;
	static uint32_t x200 = 213233542U;

	t45 = (x197*(x198/(x199^x200)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x201 = -1;
	uint64_t x202 = UINT64_MAX;
	int16_t x203 = 29;
	int64_t x204 = INT64_MIN;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x201*(x202/(x203^x204)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x205 = -1;
	volatile uint16_t x207 = UINT16_MAX;
	volatile int32_t x208 = INT32_MIN;
	volatile int64_t t47 = 964554737LL;

	t47 = (x205*(x206/(x207^x208)));

	if (t47 != -4295098369LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x209 = -504066214821LL;
	static int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MIN;
	int64_t t48 = 210099881LL;

	t48 = (x209*(x210/(x211^x212)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = -60;
	int32_t x215 = -29659;
	static uint8_t x216 = 99U;
	int32_t t49 = 0;

	t49 = (x213*(x214/(x215^x216)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x217 = UINT32_MAX;
	int64_t x218 = 87264LL;
	int32_t x219 = INT32_MIN;
	static uint8_t x220 = UINT8_MAX;
	int64_t t50 = 766734002111037913LL;

	t50 = (x217*(x218/(x219^x220)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = 0;
	uint64_t x222 = 116042105LLU;
	int8_t x223 = INT8_MIN;
	volatile uint64_t t51 = 65703786LLU;

	t51 = (x221*(x222/(x223^x224)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x225 = INT16_MIN;
	uint8_t x226 = 33U;
	int16_t x227 = -1;
	uint8_t x228 = UINT8_MAX;
	int32_t t52 = 216356350;

	t52 = (x225*(x226/(x227^x228)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x229 = INT32_MIN;
	int16_t x230 = 118;
	int64_t x231 = 124215LL;
	int32_t x232 = INT32_MIN;
	int64_t t53 = 1LL;

	t53 = (x229*(x230/(x231^x232)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = -1;
	static uint32_t x234 = 4U;
	static volatile uint8_t x235 = 0U;

	t54 = (x233*(x234/(x235^x236)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = 17918065887LL;
	int32_t x238 = 0;
	volatile int8_t x239 = INT8_MAX;
	static volatile uint64_t x240 = 16528502482LLU;
	uint64_t t55 = 14393917LLU;

	t55 = (x237*(x238/(x239^x240)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x243 = INT32_MIN;
	volatile uint64_t t56 = 3040488067LLU;

	t56 = (x241*(x242/(x243^x244)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 0U;
	uint16_t x246 = 48U;
	uint64_t x247 = 1728817527751LLU;
	int16_t x248 = INT16_MIN;
	volatile uint64_t t57 = 16739791901014LLU;

	t57 = (x245*(x246/(x247^x248)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = 760949;
	int32_t x250 = INT32_MIN;
	static uint64_t x251 = 1018050890439124344LLU;
	uint64_t t58 = 68048442761252576LLU;

	t58 = (x249*(x250/(x251^x252)));

	if (t58 != 13697082LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -84238136;
	int32_t x256 = INT32_MAX;
	volatile uint32_t t59 = 119U;

	t59 = (x253*(x254/(x255^x256)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = 14805868674779864LLU;
	int64_t x258 = 1LL;
	static uint16_t x259 = 66U;
	uint32_t x260 = 1100U;
	uint64_t t60 = 32727LLU;

	t60 = (x257*(x258/(x259^x260)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = 12U;
	uint16_t x262 = 3761U;
	uint8_t x264 = 0U;
	volatile int32_t t61 = 1;

	t61 = (x261*(x262/(x263^x264)));

	if (t61 != 45132) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x265 = 946107U;
	uint8_t x266 = 126U;
	int32_t x268 = -1;
	uint32_t t62 = 24U;

	t62 = (x265*(x266/(x267^x268)));

	if (t62 != 119209482U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MAX;
	int16_t x270 = INT16_MAX;
	static uint64_t x271 = 8305LLU;
	int32_t x272 = INT32_MAX;
	static volatile uint64_t t63 = 82813LLU;

	t63 = (x269*(x270/(x271^x272)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x274 = INT16_MAX;
	int16_t x276 = 2;
	int64_t t64 = 2208437125270001717LL;

	t64 = (x273*(x274/(x275^x276)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = -380684LL;
	uint8_t x278 = 1U;
	int64_t x279 = INT64_MIN;
	volatile int8_t x280 = 3;
	int64_t t65 = 1LL;

	t65 = (x277*(x278/(x279^x280)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x285 = 78U;
	int32_t x287 = INT32_MIN;
	static uint64_t x288 = 2046944875917527LLU;

	t66 = (x285*(x286/(x287^x288)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x290 = 15;
	static uint16_t x291 = 83U;
	int32_t x292 = INT32_MAX;
	volatile int32_t t67 = 841;

	t67 = (x289*(x290/(x291^x292)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x294 = 4682286503LL;
	uint64_t x295 = 1LLU;
	static volatile uint64_t t68 = 16774150203LLU;

	t68 = (x293*(x294/(x295^x296)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = 181;
	static volatile int16_t x298 = INT16_MIN;
	static int64_t x300 = -1LL;
	volatile int64_t t69 = 12LL;

	t69 = (x297*(x298/(x299^x300)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x301 = 31U;
	int8_t x304 = 0;
	volatile int32_t t70 = -20779534;

	t70 = (x301*(x302/(x303^x304)));

	if (t70 != 3968) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x305 = 31234;
	static uint8_t x307 = 1U;
	int32_t x308 = -131722389;
	static uint32_t t71 = 27418U;

	t71 = (x305*(x306/(x307^x308)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = INT64_MIN;
	static int64_t t72 = 18830444579386748LL;

	t72 = (x309*(x310/(x311^x312)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x313 = 8403U;
	uint64_t x314 = UINT64_MAX;
	int64_t x315 = INT64_MIN;
	int16_t x316 = 62;

	t73 = (x313*(x314/(x315^x316)));

	if (t73 != 8403LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x317 = 1U;
	int32_t x318 = -1;
	uint32_t x319 = UINT32_MAX;

	t74 = (x317*(x318/(x319^x320)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x321 = -93549237879LL;
	uint64_t x324 = 6041560878LLU;

	t75 = (x321*(x322/(x323^x324)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x325 = 6637U;
	int16_t x326 = INT16_MIN;
	int16_t x327 = 0;
	static uint16_t x328 = UINT16_MAX;
	int32_t t76 = -298;

	t76 = (x325*(x326/(x327^x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MAX;
	int64_t x331 = -1803LL;
	volatile int8_t x332 = 7;
	volatile int64_t t77 = 4303071318391219776LL;

	t77 = (x329*(x330/(x331^x332)));

	if (t77 != -38962649894LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = 23;
	volatile int32_t x334 = INT32_MAX;
	static int32_t x336 = INT32_MAX;
	int64_t t78 = -296301064784489770LL;

	t78 = (x333*(x334/(x335^x336)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = -1;
	int8_t x338 = -61;
	uint64_t x339 = 202320LLU;

	t79 = (x337*(x338/(x339^x340)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x341 = 13524U;
	uint8_t x343 = 127U;
	volatile uint16_t x344 = 1U;
	int32_t t80 = 165948558;

	t80 = (x341*(x342/(x343^x344)));

	if (t80 != 3516240) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x347 = 2U;
	uint32_t x348 = 17U;

	t81 = (x345*(x346/(x347^x348)));

	if (t81 != 485440633518672410LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = 25789073U;
	static volatile uint8_t x351 = 113U;
	int64_t x352 = -1LL;

	t82 = (x349*(x350/(x351^x352)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x353 = INT32_MAX;
	int32_t x355 = INT32_MIN;
	int8_t x356 = -1;

	t83 = (x353*(x354/(x355^x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x357 = -489713;
	volatile int16_t x358 = INT16_MIN;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = 108;
	static uint32_t t84 = 491817U;

	t84 = (x357*(x358/(x359^x360)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x362 = -1;
	int16_t x363 = 3;
	int64_t x364 = INT64_MIN;
	volatile int64_t t85 = -30LL;

	t85 = (x361*(x362/(x363^x364)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MAX;
	int64_t x366 = INT64_MIN;
	volatile int32_t x368 = INT32_MIN;
	int64_t t86 = -152LL;

	t86 = (x365*(x366/(x367^x368)));

	if (t86 != 545461202700LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = INT64_MIN;
	static uint8_t x372 = 1U;
	int64_t t87 = -490451070656LL;

	t87 = (x369*(x370/(x371^x372)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = INT8_MIN;
	volatile int16_t x374 = -221;
	int32_t x375 = 12;
	static uint64_t x376 = 13354LLU;
	uint64_t t88 = 1857250467181LLU;

	t88 = (x373*(x374/(x375^x376)));

	if (t88 != 18269876415175108096LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -59LL;
	int64_t x378 = -1LL;
	volatile int8_t x379 = 41;
	static volatile int32_t x380 = INT32_MIN;
	volatile int64_t t89 = 8815162439LL;

	t89 = (x377*(x378/(x379^x380)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x382 = -345188383580252LL;
	uint16_t x383 = 7994U;
	int64_t t90 = 20337220300LL;

	t90 = (x381*(x382/(x383^x384)));

	if (t90 != -2825973856052715LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x385 = 1373U;
	uint64_t x386 = 4697506734LLU;
	uint64_t x387 = 13LLU;
	int64_t x388 = INT64_MIN;
	volatile uint64_t t91 = 132087071LLU;

	t91 = (x385*(x386/(x387^x388)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x389 = 3797U;
	static uint64_t x390 = 3LLU;
	int64_t x391 = -1LL;
	volatile uint64_t x392 = 7LLU;
	volatile uint64_t t92 = 40219399287913945LLU;

	t92 = (x389*(x390/(x391^x392)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = -3961;
	volatile int64_t x394 = -1LL;
	static int64_t x395 = 9958733LL;
	volatile uint16_t x396 = UINT16_MAX;
	static volatile int64_t t93 = 6347LL;

	t93 = (x393*(x394/(x395^x396)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x398 = 525;
	volatile int32_t x399 = INT32_MAX;
	volatile uint32_t x400 = 29140845U;
	uint32_t t94 = 1301U;

	t94 = (x397*(x398/(x399^x400)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x401 = -1;
	int32_t x403 = INT32_MIN;
	int64_t x404 = -1LL;
	volatile uint64_t t95 = 2198165586641849LLU;

	t95 = (x401*(x402/(x403^x404)));

	if (t95 != 18446744065119617020LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x406 = 1;
	int8_t x407 = INT8_MAX;
	static int64_t t96 = 3809402749558760LL;

	t96 = (x405*(x406/(x407^x408)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 28U;
	int8_t x410 = 1;
	uint64_t t97 = 2315278408374199LLU;

	t97 = (x409*(x410/(x411^x412)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = 7424U;
	volatile uint8_t x414 = UINT8_MAX;
	volatile int32_t x415 = 52779;
	static volatile int32_t x416 = INT32_MIN;
	volatile uint32_t t98 = 24743924U;

	t98 = (x413*(x414/(x415^x416)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = -1LL;
	static int64_t x418 = -1LL;
	uint64_t x419 = 77243249355427LLU;
	int32_t x420 = INT32_MIN;
	uint64_t t99 = UINT64_MAX;

	t99 = (x417*(x418/(x419^x420)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

