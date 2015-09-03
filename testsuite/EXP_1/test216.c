#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 22807U;
int16_t x5 = 12155;
volatile int32_t t1 = -83339997;
int16_t x11 = -313;
uint16_t x13 = 161U;
static volatile int32_t t3 = -1263650;
volatile int64_t x20 = -808720LL;
static uint8_t x30 = 1U;
int32_t t8 = 85926951;
int8_t x45 = -1;
volatile int32_t t11 = -1267512;
uint32_t x62 = UINT32_MAX;
uint64_t x66 = 26681LLU;
static volatile int32_t t13 = 227382;
uint8_t x73 = 3U;
int16_t x82 = -2;
uint64_t x85 = 18221998469LLU;
uint16_t x86 = 35U;
int64_t x95 = INT64_MIN;
int64_t x99 = INT64_MIN;
int32_t x101 = INT32_MIN;
uint32_t x102 = UINT32_MAX;
uint8_t x105 = 52U;
uint8_t x106 = 25U;
volatile int8_t x109 = INT8_MIN;
uint64_t x110 = 170496247779051725LLU;
volatile int8_t x116 = -7;
static int16_t x118 = -1;
int32_t t26 = -325;
int32_t t28 = -1402465;
int32_t x130 = INT32_MIN;
volatile int8_t x140 = -1;
int8_t x142 = INT8_MAX;
static int16_t x143 = INT16_MIN;
static int16_t x146 = -1;
volatile int64_t x153 = INT64_MIN;
uint8_t x156 = 0U;
int32_t x157 = -1;
static int64_t x158 = INT64_MIN;
volatile int32_t t36 = -124466;
static int32_t x164 = INT32_MIN;
volatile int64_t x165 = -235LL;
int32_t x170 = INT32_MIN;
static uint8_t x172 = 3U;
volatile int32_t t39 = -29554060;
static int8_t x188 = -2;
int32_t t44 = 349365896;
uint16_t x195 = 11U;
uint8_t x197 = 28U;
uint8_t x200 = UINT8_MAX;
int16_t x217 = -7;
int32_t x220 = INT32_MAX;
int32_t t52 = 146066;
static uint8_t x226 = 91U;
int8_t x233 = -55;
int32_t t54 = -214;
volatile uint32_t x237 = 173500U;
static int16_t x240 = INT16_MAX;
int16_t x242 = INT16_MIN;
int8_t x246 = -1;
int16_t x252 = INT16_MIN;
static int32_t t59 = -971899597;
volatile int8_t x266 = INT8_MAX;
int64_t x276 = INT64_MIN;
volatile int32_t t63 = 22;
volatile uint32_t x291 = 3088751U;
int32_t x298 = INT32_MAX;
int16_t x300 = -208;
int32_t x308 = -1;
int16_t x311 = INT16_MIN;
static int32_t t70 = 652;
static int16_t x322 = -12451;
volatile uint64_t x343 = 1LLU;
int8_t x359 = INT8_MIN;
uint16_t x362 = UINT16_MAX;
int8_t x371 = 3;
volatile int32_t t84 = -144933158;
static int16_t x374 = -1;
static int32_t x375 = -1;
int64_t x376 = INT64_MIN;
uint16_t x380 = 0U;
volatile uint32_t x381 = 261627U;
static int64_t x384 = INT64_MIN;
static uint16_t x388 = UINT16_MAX;
static uint8_t x391 = 8U;
static volatile int32_t t89 = 301552;
volatile int32_t t91 = 1087;
volatile int8_t x406 = -27;
uint16_t x412 = UINT16_MAX;
volatile int32_t t94 = -71821000;
int8_t x418 = -1;
int32_t t95 = -75027;
static int64_t x430 = -47LL;
volatile int16_t x432 = INT16_MIN;
static volatile int8_t x440 = -1;
uint16_t x443 = 718U;


