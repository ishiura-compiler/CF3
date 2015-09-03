#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -10LL;
static int8_t x5 = INT8_MIN;
uint64_t x18 = UINT64_MAX;
uint64_t x20 = 333067LLU;
volatile uint64_t t4 = 41417LLU;
static int32_t x22 = INT32_MIN;
int32_t x23 = INT32_MIN;
static uint16_t x29 = 10074U;
uint32_t x34 = UINT32_MAX;
int32_t x36 = INT32_MIN;
static int32_t t10 = INT32_MIN;
int16_t x51 = INT16_MIN;
static uint64_t x52 = 1150627948271652351LLU;
volatile uint64_t t12 = 8065967LLU;
int64_t x60 = 286903LL;
static int64_t x65 = 7432002959LL;
int16_t x67 = INT16_MIN;
int16_t x83 = -2649;
static volatile int32_t t20 = 0;
int8_t x85 = INT8_MAX;
int8_t x94 = -1;
volatile uint64_t t23 = 3LLU;
volatile uint8_t x97 = 49U;
uint64_t x107 = 50959407LLU;
int8_t x109 = INT8_MIN;
int8_t x111 = 21;
uint8_t x114 = 1U;
static uint8_t x116 = 4U;
int32_t t28 = -646165512;
volatile int32_t x118 = -1;
static volatile int32_t t29 = INT32_MAX;
volatile int64_t x132 = 81575440LL;
int64_t t32 = -384478151215562LL;
uint64_t x138 = 1LLU;
volatile int32_t t34 = -3736989;
int16_t x142 = -57;
uint64_t t35 = UINT64_MAX;
uint16_t x147 = UINT16_MAX;
int16_t x148 = -1;
uint16_t x150 = UINT16_MAX;
int16_t x152 = INT16_MIN;
int8_t x165 = INT8_MIN;
static volatile int8_t x167 = INT8_MIN;
int64_t x170 = INT64_MIN;
static int16_t x185 = INT16_MAX;
int8_t x192 = INT8_MIN;
volatile uint16_t x193 = 11U;
volatile uint16_t x194 = 16U;
int64_t x198 = INT64_MIN;
volatile int32_t t49 = 1603;
static int16_t x202 = 2312;
volatile int32_t x204 = INT32_MIN;
volatile int32_t t50 = INT32_MIN;
uint32_t x206 = 285606U;
int64_t t51 = 31017983603LL;
int16_t x211 = -1;
volatile int32_t t52 = 258426;
uint64_t t53 = UINT64_MAX;
int32_t t54 = -8113;
static uint64_t x222 = 2090202065082023LLU;
static int64_t x226 = INT64_MIN;
uint64_t x227 = 6649951195LLU;
int8_t x230 = INT8_MAX;
static int32_t x240 = INT32_MIN;
static int32_t x245 = -26526568;
volatile int32_t t61 = 8913200;
volatile int8_t x251 = -8;
uint8_t x255 = 61U;
int64_t t63 = INT64_MIN;
int64_t x276 = 245147770286100433LL;
int8_t x277 = INT8_MIN;
uint16_t x288 = 9U;
int8_t x291 = 9;
int32_t x293 = -1;
uint64_t x294 = 6215180417486784656LLU;
int64_t t73 = INT64_MAX;
uint32_t x297 = 180U;
int8_t x304 = INT8_MIN;
uint16_t x307 = 19772U;
static volatile int64_t x311 = INT64_MIN;
volatile int32_t t78 = -309039129;
uint32_t x317 = UINT32_MAX;
uint8_t x320 = 1U;
int8_t x324 = INT8_MAX;
volatile int64_t t81 = 35LL;
int16_t x332 = -5;
volatile uint64_t x333 = UINT64_MAX;
static int32_t t84 = 42;
int16_t x343 = INT16_MIN;
uint32_t x346 = 0U;
int32_t x348 = -1;
volatile int16_t x349 = INT16_MAX;
static uint32_t x350 = UINT32_MAX;
static int64_t x356 = INT64_MIN;
int32_t x364 = INT32_MIN;
int32_t x366 = -598819387;
int32_t x367 = INT32_MAX;
volatile int32_t x369 = -44529992;
uint32_t x370 = 237U;
uint8_t x372 = 3U;
static int64_t x373 = INT64_MIN;
volatile int64_t x377 = INT64_MAX;
static uint16_t x383 = 51U;
int64_t x393 = INT64_MAX;
int64_t x397 = 111022818LL;
uint64_t x399 = 99967486265LLU;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int8_t x2 = -42;
	uint8_t x3 = 4U;
	int64_t x4 = -1391277946908LL;

	t0 = (((x1&x2)==x3)^x4);

	if (t0 != -1391277946908LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = 1LLU;
	volatile int8_t x7 = INT8_MAX;
	int64_t x8 = -1127132629693827LL;
	volatile int64_t t1 = -10694617292787159LL;

	t1 = (((x5&x6)==x7)^x8);

	if (t1 != -1127132629693827LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x10 = 34U;
	uint8_t x11 = 1U;
	static uint64_t x12 = 12LLU;
	volatile uint64_t t2 = 30273418747884595LLU;

	t2 = (((x9&x10)==x11)^x12);

	if (t2 != 12LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile uint8_t x14 = 68U;
	static volatile uint32_t x15 = 53248649U;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (((x13&x14)==x15)^x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 1LL;
	volatile uint8_t x19 = 12U;

	t4 = (((x17&x18)==x19)^x20);

	if (t4 != 333067LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 4U;
	uint16_t x24 = 294U;
	int32_t t5 = -60033;

	t5 = (((x21&x22)==x23)^x24);

	if (t5 != 294) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int32_t x26 = -1478269;
	volatile int32_t x27 = INT32_MAX;
	volatile int32_t x28 = 74628184;
	volatile int32_t t6 = -1;

	t6 = (((x25&x26)==x27)^x28);

	if (t6 != 74628184) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MAX;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = -89587189;

	t7 = (((x29&x30)==x31)^x32);

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -12;
	volatile uint32_t x35 = 0U;
	volatile int32_t t8 = INT32_MIN;

	t8 = (((x33&x34)==x35)^x36);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int32_t x38 = -1;
	int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -97652;

	t9 = (((x37&x38)==x39)^x40);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 16822221U;
	static uint8_t x42 = UINT8_MAX;
	int32_t x43 = INT32_MAX;
	int32_t x44 = INT32_MIN;

	t10 = (((x41&x42)==x43)^x44);

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 274025799LL;
	int32_t x46 = INT32_MIN;
	static int16_t x47 = -1;
	volatile int16_t x48 = INT16_MAX;
	volatile int32_t t11 = -954030;

	t11 = (((x45&x46)==x47)^x48);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 3822024439688599071LLU;
	volatile uint8_t x50 = 1U;

	t12 = (((x49&x50)==x51)^x52);

	if (t12 != 1150627948271652351LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 1821809U;
	uint32_t x54 = 105611215U;
	int16_t x55 = 0;
	volatile uint64_t x56 = 6556LLU;
	uint64_t t13 = 7962637427173LLU;

	t13 = (((x53&x54)==x55)^x56);

	if (t13 != 6556LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int8_t x58 = INT8_MIN;
	int32_t x59 = -569443;
	int64_t t14 = -37113970591LL;

	t14 = (((x57&x58)==x59)^x60);

	if (t14 != 286903LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int8_t x62 = INT8_MIN;
	static volatile int64_t x63 = -1LL;
	uint32_t x64 = 17927U;
	volatile uint32_t t15 = 732675U;

	t15 = (((x61&x62)==x63)^x64);

	if (t15 != 17927U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 9U;
	static int8_t x68 = INT8_MIN;
	int32_t t16 = -1;

	t16 = (((x65&x66)==x67)^x68);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 17;
	int16_t x70 = 5514;
	static uint64_t x71 = 3711LLU;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = 939;

	t17 = (((x69&x70)==x71)^x72);

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 10U;
	int32_t x74 = 2758215;
	static int8_t x75 = INT8_MIN;
	uint16_t x76 = 9312U;
	int32_t t18 = -181548628;

	t18 = (((x73&x74)==x75)^x76);

	if (t18 != 9312) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1891;
	int64_t x78 = INT64_MIN;
	uint8_t x79 = 31U;
	volatile int32_t x80 = 1;
	volatile int32_t t19 = -402294;

	t19 = (((x77&x78)==x79)^x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 0U;
	uint8_t x82 = UINT8_MAX;
	volatile int32_t x84 = -1;

	t20 = (((x81&x82)==x83)^x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MAX;
	uint8_t x88 = 44U;
	int32_t t21 = 4082322;

	t21 = (((x85&x86)==x87)^x88);

	if (t21 != 44) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 3782U;
	volatile int16_t x90 = INT16_MIN;
	uint64_t x91 = 1394292493547123003LLU;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 772317;

	t22 = (((x89&x90)==x91)^x92);

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	uint16_t x95 = 7361U;
	uint64_t x96 = 2LLU;

	t23 = (((x93&x94)==x95)^x96);

	if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MAX;
	static int8_t x99 = 14;
	static volatile int16_t x100 = -1;
	int32_t t24 = 115616437;

	t24 = (((x97&x98)==x99)^x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -6;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = 233415685U;
	static int16_t x104 = 3002;
	static int32_t t25 = 4059002;

	t25 = (((x101&x102)==x103)^x104);

	if (t25 != 3002) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = UINT8_MAX;
	volatile uint64_t x106 = 64059589241975LLU;
	volatile uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = -2;

	t26 = (((x105&x106)==x107)^x108);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = 128207;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -1;

	t27 = (((x109&x110)==x111)^x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	volatile int8_t x115 = -1;

	t28 = (((x113&x114)==x115)^x116);

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	int32_t x120 = INT32_MAX;

	t29 = (((x117&x118)==x119)^x120);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -85;
	volatile uint8_t x122 = UINT8_MAX;
	int64_t x123 = -4190LL;
	int64_t x124 = 270832416363312LL;
	volatile int64_t t30 = 256089218657284308LL;

	t30 = (((x121&x122)==x123)^x124);

	if (t30 != 270832416363312LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = -3557350LL;
	int8_t x127 = INT8_MIN;
	int32_t x128 = -1;
	int32_t t31 = -1;

	t31 = (((x125&x126)==x127)^x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = 223U;
	static int64_t x131 = -1LL;

	t32 = (((x129&x130)==x131)^x132);

	if (t32 != 81575440LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1776;
	int64_t x134 = INT64_MIN;
	int16_t x135 = -1;
	int8_t x136 = 3;
	volatile int32_t t33 = -123815;

	t33 = (((x133&x134)==x135)^x136);

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -249;
	int64_t x139 = INT64_MAX;
	static volatile int32_t x140 = 13;

	t34 = (((x137&x138)==x139)^x140);

	if (t34 != 13) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 476U;
	uint64_t x143 = 47711495109283LLU;
	uint64_t x144 = UINT64_MAX;

	t35 = (((x141&x142)==x143)^x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	int8_t x146 = 0;
	volatile int32_t t36 = 1;

	t36 = (((x145&x146)==x147)^x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	static uint32_t x151 = UINT32_MAX;
	int32_t t37 = -3395;

	t37 = (((x149&x150)==x151)^x152);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 89552849241979LLU;
	int32_t x154 = INT32_MIN;
	uint16_t x155 = 1793U;
	int64_t x156 = INT64_MIN;
	int64_t t38 = INT64_MIN;

	t38 = (((x153&x154)==x155)^x156);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	static int64_t x158 = -81LL;
	static uint64_t x159 = 56987362LLU;
	volatile int8_t x160 = INT8_MAX;
	int32_t t39 = 5;

	t39 = (((x157&x158)==x159)^x160);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 15U;
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = -1732142;
	int8_t x164 = -1;
	int32_t t40 = 30;

	t40 = (((x161&x162)==x163)^x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 210752261;

	t41 = (((x165&x166)==x167)^x168);

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int64_t x171 = INT64_MAX;
	int64_t x172 = 56576170300751LL;
	volatile int64_t t42 = 57LL;

	t42 = (((x169&x170)==x171)^x172);

	if (t42 != 56576170300751LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 0U;
	volatile int64_t x174 = 371LL;
	uint8_t x175 = 62U;
	int32_t x176 = -38885817;
	static volatile int32_t t43 = 3;

	t43 = (((x173&x174)==x175)^x176);

	if (t43 != -38885817) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 1;
	uint64_t x178 = 1168444282663LLU;
	uint16_t x179 = 1533U;
	uint16_t x180 = 1U;
	static volatile int32_t t44 = 13855;

	t44 = (((x177&x178)==x179)^x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 99065638U;
	uint16_t x182 = 1508U;
	static int8_t x183 = 1;
	volatile int32_t x184 = INT32_MAX;
	static volatile int32_t t45 = INT32_MAX;

	t45 = (((x181&x182)==x183)^x184);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -21018217010LL;
	static int32_t x187 = -1;
	int64_t x188 = 4756410748LL;
	volatile int64_t t46 = 3387LL;

	t46 = (((x185&x186)==x187)^x188);

	if (t46 != 4756410748LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -105320;
	int64_t x190 = 7270855026057048LL;
	int8_t x191 = -1;
	volatile int32_t t47 = 2;

	t47 = (((x189&x190)==x191)^x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x195 = -1523093375LL;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = -620342;

	t48 = (((x193&x194)==x195)^x196);

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int64_t x199 = 504829725LL;
	uint16_t x200 = 213U;

	t49 = (((x197&x198)==x199)^x200);

	if (t49 != 213) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -7401889LL;
	static int64_t x203 = INT64_MAX;

	t50 = (((x201&x202)==x203)^x204);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -1LL;
	int16_t x207 = -1;
	int64_t x208 = -1530LL;

	t51 = (((x205&x206)==x207)^x208);

	if (t51 != -1530LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 2291213LL;
	int32_t x210 = -1;
	volatile int16_t x212 = 53;

	t52 = (((x209&x210)==x211)^x212);

	if (t52 != 53) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = UINT16_MAX;
	uint64_t x214 = 3919050LLU;
	int16_t x215 = INT16_MIN;
	volatile uint64_t x216 = UINT64_MAX;

	t53 = (((x213&x214)==x215)^x216);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = -1;
	int32_t x218 = 37215;
	int8_t x219 = -23;
	int8_t x220 = -1;

	t54 = (((x217&x218)==x219)^x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	uint32_t x223 = 84010357U;
	int64_t x224 = 108843125LL;
	static int64_t t55 = -3095516843213LL;

	t55 = (((x221&x222)==x223)^x224);

	if (t55 != 108843125LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x225 = -1;
	int16_t x228 = 740;
	int32_t t56 = 16;

	t56 = (((x225&x226)==x227)^x228);

	if (t56 != 740) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	int32_t x231 = -1;
	volatile uint32_t x232 = 313893242U;
	volatile uint32_t t57 = 0U;

	t57 = (((x229&x230)==x231)^x232);

	if (t57 != 313893242U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	static uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t58 = 2940662;

	t58 = (((x233&x234)==x235)^x236);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 0;
	uint64_t x238 = 95425528162677LLU;
	static uint8_t x239 = UINT8_MAX;
	int32_t t59 = INT32_MIN;

	t59 = (((x237&x238)==x239)^x240);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -103;
	uint8_t x242 = 9U;
	int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MAX;
	int32_t t60 = 1800013;

	t60 = (((x241&x242)==x243)^x244);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x246 = INT8_MAX;
	int32_t x247 = -1;
	int8_t x248 = 9;

	t61 = (((x245&x246)==x247)^x248);

	if (t61 != 9) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	static volatile uint64_t x250 = 508LLU;
	static uint8_t x252 = 4U;
	int32_t t62 = 106711;

	t62 = (((x249&x250)==x251)^x252);

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 3466102U;
	int32_t x254 = -899928;
	int64_t x256 = INT64_MIN;

	t63 = (((x253&x254)==x255)^x256);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -45;
	int32_t x258 = -1;
	int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MIN;
	int64_t t64 = INT64_MIN;

	t64 = (((x257&x258)==x259)^x260);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MAX;
	int32_t x262 = INT32_MAX;
	int64_t x263 = INT64_MIN;
	static uint64_t x264 = 15LLU;
	volatile uint64_t t65 = 16133247802LLU;

	t65 = (((x261&x262)==x263)^x264);

	if (t65 != 15LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int64_t x266 = 1183354531LL;
	int16_t x267 = 30;
	volatile int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = 449110;

	t66 = (((x265&x266)==x267)^x268);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int8_t x270 = -1;
	int64_t x271 = -17881021153LL;
	volatile int64_t x272 = INT64_MIN;
	int64_t t67 = INT64_MIN;

	t67 = (((x269&x270)==x271)^x272);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = 330;
	volatile int64_t x275 = INT64_MAX;
	volatile int64_t t68 = -20415LL;

	t68 = (((x273&x274)==x275)^x276);

	if (t68 != 245147770286100433LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = -14683;
	static uint16_t x279 = 37U;
	static int8_t x280 = INT8_MAX;
	int32_t t69 = 107246739;

	t69 = (((x277&x278)==x279)^x280);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MAX;
	uint32_t x283 = UINT32_MAX;
	static uint16_t x284 = 176U;
	volatile int32_t t70 = 511194174;

	t70 = (((x281&x282)==x283)^x284);

	if (t70 != 176) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = 1;
	int8_t x286 = INT8_MAX;
	int64_t x287 = INT64_MIN;
	static volatile int32_t t71 = -17332;

	t71 = (((x285&x286)==x287)^x288);

	if (t71 != 9) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	int8_t x290 = -1;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t72 = INT32_MIN;

	t72 = (((x289&x290)==x291)^x292);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x295 = INT8_MAX;
	int64_t x296 = INT64_MAX;

	t73 = (((x293&x294)==x295)^x296);

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x298 = 61U;
	volatile int8_t x299 = INT8_MIN;
	volatile uint16_t x300 = UINT16_MAX;
	int32_t t74 = -481;

	t74 = (((x297&x298)==x299)^x300);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile uint16_t x302 = 2585U;
	volatile int64_t x303 = -1LL;
	int32_t t75 = -4;

	t75 = (((x301&x302)==x303)^x304);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -182168;
	int8_t x306 = INT8_MIN;
	static int8_t x308 = -1;
	volatile int32_t t76 = -665431;

	t76 = (((x305&x306)==x307)^x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 3U;
	uint16_t x310 = UINT16_MAX;
	uint64_t x312 = 61845770583098374LLU;
	static volatile uint64_t t77 = 3011964384LLU;

	t77 = (((x309&x310)==x311)^x312);

	if (t77 != 61845770583098374LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -13753;
	static volatile uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	volatile int8_t x316 = INT8_MIN;

	t78 = (((x313&x314)==x315)^x316);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x318 = -285;
	int16_t x319 = 435;
	int32_t t79 = -8120959;

	t79 = (((x317&x318)==x319)^x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -6;
	uint8_t x322 = 13U;
	uint32_t x323 = 859525U;
	volatile int32_t t80 = 25327066;

	t80 = (((x321&x322)==x323)^x324);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 48U;
	static int64_t x326 = -1LL;
	uint16_t x327 = 530U;
	static int64_t x328 = -139996238616882LL;

	t81 = (((x325&x326)==x327)^x328);

	if (t81 != -139996238616882LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int16_t x330 = -1;
	int8_t x331 = -1;
	static int32_t t82 = 4756;

	t82 = (((x329&x330)==x331)^x332);

	if (t82 != -5) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -2;
	int32_t x335 = -1;
	int32_t x336 = -97;
	int32_t t83 = 6;

	t83 = (((x333&x334)==x335)^x336);

	if (t83 != -97) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -428516629243LL;
	volatile uint8_t x338 = 27U;
	int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;

	t84 = (((x337&x338)==x339)^x340);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 1237;
	static int32_t x342 = INT32_MIN;
	volatile int16_t x344 = 13;
	int32_t t85 = 9486;

	t85 = (((x341&x342)==x343)^x344);

	if (t85 != 13) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile int32_t x347 = INT32_MIN;
	volatile int32_t t86 = -581;

	t86 = (((x345&x346)==x347)^x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x351 = INT32_MAX;
	int64_t x352 = -1LL;
	int64_t t87 = -312819774133909LL;

	t87 = (((x349&x350)==x351)^x352);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 1032951852;
	volatile int8_t x354 = INT8_MAX;
	static int8_t x355 = -4;
	volatile int64_t t88 = INT64_MIN;

	t88 = (((x353&x354)==x355)^x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x357 = INT8_MIN;
	volatile int8_t x358 = -1;
	int32_t x359 = INT32_MIN;
	static volatile uint64_t x360 = UINT64_MAX;
	static uint64_t t89 = UINT64_MAX;

	t89 = (((x357&x358)==x359)^x360);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	volatile int64_t x362 = -1LL;
	uint32_t x363 = UINT32_MAX;
	int32_t t90 = INT32_MIN;

	t90 = (((x361&x362)==x363)^x364);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 6U;
	int16_t x368 = -8022;
	static volatile int32_t t91 = -54173772;

	t91 = (((x365&x366)==x367)^x368);

	if (t91 != -8022) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x371 = 1727U;
	int32_t t92 = -533;

	t92 = (((x369&x370)==x371)^x372);

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x374 = UINT32_MAX;
	static int16_t x375 = INT16_MAX;
	volatile int64_t x376 = -2805LL;
	int64_t t93 = -1250291LL;

	t93 = (((x373&x374)==x375)^x376);

	if (t93 != -2805LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = 3;
	volatile int16_t x379 = 1;
	int16_t x380 = INT16_MIN;
	int32_t t94 = -62092;

	t94 = (((x377&x378)==x379)^x380);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MAX;
	volatile uint32_t x382 = 51U;
	int32_t x384 = -473302688;
	volatile int32_t t95 = 1;

	t95 = (((x381&x382)==x383)^x384);

	if (t95 != -473302687) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 153U;
	volatile int64_t x386 = -1LL;
	int8_t x387 = INT8_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t96 = 12134611;

	t96 = (((x385&x386)==x387)^x388);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	static int8_t x390 = -5;
	uint8_t x391 = 1U;
	int32_t x392 = -1;
	static int32_t t97 = 933642;

	t97 = (((x389&x390)==x391)^x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MIN;
	uint32_t x395 = UINT32_MAX;
	uint16_t x396 = 6450U;
	volatile int32_t t98 = -1;

	t98 = (((x393&x394)==x395)^x396);

	if (t98 != 6450) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x398 = 29U;
	uint64_t x400 = UINT64_MAX;
	uint64_t t99 = UINT64_MAX;

	t99 = (((x397&x398)==x399)^x400);

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

