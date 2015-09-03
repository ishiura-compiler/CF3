#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 91820791LLU;
int32_t x4 = -202;
int16_t x7 = INT16_MAX;
volatile int64_t t2 = -70289641797910144LL;
static volatile int32_t t3 = -1;
int64_t x19 = INT64_MIN;
uint32_t x20 = 1U;
int32_t x25 = INT32_MIN;
int16_t x26 = -1499;
uint64_t x35 = UINT64_MAX;
int32_t t8 = 8471392;
volatile uint16_t x45 = 385U;
int32_t x46 = INT32_MAX;
int8_t x47 = -1;
volatile int64_t t10 = 404659LL;
volatile int16_t x50 = INT16_MAX;
static volatile uint32_t x52 = 740925U;
volatile uint64_t t15 = 5496LLU;
volatile int8_t x71 = 15;
int64_t x83 = 133928LL;
int64_t t19 = -14189LL;
uint16_t x85 = 5102U;
uint32_t x89 = 6U;
volatile int8_t x90 = 39;
int32_t x99 = -1;
int8_t x101 = INT8_MAX;
static int16_t x105 = 321;
int64_t x108 = INT64_MIN;
int32_t t26 = -27;
uint16_t x123 = 16075U;
int32_t x124 = INT32_MAX;
volatile int8_t x126 = INT8_MAX;
static int64_t x128 = INT64_MAX;
uint16_t x130 = 31U;
static int16_t x131 = 860;
uint16_t x133 = 2U;
static uint16_t x134 = UINT16_MAX;
int64_t x137 = INT64_MIN;
int64_t x144 = INT64_MAX;
static int16_t x149 = 1896;
volatile int64_t x150 = -107880088LL;
int64_t t37 = 1LL;
static volatile int64_t x160 = INT64_MIN;
volatile int32_t t39 = 8;
int8_t x166 = INT8_MIN;
int64_t t40 = 71300122310LL;
uint16_t x172 = 23U;
int8_t x178 = INT8_MIN;
uint64_t x179 = UINT64_MAX;
int64_t t45 = 227867576087855LL;
int32_t x192 = 1;
volatile uint64_t t46 = 2904671547585LLU;
static volatile uint16_t x195 = UINT16_MAX;
int32_t t48 = -229124492;
volatile int8_t x204 = -1;
volatile int32_t x205 = -1;
int64_t x208 = -298LL;
volatile int32_t x209 = INT32_MAX;
int32_t x210 = -102;
uint32_t t51 = 370016396U;
volatile int32_t t52 = 131546;
static int16_t x217 = 2;
volatile uint64_t x224 = 70950316241131795LLU;
uint64_t x225 = 40915LLU;
int32_t x240 = INT32_MAX;
int64_t t57 = -14219098352142183LL;
int64_t x251 = INT64_MIN;
int32_t x252 = INT32_MIN;
static volatile int16_t x253 = INT16_MIN;
int16_t x256 = 629;
int32_t x260 = INT32_MAX;
int16_t x264 = INT16_MAX;
uint64_t t63 = 46910LLU;
int32_t x278 = -446166;
static int64_t x285 = -114448719533336386LL;
volatile uint64_t t69 = 501383991692361LLU;
volatile uint32_t x309 = 41838877U;
volatile int16_t x315 = 1;
uint64_t t73 = 17809LLU;
volatile int32_t x317 = -1;
int64_t x320 = INT64_MIN;
volatile int16_t x323 = INT16_MIN;
volatile uint64_t t76 = 19281810480696LLU;
static int16_t x339 = 96;
volatile uint64_t t78 = 1578884148LLU;
int64_t x342 = INT64_MIN;
int8_t x343 = INT8_MIN;
volatile int64_t x346 = INT64_MAX;
static uint16_t x353 = UINT16_MAX;
static volatile uint8_t x356 = 21U;
static volatile int32_t t81 = 71252;
uint8_t x367 = 1U;
int64_t x370 = INT64_MIN;
int16_t x371 = 1238;
int8_t x372 = INT8_MAX;
int8_t x374 = -8;
int8_t x387 = 0;
volatile int64_t t88 = -1630144242037774721LL;
int32_t x390 = 223184266;
uint32_t x405 = 1U;
static uint16_t x409 = 21393U;
int8_t x412 = INT8_MIN;
int16_t x414 = INT16_MIN;
int32_t x424 = -1;
int64_t t96 = -75LL;
volatile uint32_t x425 = UINT32_MAX;
uint32_t x437 = 146561580U;