void f0(void) {
	int16_t x2 = 5440;
	uint16_t x3 = 16U;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = -399247114;

	t0 = (((x1-x2)/x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 11U;
	int32_t x7 = INT32_MAX;
	static uint32_t x8 = UINT32_MAX;

	t1 = (((x5-x6)/x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int64_t x10 = INT64_MIN;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -463;

	t2 = (((x9-x10)/x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -5;
	int8_t x15 = INT8_MIN;
	static int64_t x16 = -3865823873192901LL;

	t3 = (((x13-x14)/x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	volatile int8_t x18 = -1;
	uint32_t x19 = 77212U;
	int32_t t4 = -235456;

	t4 = (((x17-x18)/x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = 93U;
	static volatile uint8_t x26 = 12U;
	static int32_t x27 = -1;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t5 = 11602;

	t5 = (((x25-x26)/x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 2823177087795512LL;
	uint32_t x31 = 56815443U;
	int16_t x32 = INT16_MIN;
	int32_t t6 = 27;

	t6 = (((x29-x30)/x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = INT32_MAX;
	int64_t x38 = 1239529690004275LL;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = INT8_MIN;
	int32_t t7 = -4;

	t7 = (((x37-x38)/x39)==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -40;
	volatile uint64_t x42 = UINT64_MAX;
	int64_t x43 = INT64_MAX;
	int16_t x44 = INT16_MIN;

	t8 = (((x41-x42)/x43)==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MAX;
	int8_t x48 = -16;
	int32_t t9 = -2085974;

	t9 = (((x45-x46)/x47)==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x49 = 1065421163357275065LLU;
	int32_t x50 = 197717078;
	volatile int32_t x51 = -1;
	static int32_t x52 = -607257;
	volatile int32_t t10 = -213490959;

	t10 = (((x49-x50)/x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x57 = -140;
	int64_t x58 = -35165LL;
	int16_t x59 = INT16_MIN;
	int64_t x60 = -1LL;

	t11 = (((x57-x58)/x59)==x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = 34;
	volatile int16_t x63 = -13;
	static int8_t x64 = INT8_MAX;
	static int32_t t12 = -143205;

	t12 = (((x61-x62)/x63)==x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = -10;
	int8_t x67 = INT8_MIN;
	int64_t x68 = 31877LL;

	t13 = (((x65-x66)/x67)==x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = -1LL;
	int16_t x71 = INT16_MAX;
	static int16_t x72 = -84;
	int32_t t14 = -481458;

	t14 = (((x69-x70)/x71)==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x74 = 1218126LLU;
	static volatile uint64_t x75 = 2929671130LLU;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t15 = -4574;

	t15 = (((x73-x74)/x75)==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = 5;
	uint8_t x78 = UINT8_MAX;
	static uint8_t x79 = 42U;
	int8_t x80 = INT8_MIN;
	volatile int32_t t16 = -906;

	t16 = (((x77-x78)/x79)==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -1093112821339972607LL;
	uint64_t x83 = 326374539573356LLU;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t17 = 131198557;

	t17 = (((x81-x82)/x83)==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x87 = INT32_MAX;
	int32_t x88 = -1270;
	static int32_t t18 = 3940623;

	t18 = (((x85-x86)/x87)==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MAX;
	static volatile uint64_t x90 = 27430291309LLU;
	uint64_t x91 = 15660LLU;
	int8_t x92 = -1;
	volatile int32_t t19 = 29603908;

	t19 = (((x89-x90)/x91)==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = 28176LL;
	int64_t x94 = -83389072531LL;
	int16_t x96 = -15981;
	volatile int32_t t20 = -160127;

	t20 = (((x93-x94)/x95)==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -350;
	int16_t x98 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	int32_t t21 = 600;

	t21 = (((x97-x98)/x99)==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t22 = -233;

	t22 = (((x101-x102)/x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x107 = UINT64_MAX;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t23 = 1495424;

	t23 = (((x105-x106)/x107)==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x111 = UINT64_MAX;
	int32_t x112 = -151;
	volatile int32_t t24 = 829873548;

	t24 = (((x109-x110)/x111)==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x113 = -1;
	int8_t x114 = -17;
	static uint8_t x115 = 79U;
	int32_t t25 = 1;

	t25 = (((x113-x114)/x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = INT8_MAX;
	int8_t x119 = 5;
	int64_t x120 = INT64_MIN;

	t26 = (((x117-x118)/x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x121 = UINT64_MAX;
	int32_t x122 = -1;
	int64_t x123 = INT64_MAX;
	static volatile int16_t x124 = INT16_MIN;
	int32_t t27 = -2416089;

	t27 = (((x121-x122)/x123)==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = 376104U;
	static int16_t x126 = 7980;
	volatile int8_t x127 = -1;
	static int32_t x128 = INT32_MIN;

	t28 = (((x125-x126)/x127)==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 29687530LL;
	static int16_t x131 = INT16_MIN;
	int8_t x132 = -1;
	volatile int32_t t29 = 40636639;

	t29 = (((x129-x130)/x131)==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = UINT32_MAX;
	volatile int32_t x134 = INT32_MAX;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = 4762U;
	int32_t t30 = 934105;

	t30 = (((x133-x134)/x135)==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 10870822708988875LLU;
	static int16_t x138 = INT16_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	static volatile int32_t t31 = 1;

	t31 = (((x137-x138)/x139)==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -1LL;
	volatile uint16_t x144 = 1839U;
	int32_t t32 = 2202;

	t32 = (((x141-x142)/x143)==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x145 = INT8_MIN;
	uint16_t x147 = 2717U;
	static int64_t x148 = INT64_MAX;
	volatile int32_t t33 = 3895;

	t33 = (((x145-x146)/x147)==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = INT8_MAX;
	uint8_t x150 = 3U;
	int32_t x151 = INT32_MIN;
	volatile int64_t x152 = -3668322694316LL;
	static int32_t t34 = -11694347;

	t34 = (((x149-x150)/x151)==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = -1;
	int32_t x155 = INT32_MAX;
	int32_t t35 = -16784;

	t35 = (((x153-x154)/x155)==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x159 = 1178376;
	int32_t x160 = INT32_MIN;

	t36 = (((x157-x158)/x159)==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = 1670173U;
	volatile int8_t x162 = -11;
	int8_t x163 = INT8_MIN;
	volatile int32_t t37 = -2;

	t37 = (((x161-x162)/x163)==x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x166 = -1;
	uint64_t x167 = 390LLU;
	static volatile int8_t x168 = INT8_MAX;
	static volatile int32_t t38 = 838;

	t38 = (((x165-x166)/x167)==x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MIN;
	int32_t x171 = 142;

	t39 = (((x169-x170)/x171)==x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x173 = 8U;
	uint8_t x174 = 5U;
	static int32_t x175 = INT32_MAX;
	static volatile int8_t x176 = INT8_MIN;
	int32_t t40 = -1;

	t40 = (((x173-x174)/x175)==x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = -524283321;
	int16_t x178 = 0;
	int16_t x179 = 809;
	uint64_t x180 = 8500840863081635LLU;
	volatile int32_t t41 = -1348094;

	t41 = (((x177-x178)/x179)==x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 798452217099974LLU;
	uint32_t x182 = 163463U;
	uint64_t x183 = UINT64_MAX;
	volatile int16_t x184 = INT16_MAX;
	int32_t t42 = 373258;

	t42 = (((x181-x182)/x183)==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = -1;
	int64_t x186 = 271329LL;
	static uint32_t x187 = UINT32_MAX;
	volatile int32_t t43 = -402160;

	t43 = (((x185-x186)/x187)==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -7140;
	int64_t x190 = INT64_MIN;
	static int32_t x191 = 41600;
	int16_t x192 = INT16_MIN;

	t44 = (((x189-x190)/x191)==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MAX;
	int32_t x194 = -1;
	volatile uint8_t x196 = 17U;
	static int32_t t45 = -324;

	t45 = (((x193-x194)/x195)==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x198 = UINT32_MAX;
	static int64_t x199 = -40LL;
	static int32_t t46 = 190405553;

	t46 = (((x197-x198)/x199)==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = 6950LLU;
	static volatile uint16_t x202 = 3U;
	static int32_t x203 = -1;
	uint32_t x204 = UINT32_MAX;
	int32_t t47 = -1;

	t47 = (((x201-x202)/x203)==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = INT32_MIN;
	int8_t x206 = INT8_MIN;
	static volatile int64_t x207 = INT64_MIN;
	static int8_t x208 = INT8_MIN;
	int32_t t48 = -4;

	t48 = (((x205-x206)/x207)==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x209 = UINT16_MAX;
	volatile int64_t x210 = -83620LL;
	static int64_t x211 = INT64_MAX;
	int64_t x212 = INT64_MAX;
	volatile int32_t t49 = -432745;

	t49 = (((x209-x210)/x211)==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x213 = -1;
	volatile int8_t x214 = 7;
	uint16_t x215 = 237U;
	static uint16_t x216 = UINT16_MAX;
	static volatile int32_t t50 = 1;

	t50 = (((x213-x214)/x215)==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x218 = UINT64_MAX;
	uint8_t x219 = 48U;
	static int32_t t51 = -3516;

	t51 = (((x217-x218)/x219)==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x221 = INT8_MAX;
	static int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;

	t52 = (((x221-x222)/x223)==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = -1;
	int32_t x227 = INT32_MAX;
	volatile int32_t x228 = INT32_MIN;
	int32_t t53 = -33053418;

	t53 = (((x225-x226)/x227)==x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x234 = UINT16_MAX;
	static uint16_t x235 = UINT16_MAX;
	uint16_t x236 = 3U;

	t54 = (((x233-x234)/x235)==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x238 = UINT8_MAX;
	uint8_t x239 = 98U;
	volatile int32_t t55 = -9;

	t55 = (((x237-x238)/x239)==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x241 = INT16_MIN;
	int8_t x243 = INT8_MIN;
	volatile uint8_t x244 = UINT8_MAX;
	volatile int32_t t56 = 908988891;

	t56 = (((x241-x242)/x243)==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = INT16_MIN;
	int32_t x247 = INT32_MIN;
	int8_t x248 = 1;
	static volatile int32_t t57 = 447712589;

	t57 = (((x245-x246)/x247)==x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MAX;
	volatile int16_t x250 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	int32_t t58 = 4103365;

	t58 = (((x249-x250)/x251)==x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x254 = INT8_MIN;
	static int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;

	t59 = (((x253-x254)/x255)==x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = 1976568LL;
	static uint16_t x262 = 10325U;
	volatile int8_t x263 = -1;
	int32_t x264 = INT32_MIN;
	volatile int32_t t60 = 83491178;

	t60 = (((x261-x262)/x263)==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = 9U;
	volatile int64_t x267 = INT64_MIN;
	int8_t x268 = 1;
	static volatile int32_t t61 = 197079;

	t61 = (((x265-x266)/x267)==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x269 = -1;
	uint16_t x270 = 3U;
	static uint8_t x271 = 22U;
	static int8_t x272 = -1;
	int32_t t62 = -31;

	t62 = (((x269-x270)/x271)==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = -1;
	uint64_t x274 = 2958LLU;
	volatile uint16_t x275 = UINT16_MAX;

	t63 = (((x273-x274)/x275)==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x277 = 3U;
	int32_t x278 = -1;
	volatile uint64_t x279 = 1616LLU;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t64 = 98013;

	t64 = (((x277-x278)/x279)==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 15U;
	uint64_t x282 = UINT64_MAX;
	int8_t x283 = -1;
	static int64_t x284 = 142062975LL;
	volatile int32_t t65 = -1;

	t65 = (((x281-x282)/x283)==x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = 827;
	int32_t x290 = -1;
	int32_t x292 = INT32_MIN;
	static int32_t t66 = -8422;

	t66 = (((x289-x290)/x291)==x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x293 = INT8_MIN;
	static int64_t x294 = 252681843294089424LL;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = -1;
	volatile int32_t t67 = 203;

	t67 = (((x293-x294)/x295)==x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = 123607127U;
	int8_t x299 = 12;
	volatile int32_t t68 = -400580;

	t68 = (((x297-x298)/x299)==x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x305 = 19892990LLU;
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = UINT32_MAX;
	volatile int32_t t69 = -580107137;

	t69 = (((x305-x306)/x307)==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x309 = UINT8_MAX;
	uint8_t x310 = UINT8_MAX;
	uint8_t x312 = UINT8_MAX;

	t70 = (((x309-x310)/x311)==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x317 = -1LL;
	int16_t x318 = 0;
	int16_t x319 = INT16_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t71 = 14167744;

	t71 = (((x317-x318)/x319)==x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x323 = -100;
	int8_t x324 = -1;
	volatile int32_t t72 = -172441696;

	t72 = (((x321-x322)/x323)==x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x325 = 8273412U;
	volatile int64_t x326 = INT64_MAX;
	static int16_t x327 = INT16_MIN;
	int8_t x328 = 1;
	static volatile int32_t t73 = 2968308;

	t73 = (((x325-x326)/x327)==x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x329 = 1867359918616956LL;
	int8_t x330 = INT8_MIN;
	int16_t x331 = -1;
	int16_t x332 = -12;
	volatile int32_t t74 = 3028981;

	t74 = (((x329-x330)/x331)==x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = 16LLU;
	volatile int32_t x334 = -1;
	uint32_t x335 = 26149U;
	volatile int32_t x336 = 377169276;
	static volatile int32_t t75 = -39;

	t75 = (((x333-x334)/x335)==x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = INT16_MAX;
	static uint64_t x338 = 7809734258LLU;
	uint8_t x339 = 26U;
	volatile uint64_t x340 = 643559LLU;
	volatile int32_t t76 = 2692933;

	t76 = (((x337-x338)/x339)==x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x341 = UINT16_MAX;
	volatile uint16_t x342 = 41U;
	static int64_t x344 = INT64_MIN;
	int32_t t77 = -438073846;

	t77 = (((x341-x342)/x343)==x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MIN;
	uint32_t x347 = UINT32_MAX;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t78 = -8036;

	t78 = (((x345-x346)/x347)==x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x349 = INT32_MIN;
	int16_t x350 = -31;
	volatile int8_t x351 = INT8_MAX;
	uint32_t x352 = 40801U;
	volatile int32_t t79 = 0;

	t79 = (((x349-x350)/x351)==x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -7474416LL;
	uint64_t x356 = 25619846011633949LLU;
	volatile int32_t t80 = 21;

	t80 = (((x353-x354)/x355)==x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x357 = 5U;
	int16_t x358 = 129;
	uint8_t x360 = 7U;
	int32_t t81 = 2767;

	t81 = (((x357-x358)/x359)==x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = INT16_MAX;
	volatile int16_t x363 = -1;
	int8_t x364 = INT8_MAX;
	static volatile int32_t t82 = 41575;

	t82 = (((x361-x362)/x363)==x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = 48853996741LL;
	int8_t x366 = INT8_MIN;
	int32_t x367 = -2419992;
	int16_t x368 = -1;
	volatile int32_t t83 = 233925;

	t83 = (((x365-x366)/x367)==x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = INT16_MAX;
	int16_t x370 = -177;
	uint16_t x372 = 110U;

	t84 = (((x369-x370)/x371)==x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x373 = INT16_MIN;
	volatile int32_t t85 = 94;

	t85 = (((x373-x374)/x375)==x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x377 = 4U;
	int32_t x378 = INT32_MAX;
	volatile int64_t x379 = INT64_MAX;
	int32_t t86 = 296214573;

	t86 = (((x377-x378)/x379)==x380);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x382 = 3U;
	volatile uint64_t x383 = 2207352LLU;
	volatile int32_t t87 = 944735;

	t87 = (((x381-x382)/x383)==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = 247;
	volatile int16_t x386 = INT16_MIN;
	int8_t x387 = 26;
	volatile int32_t t88 = -878;

	t88 = (((x385-x386)/x387)==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MAX;
	static volatile int64_t x392 = -1LL;

	t89 = (((x389-x390)/x391)==x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x393 = 1;
	static uint32_t x394 = 14117340U;
	int64_t x395 = 8LL;
	static volatile int32_t x396 = INT32_MAX;
	volatile int32_t t90 = -126025;

	t90 = (((x393-x394)/x395)==x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x401 = -1;
	uint8_t x402 = UINT8_MAX;
	int16_t x403 = -1;
	int16_t x404 = 468;

	t91 = (((x401-x402)/x403)==x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x405 = UINT16_MAX;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = 1;
	int32_t t92 = -2;

	t92 = (((x405-x406)/x407)==x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MAX;
	int32_t x410 = 409;
	uint32_t x411 = UINT32_MAX;
	volatile int32_t t93 = -844854;

	t93 = (((x409-x410)/x411)==x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x413 = -1;
	int16_t x414 = 11666;
	uint8_t x415 = 14U;
	int32_t x416 = -1632311;

	t94 = (((x413-x414)/x415)==x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x417 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 56U;

	t95 = (((x417-x418)/x419)==x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x421 = 7068U;
	volatile int16_t x422 = INT16_MIN;
	int64_t x423 = -1057662LL;
	static volatile int16_t x424 = INT16_MIN;
	volatile int32_t t96 = -390774727;

	t96 = (((x421-x422)/x423)==x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x429 = 5411;
	static int16_t x431 = INT16_MIN;
	int32_t t97 = 8732587;

	t97 = (((x429-x430)/x431)==x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x437 = -1;
	volatile int64_t x438 = -14LL;
	uint64_t x439 = 742LLU;
	volatile int32_t t98 = 218;

	t98 = (((x437-x438)/x439)==x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x441 = 1U;
	static int8_t x442 = INT8_MIN;
	int16_t x444 = -58;
	int32_t t99 = -58;

	t99 = (((x441-x442)/x443)==x444);

	if (t99 != 0) { NG(); } else { ; }
	
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