void f0(void) {
	uint64_t x2 = 108820LLU;
	static int32_t x3 = -1;
	uint64_t t0 = 1202LLU;

	t0 = (((x1&x2)+x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	uint32_t x6 = 9U;
	int16_t x8 = INT16_MIN;
	volatile int64_t t1 = -10075076604LL;

	t1 = (((x5&x6)+x7)/x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	volatile int16_t x10 = -357;
	volatile uint32_t x11 = 186U;
	uint16_t x12 = UINT16_MAX;

	t2 = (((x9&x10)+x11)/x12);

	if (t2 != -140739635871744LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 26U;
	static int16_t x14 = 996;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = 45;

	t3 = (((x13&x14)+x15)/x16);

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MAX;
	int64_t t4 = INT64_MIN;

	t4 = (((x17&x18)+x19)/x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x27 = -107698536183LL;
	int16_t x28 = -1;
	volatile int64_t t5 = -7776951008355LL;

	t5 = (((x25&x26)+x27)/x28);

	if (t5 != 109846019831LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -46849692LL;
	uint32_t x30 = 0U;
	int8_t x31 = -63;
	static int16_t x32 = 14822;
	volatile int64_t t6 = -36703LL;

	t6 = (((x29&x30)+x31)/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x33 = 0U;
	int8_t x34 = -11;
	int32_t x36 = INT32_MIN;
	uint64_t t7 = 75LLU;

	t7 = (((x33&x34)+x35)/x36);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 927U;
	int16_t x38 = -7582;
	int8_t x39 = -1;
	static volatile uint16_t x40 = 13U;

	t8 = (((x37&x38)+x39)/x40);

	if (t8 != 39) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	static int16_t x42 = -234;
	uint32_t x43 = 192638U;
	volatile uint8_t x44 = 3U;
	uint32_t t9 = 13U;

	t9 = (((x41&x42)+x43)/x44);

	if (t9 != 715892095U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x48 = INT64_MAX;

	t10 = (((x45&x46)+x47)/x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	static int32_t x51 = -1;
	uint32_t t11 = 1829403857U;

	t11 = (((x49&x50)+x51)/x52);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	static int8_t x54 = INT8_MAX;
	static volatile int32_t x55 = INT32_MIN;
	volatile uint16_t x56 = 1640U;
	static volatile int64_t t12 = 97120620LL;

	t12 = (((x53&x54)+x55)/x56);

	if (t12 != -1309441LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MIN;
	uint32_t x58 = UINT32_MAX;
	int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MIN;
	int64_t t13 = -5260942LL;

	t13 = (((x57&x58)+x59)/x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -8;
	static int8_t x62 = -1;
	int16_t x63 = -13304;
	int16_t x64 = -1560;
	volatile int32_t t14 = 0;

	t14 = (((x61&x62)+x63)/x64);

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x65 = 10003571234760LLU;
	int32_t x66 = -1;
	volatile int32_t x67 = -1364;
	int16_t x68 = -45;

	t15 = (((x65&x66)+x67)/x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x69 = 43433481023519LLU;
	static uint64_t x70 = UINT64_MAX;
	int32_t x72 = -1;
	volatile uint64_t t16 = 250497010092183638LLU;

	t16 = (((x69&x70)+x71)/x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MIN;
	uint64_t x74 = UINT64_MAX;
	volatile int8_t x75 = INT8_MIN;
	uint32_t x76 = 776U;
	static volatile uint64_t t17 = 1752LLU;

	t17 = (((x73&x74)+x75)/x76);

	if (t17 != 23771577414574122LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	int16_t x78 = 29;
	static volatile uint16_t x79 = 17U;
	uint8_t x80 = 19U;
	static volatile int32_t t18 = 0;

	t18 = (((x77&x78)+x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	static volatile int32_t x82 = INT32_MIN;
	static int16_t x84 = 208;

	t19 = (((x81&x82)+x83)/x84);

	if (t19 != 643LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = -1;
	volatile int32_t x87 = 3772480;
	uint32_t x88 = UINT32_MAX;
	static uint32_t t20 = 118560U;

	t20 = (((x85&x86)+x87)/x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x91 = UINT64_MAX;
	uint32_t x92 = 2U;
	static volatile uint64_t t21 = 9LLU;

	t21 = (((x89&x90)+x91)/x92);

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	static uint64_t x94 = 363341667LLU;
	uint8_t x95 = 0U;
	uint32_t x96 = 1718U;
	uint64_t t22 = 3LLU;

	t22 = (((x93&x94)+x95)/x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MAX;
	uint16_t x98 = UINT16_MAX;
	static int64_t x100 = -1LL;
	static int64_t t23 = 54630LL;

	t23 = (((x97&x98)+x99)/x100);

	if (t23 != -32766LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x102 = 102127642560544354LLU;
	static uint64_t x103 = 6098342661159095845LLU;
	int32_t x104 = INT32_MIN;
	uint64_t t24 = 23884LLU;

	t24 = (((x101&x102)+x103)/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = -465907125;
	static int32_t x107 = -1;
	int64_t t25 = -2068813044LL;

	t25 = (((x105&x106)+x107)/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 0U;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = 0;
	static uint16_t x112 = 30535U;

	t26 = (((x109&x110)+x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = -14;
	static uint32_t x114 = UINT32_MAX;
	int16_t x115 = -739;
	uint32_t x116 = UINT32_MAX;
	volatile uint32_t t27 = 651455U;

	t27 = (((x113&x114)+x115)/x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = 3602;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MIN;
	uint64_t t28 = 81698118732817617LLU;

	t28 = (((x117&x118)+x119)/x120);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 3494735U;
	static int8_t x122 = INT8_MIN;
	volatile uint32_t t29 = 666598U;

	t29 = (((x121&x122)+x123)/x124);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	int64_t x127 = -1670038809211250LL;
	int64_t t30 = -6378LL;

	t30 = (((x125&x126)+x127)/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x132 = 1U;
	int32_t t31 = 308092;

	t31 = (((x129&x130)+x131)/x132);

	if (t31 != 860) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x135 = 6;
	static uint64_t x136 = UINT64_MAX;
	volatile uint64_t t32 = 11040181801598856LLU;

	t32 = (((x133&x134)+x135)/x136);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x138 = 62U;
	int32_t x139 = 712;
	volatile uint8_t x140 = UINT8_MAX;
	volatile int64_t t33 = -854LL;

	t33 = (((x137&x138)+x139)/x140);

	if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	static int64_t x143 = 785740991093222657LL;
	int64_t t34 = -4397764324233LL;

	t34 = (((x141&x142)+x143)/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -1LL;
	volatile uint32_t x146 = 458130U;
	int16_t x147 = INT16_MIN;
	static volatile uint8_t x148 = 1U;
	int64_t t35 = 395265165LL;

	t35 = (((x145&x146)+x147)/x148);

	if (t35 != 425362LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x151 = INT32_MAX;
	int8_t x152 = -1;
	int64_t t36 = -3950LL;

	t36 = (((x149&x150)+x151)/x152);

	if (t36 != -2147484007LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = INT8_MAX;
	static int64_t x154 = INT64_MIN;
	int32_t x155 = -1;
	volatile uint8_t x156 = 1U;

	t37 = (((x153&x154)+x155)/x156);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = -1;
	volatile int8_t x158 = INT8_MIN;
	static uint64_t x159 = 8LLU;
	static volatile uint64_t t38 = 1065299795015499LLU;

	t38 = (((x157&x158)+x159)/x160);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = UINT8_MAX;
	volatile int16_t x162 = 1153;
	static int16_t x163 = INT16_MAX;
	int16_t x164 = INT16_MAX;

	t39 = (((x161&x162)+x163)/x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x165 = 1604302U;
	int64_t x167 = -882LL;
	int64_t x168 = 7LL;

	t40 = (((x165&x166)+x167)/x168);

	if (t40 != 229048LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	static int8_t x170 = -1;
	static volatile uint8_t x171 = UINT8_MAX;
	static volatile int32_t t41 = 296;

	t41 = (((x169&x170)+x171)/x172);

	if (t41 != -1413) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = 26;
	int8_t x174 = 1;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MIN;
	volatile uint32_t t42 = 7684U;

	t42 = (((x173&x174)+x175)/x176);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	int64_t x180 = -2LL;
	volatile uint64_t t43 = 661747544142870LLU;

	t43 = (((x177&x178)+x179)/x180);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = 7;
	static uint32_t x183 = 54576221U;
	volatile int8_t x184 = INT8_MIN;
	volatile uint32_t t44 = 13U;

	t44 = (((x181&x182)+x183)/x184);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = -753404936471LL;
	static int8_t x186 = -1;
	uint8_t x187 = 58U;
	volatile int8_t x188 = -1;

	t45 = (((x185&x186)+x187)/x188);

	if (t45 != 753404936413LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 8U;
	static uint64_t x190 = 2009643332428132LLU;
	int64_t x191 = 28LL;

	t46 = (((x189&x190)+x191)/x192);

	if (t46 != 28LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x193 = 2011371U;
	int16_t x194 = -10422;
	uint32_t x196 = 15102276U;
	uint32_t t47 = 284866U;

	t47 = (((x193&x194)+x195)/x196);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	int16_t x198 = 255;
	static int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MIN;

	t48 = (((x197&x198)+x199)/x200);

	if (t48 != 16777216) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 1417778LLU;
	static volatile int32_t x202 = INT32_MAX;
	int64_t x203 = -1LL;
	uint64_t t49 = 2563424LLU;

	t49 = (((x201&x202)+x203)/x204);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x206 = INT16_MIN;
	static uint32_t x207 = 5616U;
	int64_t t50 = 608204LL;

	t50 = (((x205&x206)+x207)/x208);

	if (t50 != -14412550LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x211 = INT16_MIN;
	uint32_t x212 = 20454796U;

	t51 = (((x209&x210)+x211)/x212);

	if (t51 != 104U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MAX;
	static volatile int16_t x214 = -16;
	uint8_t x215 = 37U;
	int32_t x216 = INT32_MIN;

	t52 = (((x213&x214)+x215)/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x218 = -1;
	uint16_t x219 = 42U;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t53 = 505072;

	t53 = (((x217&x218)+x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	volatile uint32_t x222 = UINT32_MAX;
	static uint32_t x223 = 2113861735U;
	volatile uint64_t t54 = 87856128434823LLU;

	t54 = (((x221&x222)+x223)/x224);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x226 = -206673;
	int16_t x227 = -1;
	static volatile int32_t x228 = -1;
	volatile uint64_t t55 = 246820154LLU;

	t55 = (((x225&x226)+x227)/x228);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 65U;
	int16_t x234 = INT16_MAX;
	int16_t x235 = -1;
	uint8_t x236 = 3U;
	volatile int32_t t56 = -1563;

	t56 = (((x233&x234)+x235)/x236);

	if (t56 != 21) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MAX;
	int64_t x238 = -8670LL;
	volatile int16_t x239 = -1;

	t57 = (((x237&x238)+x239)/x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = -209413;
	int64_t x242 = INT64_MAX;
	static uint8_t x243 = UINT8_MAX;
	int64_t x244 = -1LL;
	int64_t t58 = -1340511456LL;

	t58 = (((x241&x242)+x243)/x244);

	if (t58 != -9223372036854566650LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = 10225;
	uint32_t x246 = 913204U;
	int16_t x247 = 1;
	volatile int8_t x248 = -1;
	volatile uint32_t t59 = 1U;

	t59 = (((x245&x246)+x247)/x248);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x249 = 4U;
	int64_t x250 = -245LL;
	int64_t t60 = -2119LL;

	t60 = (((x249&x250)+x251)/x252);

	if (t60 != 4294967296LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x254 = -1;
	int8_t x255 = INT8_MIN;
	static volatile int32_t t61 = -2;

	t61 = (((x253&x254)+x255)/x256);

	if (t61 != -52) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = 12173;
	int8_t x258 = -6;
	static volatile uint16_t x259 = UINT16_MAX;
	int32_t t62 = -29533439;

	t62 = (((x257&x258)+x259)/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = 23128539521085928LL;
	uint64_t x262 = 903749LLU;
	static uint16_t x263 = 172U;

	t63 = (((x261&x262)+x263)/x264);

	if (t63 != 3LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x265 = 1U;
	int8_t x266 = 0;
	uint8_t x267 = 4U;
	static uint64_t x268 = UINT64_MAX;
	uint64_t t64 = 17231823574LLU;

	t64 = (((x265&x266)+x267)/x268);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MIN;
	volatile int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	uint64_t t65 = 18LLU;

	t65 = (((x269&x270)+x271)/x272);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	volatile uint32_t x274 = 1017374U;
	int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	volatile int64_t t66 = 402452943310LL;

	t66 = (((x273&x274)+x275)/x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x277 = 966LLU;
	uint32_t x279 = 24U;
	uint8_t x280 = 49U;
	uint64_t t67 = 932606141150444LLU;

	t67 = (((x277&x278)+x279)/x280);

	if (t67 != 5LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x281 = 47U;
	int8_t x282 = INT8_MIN;
	static uint32_t x283 = UINT32_MAX;
	int32_t x284 = -5174;
	static volatile uint32_t t68 = 2030727U;

	t68 = (((x281&x282)+x283)/x284);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x286 = INT16_MIN;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t x288 = 216397;

	t69 = (((x285&x286)+x287)/x288);

	if (t69 != 84716032820123LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x293 = -8124372247306976LL;
	static int8_t x294 = 0;
	int64_t x295 = -316449277039585LL;
	int64_t x296 = 2LL;
	volatile int64_t t70 = -125145831LL;

	t70 = (((x293&x294)+x295)/x296);

	if (t70 != -158224638519792LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 11U;
	uint16_t x306 = UINT16_MAX;
	volatile int8_t x307 = 17;
	static int64_t x308 = INT64_MIN;
	static volatile int64_t t71 = -1528619814716LL;

	t71 = (((x305&x306)+x307)/x308);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x310 = INT32_MAX;
	int32_t x311 = -51;
	int16_t x312 = 38;
	static volatile uint32_t t72 = 1499U;

	t72 = (((x309&x310)+x311)/x312);

	if (t72 != 1101021U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x313 = 121214798144020LLU;
	volatile uint8_t x314 = 18U;
	int8_t x316 = INT8_MIN;

	t73 = (((x313&x314)+x315)/x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	int64_t t74 = 33436919992746LL;

	t74 = (((x317&x318)+x319)/x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	int32_t x324 = 4;
	uint64_t t75 = 54152813LLU;

	t75 = (((x321&x322)+x323)/x324);

	if (t75 != 4611686018427379711LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = -1;
	static volatile uint64_t x326 = 480828778LLU;
	int32_t x327 = INT32_MIN;
	uint32_t x328 = 899408U;

	t76 = (((x325&x326)+x327)/x328);

	if (t76 != 20509873241112LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x333 = -1;
	static volatile int16_t x334 = 79;
	volatile uint32_t x335 = 2U;
	static int64_t x336 = INT64_MIN;
	int64_t t77 = -2768837092563302926LL;

	t77 = (((x333&x334)+x335)/x336);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x337 = INT64_MAX;
	static uint64_t x338 = 1073LLU;
	static uint64_t x340 = 24LLU;

	t78 = (((x337&x338)+x339)/x340);

	if (t78 != 48LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x341 = 46U;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t79 = -57363LL;

	t79 = (((x341&x342)+x343)/x344);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x345 = 82773699695LLU;
	volatile int16_t x347 = INT16_MAX;
	int64_t x348 = INT64_MIN;
	uint64_t t80 = 6LLU;

	t80 = (((x345&x346)+x347)/x348);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x354 = 139184;
	int8_t x355 = -1;

	t81 = (((x353&x354)+x355)/x356);

	if (t81 != 386) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x357 = 23LLU;
	int32_t x358 = -1;
	uint8_t x359 = 37U;
	int32_t x360 = 1811069;
	volatile uint64_t t82 = 6100293317LLU;

	t82 = (((x357&x358)+x359)/x360);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x361 = -32;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = -1;
	int64_t x364 = INT64_MIN;
	int64_t t83 = -29853LL;

	t83 = (((x361&x362)+x363)/x364);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MIN;
	volatile uint32_t x368 = 8U;
	static volatile int64_t t84 = 258318089LL;

	t84 = (((x365&x366)+x367)/x368);

	if (t84 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x369 = -310;
	volatile int64_t t85 = 7049829LL;

	t85 = (((x369&x370)+x371)/x372);

	if (t85 != -72624976668147831LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x373 = 743291U;
	int8_t x375 = INT8_MIN;
	static int64_t x376 = 3225217321531239LL;
	int64_t t86 = 5155675LL;

	t86 = (((x373&x374)+x375)/x376);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x377 = 66288U;
	uint16_t x378 = 2337U;
	static int16_t x379 = INT16_MIN;
	static uint16_t x380 = 13154U;
	uint32_t t87 = 333U;

	t87 = (((x377&x378)+x379)/x380);

	if (t87 != 326511U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = INT8_MAX;
	static volatile int8_t x386 = INT8_MIN;
	int64_t x388 = 611543LL;

	t88 = (((x385&x386)+x387)/x388);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MAX;
	static int16_t x391 = -11844;
	static uint32_t x392 = 9U;
	static int64_t t89 = 1LL;

	t89 = (((x389&x390)+x391)/x392);

	if (t89 != 24796935LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 212184180U;
	int16_t x394 = INT16_MIN;
	static volatile int32_t x395 = INT32_MAX;
	uint32_t x396 = 31643U;
	volatile uint32_t t90 = 1U;

	t90 = (((x393&x394)+x395)/x396);

	if (t90 != 74571U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = 2698U;
	int32_t x398 = INT32_MAX;
	volatile int8_t x399 = -1;
	int64_t x400 = INT64_MAX;
	static volatile int64_t t91 = -7938772024LL;

	t91 = (((x397&x398)+x399)/x400);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x401 = -1;
	uint16_t x402 = 18680U;
	uint8_t x403 = 1U;
	uint8_t x404 = 1U;
	volatile int32_t t92 = -4964;

	t92 = (((x401&x402)+x403)/x404);

	if (t92 != 18681) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x406 = 161751590243LL;
	static uint32_t x407 = 930U;
	int32_t x408 = INT32_MIN;
	int64_t t93 = -6LL;

	t93 = (((x405&x406)+x407)/x408);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x410 = UINT8_MAX;
	volatile uint16_t x411 = 71U;
	volatile int32_t t94 = -4905;

	t94 = (((x409&x410)+x411)/x412);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = INT64_MIN;
	volatile uint64_t x415 = UINT64_MAX;
	volatile int16_t x416 = INT16_MIN;
	static uint64_t t95 = 9102LLU;

	t95 = (((x413&x414)+x415)/x416);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = INT64_MIN;
	int64_t x422 = 164737868LL;
	uint16_t x423 = 122U;

	t96 = (((x421&x422)+x423)/x424);

	if (t96 != -122LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x426 = 312839LLU;
	int32_t x427 = -50;
	uint8_t x428 = 6U;
	uint64_t t97 = 81720125202962386LLU;

	t97 = (((x425&x426)+x427)/x428);

	if (t97 != 52131LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x438 = UINT32_MAX;
	int8_t x439 = 0;
	static uint8_t x440 = UINT8_MAX;
	static volatile uint32_t t98 = 684429576U;

	t98 = (((x437&x438)+x439)/x440);

	if (t98 != 574751U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = -8117;
	uint32_t x442 = 2565864U;
	static volatile int64_t x443 = INT64_MIN;
	uint16_t x444 = 7U;
	static int64_t t99 = -2979221973457LL;

	t99 = (((x441&x442)+x443)/x444);

	if (t99 != -1317624576693173091LL) { NG(); } else { ; }
	
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

