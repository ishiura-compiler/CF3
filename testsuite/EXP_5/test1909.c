#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 87889426LLU;
static volatile int32_t t1 = 8540;
static int64_t t2 = 23250LL;
static int8_t x14 = 2;
int32_t t4 = 123;
uint32_t x26 = 26347U;
static volatile int64_t t7 = -2136246046641LL;
int64_t x41 = INT64_MIN;
static int8_t x42 = -1;
int64_t x47 = INT64_MIN;
static int64_t t11 = -40537485169600LL;
int16_t x51 = -2349;
static int32_t x54 = INT32_MIN;
uint8_t x57 = UINT8_MAX;
int16_t x58 = 9408;
volatile uint64_t x60 = 7709199LLU;
int64_t x63 = -1LL;
static int8_t x66 = -1;
static uint32_t x70 = 4U;
int64_t x71 = INT64_MAX;
volatile int16_t x89 = INT16_MIN;
int64_t x93 = -1LL;
uint16_t x94 = UINT16_MAX;
static uint64_t x98 = 15542LLU;
static uint16_t x100 = 2352U;
uint32_t x107 = 28U;
static int32_t x115 = INT32_MIN;
static int64_t x117 = INT64_MIN;
static int8_t x119 = 17;
int16_t x124 = INT16_MAX;
static int32_t x126 = 288642758;
int32_t x131 = INT32_MIN;
uint32_t x139 = 71899U;
int16_t x140 = INT16_MIN;
int32_t x143 = 205;
int32_t t35 = -52;
uint16_t x149 = UINT16_MAX;
int32_t x151 = INT32_MIN;
int16_t x156 = 7934;
int64_t x166 = INT64_MIN;
uint8_t x167 = 21U;
uint32_t x169 = UINT32_MAX;
int32_t x173 = -589755325;
volatile int32_t x174 = -52061;
uint32_t x180 = 165U;
int64_t x183 = -1LL;
volatile int64_t t44 = -2547850911581656501LL;
int8_t x195 = INT8_MIN;
int32_t x200 = 31305280;
static uint64_t x207 = 2707465416934911629LLU;
uint64_t t50 = 2845765861LLU;
int32_t x225 = -400519361;
int32_t x229 = INT32_MIN;
uint8_t x236 = 3U;
static uint64_t x237 = 14639LLU;
int32_t x241 = INT32_MAX;
int8_t x242 = -5;
static int64_t x246 = INT64_MAX;
int32_t x250 = 1557859;
int16_t x254 = 41;
static volatile int64_t x256 = INT64_MIN;
int64_t x258 = INT64_MIN;
int64_t t63 = -263795737435771LL;
volatile uint64_t x262 = 101357888523381LLU;
static uint16_t x278 = 296U;
int32_t x280 = -3951490;
int8_t x284 = -1;
int64_t t69 = 14240634810172042LL;
int64_t x285 = INT64_MIN;
static int64_t x290 = -324725800LL;
uint64_t t72 = 47808183560938LLU;
int64_t x301 = INT64_MAX;
static int64_t x302 = INT64_MAX;
int32_t x305 = INT32_MIN;
volatile int32_t x315 = -1;
int32_t x317 = -3746;
int64_t x319 = INT64_MIN;
uint64_t x324 = 1138408881LLU;
uint64_t x332 = 445649930049LLU;
volatile uint64_t t80 = 306367526833285688LLU;
static volatile int64_t x339 = 24512LL;
volatile uint16_t x341 = 371U;
static uint64_t x346 = UINT64_MAX;
int8_t x350 = INT8_MIN;
uint32_t x357 = 6647U;
static volatile uint16_t x363 = 187U;
volatile int16_t x369 = INT16_MIN;
int32_t x376 = INT32_MIN;
uint32_t t92 = UINT32_MAX;
static volatile uint32_t x385 = 46142U;
uint64_t x388 = 3LLU;
uint64_t x392 = 28LLU;
volatile int32_t x394 = INT32_MIN;
uint16_t x395 = UINT16_MAX;
uint64_t x397 = UINT64_MAX;
volatile uint16_t x400 = 3001U;
static volatile int64_t x404 = -1LL;


void f0(void) {
	volatile int32_t x1 = -509;
	uint8_t x2 = 2U;
	int64_t x3 = 2552599359LL;
	volatile uint64_t t0 = 55269LLU;

	t0 = (x1&((x2|x3)/x4));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 26U;
	int8_t x6 = -41;
	int8_t x7 = INT8_MAX;
	static int8_t x8 = -33;

	t1 = (x5&((x6|x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MAX;
	volatile int8_t x12 = INT8_MIN;

	t2 = (x9&((x10|x11)/x12));

	if (t2 != 72057594021150720LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1895;
	volatile int8_t x15 = INT8_MIN;
	static uint64_t x16 = 304964325LLU;
	volatile uint64_t t3 = 207653632963LLU;

	t3 = (x13&((x14|x15)/x16));

	if (t3 != 871LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 100;
	int32_t x18 = -1;
	int32_t x19 = INT32_MIN;
	volatile int8_t x20 = 14;

	t4 = (x17&((x18|x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int16_t x22 = INT16_MIN;
	int32_t x23 = -1;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -269;

	t5 = (x21&((x22|x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	volatile int64_t x27 = INT64_MIN;
	volatile int8_t x28 = INT8_MIN;
	volatile int64_t t6 = -26LL;

	t6 = (x25&((x26|x27)/x28));

	if (t6 != 72057594037927730LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 19;
	static int16_t x30 = INT16_MIN;
	static volatile int64_t x31 = 248317550LL;
	volatile int8_t x32 = -6;

	t7 = (x29&((x30|x31)/x32));

	if (t7 != 3LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 1618LLU;
	volatile int32_t x34 = INT32_MAX;
	static int16_t x35 = INT16_MAX;
	int32_t x36 = INT32_MIN;
	uint64_t t8 = 12544857197LLU;

	t8 = (x33&((x34|x35)/x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile uint32_t x38 = UINT32_MAX;
	volatile int16_t x39 = -1;
	int8_t x40 = INT8_MIN;
	uint32_t t9 = 3714101U;

	t9 = (x37&((x38|x39)/x40));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x43 = INT64_MIN;
	int64_t x44 = INT64_MIN;
	static volatile int64_t t10 = 26184LL;

	t10 = (x41&((x42|x43)/x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int8_t x46 = INT8_MIN;
	int16_t x48 = INT16_MIN;

	t11 = (x45&((x46|x47)/x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = 8259415079893LL;
	static int32_t x50 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	volatile int64_t t12 = 7LL;

	t12 = (x49&((x50|x51)/x52));

	if (t12 != 16LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = 516556004;

	t13 = (x53&((x54|x55)/x56));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x59 = -1;
	volatile uint64_t t14 = 1442783154643LLU;

	t14 = (x57&((x58|x59)/x60));

	if (t14 != 92LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 1251108LLU;
	volatile int8_t x62 = -4;
	volatile int8_t x64 = INT8_MIN;
	volatile uint64_t t15 = 5421LLU;

	t15 = (x61&((x62|x63)/x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 6757386LL;
	volatile uint64_t x67 = 6279LLU;
	static uint32_t x68 = 6150886U;
	volatile uint64_t t16 = 1006LLU;

	t16 = (x65&((x66|x67)/x68));

	if (t16 != 2104320LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1LL;
	int8_t x72 = INT8_MIN;
	volatile int64_t t17 = 19277607772406516LL;

	t17 = (x69&((x70|x71)/x72));

	if (t17 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 2U;
	int8_t x74 = INT8_MAX;
	uint8_t x75 = 3U;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -10;

	t18 = (x73&((x74|x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 7U;
	uint16_t x78 = UINT16_MAX;
	uint32_t x79 = 1184079100U;
	int16_t x80 = 246;
	static volatile uint32_t t19 = 62582U;

	t19 = (x77&((x78|x79)/x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 6U;
	uint16_t x82 = 5U;
	int8_t x83 = -3;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 33029;

	t20 = (x81&((x82|x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x90 = UINT8_MAX;
	static int64_t x91 = INT64_MIN;
	volatile uint32_t x92 = 1445U;
	int64_t t21 = -450867LL;

	t21 = (x89&((x90|x91)/x92));

	if (t21 != -6382956426919936LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x95 = INT16_MAX;
	int16_t x96 = INT16_MIN;
	volatile int64_t t22 = 128715LL;

	t22 = (x93&((x94|x95)/x96));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x97 = 5U;
	static int16_t x99 = -34;
	volatile uint64_t t23 = 356034LLU;

	t23 = (x97&((x98|x99)/x100));

	if (t23 != 5LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -60;
	uint8_t x102 = 1U;
	static int8_t x103 = INT8_MIN;
	uint64_t x104 = 4067631LLU;
	volatile uint64_t t24 = 3015026377906597230LLU;

	t24 = (x101&((x102|x103)/x104));

	if (t24 != 4535009216324LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = -1;
	int8_t x106 = 1;
	int8_t x108 = INT8_MAX;
	static uint32_t t25 = 943375172U;

	t25 = (x105&((x106|x107)/x108));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = INT32_MAX;
	int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MIN;
	volatile int32_t x112 = 80858;
	volatile int32_t t26 = -504;

	t26 = (x109&((x110|x111)/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = -1LL;
	static int8_t x114 = 1;
	int32_t x116 = INT32_MIN;
	static int64_t t27 = -5563634LL;

	t27 = (x113&((x114|x115)/x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x118 = 182U;
	int16_t x120 = INT16_MIN;
	volatile int64_t t28 = 11773237930920LL;

	t28 = (x117&((x118|x119)/x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = 394083157467LL;
	uint32_t x122 = 11U;
	uint16_t x123 = 1U;
	volatile int64_t t29 = -36891240LL;

	t29 = (x121&((x122|x123)/x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x127 = 4U;
	volatile uint32_t x128 = UINT32_MAX;
	volatile int64_t t30 = 1399468948452LL;

	t30 = (x125&((x126|x127)/x128));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = INT16_MAX;
	uint32_t x130 = UINT32_MAX;
	int16_t x132 = -1;
	uint32_t t31 = 132007189U;

	t31 = (x129&((x130|x131)/x132));

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = -22;
	int16_t x134 = -7;
	volatile uint64_t x135 = 193LLU;
	volatile int64_t x136 = INT64_MAX;
	volatile uint64_t t32 = 257929LLU;

	t32 = (x133&((x134|x135)/x136));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	volatile uint32_t t33 = 31335647U;

	t33 = (x137&((x138|x139)/x140));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	int16_t x142 = -1;
	volatile int8_t x144 = -62;
	int64_t t34 = -335003LL;

	t34 = (x141&((x142|x143)/x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = 13;
	int16_t x146 = INT16_MAX;
	int8_t x147 = -1;
	int32_t x148 = INT32_MIN;

	t35 = (x145&((x146|x147)/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x150 = 1632345411LL;
	int16_t x152 = INT16_MIN;
	volatile int64_t t36 = -3691585986LL;

	t36 = (x149&((x150|x151)/x152));

	if (t36 != 15720LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x153 = INT32_MIN;
	uint8_t x154 = UINT8_MAX;
	uint8_t x155 = UINT8_MAX;
	volatile int32_t t37 = 5147230;

	t37 = (x153&((x154|x155)/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	int64_t x158 = -13196LL;
	int32_t x159 = -1;
	int16_t x160 = -50;
	int64_t t38 = 2206858304186471477LL;

	t38 = (x157&((x158|x159)/x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = -1;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = 1080172016LLU;
	volatile uint64_t t39 = 114371201049LLU;

	t39 = (x161&((x162|x163)/x164));

	if (t39 != 104LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = -1;
	int32_t x168 = -1;
	static int64_t t40 = 1579007LL;

	t40 = (x165&((x166|x167)/x168));

	if (t40 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = INT64_MIN;
	static uint64_t x171 = 10768150LLU;
	int8_t x172 = -1;
	static volatile uint64_t t41 = 14891LLU;

	t41 = (x169&((x170|x171)/x172));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t42 = 920971606;

	t42 = (x173&((x174|x175)/x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MAX;
	static volatile int32_t x178 = INT32_MAX;
	static int64_t x179 = INT64_MIN;
	volatile int64_t t43 = 16LL;

	t43 = (x177&((x178|x179)/x180));

	if (t43 != 9167472812402004341LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x181 = UINT16_MAX;
	uint8_t x182 = 11U;
	uint32_t x184 = UINT32_MAX;

	t44 = (x181&((x182|x183)/x184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -1;
	static volatile int64_t x186 = 32567116229241973LL;
	int32_t x187 = INT32_MIN;
	int8_t x188 = 8;
	volatile int64_t t45 = 187739LL;

	t45 = (x185&((x186|x187)/x188));

	if (t45 != -196706929LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x189 = 1968LLU;
	volatile int64_t x190 = INT64_MIN;
	static int8_t x191 = -24;
	volatile int64_t x192 = -1LL;
	static uint64_t t46 = 1872LLU;

	t46 = (x189&((x190|x191)/x192));

	if (t46 != 16LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x194 = 6U;
	int64_t x196 = -1LL;
	volatile int64_t t47 = 1555393081016LL;

	t47 = (x193&((x194|x195)/x196));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -1;
	static int64_t x198 = INT64_MIN;
	volatile int32_t x199 = INT32_MIN;
	volatile int64_t t48 = 1072193378LL;

	t48 = (x197&((x198|x199)/x200));

	if (t48 != -68LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -1LL;
	static int64_t x202 = -1181742059835031LL;
	static int16_t x203 = INT16_MIN;
	static int64_t x204 = INT64_MAX;
	volatile int64_t t49 = 4762275LL;

	t49 = (x201&((x202|x203)/x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x205 = INT64_MIN;
	uint8_t x206 = 13U;
	int8_t x208 = INT8_MIN;

	t50 = (x205&((x206|x207)/x208));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = 44627;
	volatile int64_t x210 = -4361659103316450994LL;
	int32_t x211 = INT32_MIN;
	volatile uint16_t x212 = 18U;
	volatile int64_t t51 = 2318379LL;

	t51 = (x209&((x210|x211)/x212));

	if (t51 != 33856LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -1;
	static int16_t x214 = 167;
	volatile uint32_t x215 = UINT32_MAX;
	int8_t x216 = -1;
	uint32_t t52 = 19353186U;

	t52 = (x213&((x214|x215)/x216));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -1;
	uint32_t x218 = 30701U;
	int8_t x219 = INT8_MAX;
	static uint32_t x220 = 499366U;
	uint32_t t53 = 14U;

	t53 = (x217&((x218|x219)/x220));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = INT32_MIN;
	uint32_t x223 = 261894575U;
	uint16_t x224 = 8U;
	int64_t t54 = 27938597833LL;

	t54 = (x221&((x222|x223)/x224));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x226 = 25433LLU;
	int64_t x227 = INT64_MIN;
	volatile uint64_t x228 = 91621253694LLU;
	volatile uint64_t t55 = 55745321251869838LLU;

	t55 = (x225&((x226|x227)/x228));

	if (t55 != 1084LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x230 = UINT64_MAX;
	int64_t x231 = 59096052884621867LL;
	int16_t x232 = -48;
	uint64_t t56 = 4481907830446975353LLU;

	t56 = (x229&((x230|x231)/x232));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = 466;
	volatile int16_t x234 = 0;
	volatile int16_t x235 = INT16_MAX;
	volatile int32_t t57 = -967137083;

	t57 = (x233&((x234|x235)/x236));

	if (t57 != 130) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x238 = 15U;
	static volatile uint8_t x239 = UINT8_MAX;
	int64_t x240 = INT64_MIN;
	volatile uint64_t t58 = 98774929LLU;

	t58 = (x237&((x238|x239)/x240));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x243 = 22381LLU;
	int32_t x244 = -1;
	static volatile uint64_t t59 = 148702095749969134LLU;

	t59 = (x241&((x242|x243)/x244));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = -5;
	volatile int32_t x247 = -161694;
	uint16_t x248 = 61U;
	static int64_t t60 = -828606144LL;

	t60 = (x245&((x246|x247)/x248));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = 4U;
	static int64_t x251 = INT64_MIN;
	uint32_t x252 = UINT32_MAX;
	int64_t t61 = -1897563560133312562LL;

	t61 = (x249&((x250|x251)/x252));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = -1;
	int16_t x255 = 0;
	static volatile int64_t t62 = 235119131635078LL;

	t62 = (x253&((x254|x255)/x256));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = INT64_MIN;
	int16_t x259 = -1;
	int16_t x260 = INT16_MAX;

	t63 = (x257&((x258|x259)/x260));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	uint32_t x263 = 205592211U;
	volatile int32_t x264 = 112;
	static volatile uint64_t t64 = 184279109108LLU;

	t64 = (x261&((x262|x263)/x264));

	if (t64 != 904981741568LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = 13U;
	uint64_t x266 = 1094LLU;
	int8_t x267 = INT8_MAX;
	int16_t x268 = INT16_MIN;
	uint64_t t65 = 7603480177608504794LLU;

	t65 = (x265&((x266|x267)/x268));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x269 = INT64_MIN;
	volatile int32_t x270 = -1;
	uint32_t x271 = 67461U;
	uint32_t x272 = 35U;
	int64_t t66 = 2357169010240074543LL;

	t66 = (x269&((x270|x271)/x272));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x273 = -38;
	int64_t x274 = 1260973314820965856LL;
	int64_t x275 = INT64_MIN;
	int64_t x276 = -891904LL;
	volatile int64_t t67 = 947LL;

	t67 = (x273&((x274|x275)/x276));

	if (t67 != 8927416764618LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x279 = 3548941249LL;
	volatile int64_t t68 = -583910LL;

	t68 = (x277&((x278|x279)/x280));

	if (t68 != 126LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = 195LL;
	int8_t x282 = INT8_MAX;
	volatile int16_t x283 = INT16_MIN;

	t69 = (x281&((x282|x283)/x284));

	if (t69 != 129LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x286 = 0U;
	uint8_t x287 = 1U;
	int32_t x288 = -3264;
	static int64_t t70 = -1075914543904471LL;

	t70 = (x285&((x286|x287)/x288));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x289 = -1;
	volatile int32_t x291 = INT32_MIN;
	uint16_t x292 = 1U;
	volatile int64_t t71 = 347888LL;

	t71 = (x289&((x290|x291)/x292));

	if (t71 != -324725800LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x297 = 30912982LLU;
	int32_t x298 = INT32_MIN;
	volatile int32_t x299 = -1;
	int32_t x300 = 12493;

	t72 = (x297&((x298|x299)/x300));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MIN;
	static int64_t t73 = 29LL;

	t73 = (x301&((x302|x303)/x304));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x306 = INT32_MAX;
	int8_t x307 = -1;
	int16_t x308 = -1;
	volatile int32_t t74 = 240;

	t74 = (x305&((x306|x307)/x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MIN;
	int16_t x310 = -1;
	uint64_t x311 = UINT64_MAX;
	static uint32_t x312 = 29U;
	volatile uint64_t t75 = 78002416LLU;

	t75 = (x309&((x310|x311)/x312));

	if (t75 != 636094623009210368LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MAX;
	uint64_t x314 = 17509LLU;
	uint64_t x316 = UINT64_MAX;
	static uint64_t t76 = 184934LLU;

	t76 = (x313&((x314|x315)/x316));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x318 = 0U;
	static volatile uint32_t x320 = UINT32_MAX;
	volatile int64_t t77 = -13436LL;

	t77 = (x317&((x318|x319)/x320));

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x321 = 35U;
	volatile int32_t x322 = INT32_MIN;
	static volatile int64_t x323 = 91719099978360954LL;
	volatile uint64_t t78 = 7316738547854463LLU;

	t78 = (x321&((x322|x323)/x324));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x325 = 9;
	int32_t x326 = INT32_MAX;
	int64_t x327 = 1LL;
	int16_t x328 = INT16_MIN;
	volatile int64_t t79 = -3794795590863073643LL;

	t79 = (x325&((x326|x327)/x328));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = 5725;
	int32_t x330 = -12;
	int32_t x331 = INT32_MIN;

	t80 = (x329&((x330|x331)/x332));

	if (t80 != 4612LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -1;
	int16_t x334 = INT16_MIN;
	volatile int16_t x335 = INT16_MIN;
	volatile int16_t x336 = -11;
	int32_t t81 = 3337971;

	t81 = (x333&((x334|x335)/x336));

	if (t81 != 2978) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = -1LL;
	volatile int8_t x338 = INT8_MAX;
	uint64_t x340 = 112720889LLU;
	static volatile uint64_t t82 = 2011855134LLU;

	t82 = (x337&((x338|x339)/x340));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x342 = INT32_MIN;
	static uint64_t x343 = 288950LLU;
	static int64_t x344 = INT64_MIN;
	volatile uint64_t t83 = 10331697LLU;

	t83 = (x341&((x342|x343)/x344));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -260;
	int64_t x347 = 973624772245438LL;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t84 = 715LLU;

	t84 = (x345&((x346|x347)/x348));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x349 = INT32_MAX;
	int64_t x351 = -248778851LL;
	int8_t x352 = INT8_MIN;
	volatile int64_t t85 = -84521279192622525LL;

	t85 = (x349&((x350|x351)/x352));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MIN;
	int64_t t86 = -381201823050LL;

	t86 = (x353&((x354|x355)/x356));

	if (t86 != 4294967296LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x358 = INT32_MIN;
	int64_t x359 = -1LL;
	int8_t x360 = INT8_MAX;
	static int64_t t87 = -6883685506649552LL;

	t87 = (x357&((x358|x359)/x360));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x361 = -60;
	int32_t x362 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	int32_t t88 = -186549788;

	t88 = (x361&((x362|x363)/x364));

	if (t88 != -16909376) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x365 = UINT32_MAX;
	uint16_t x366 = 26U;
	int32_t x367 = -196;
	volatile uint8_t x368 = 1U;
	volatile uint32_t t89 = 2U;

	t89 = (x365&((x366|x367)/x368));

	if (t89 != 4294967102U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x370 = 144322U;
	uint64_t x371 = 255089754925394671LLU;
	uint16_t x372 = 16U;
	static uint64_t t90 = 53LLU;

	t90 = (x369&((x370|x371)/x372));

	if (t90 != 15943109682823168LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x373 = INT8_MIN;
	int64_t x374 = 1LL;
	int8_t x375 = 17;
	volatile int64_t t91 = 1LL;

	t91 = (x373&((x374|x375)/x376));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = UINT32_MAX;
	volatile int16_t x382 = 0;
	int32_t x383 = -1;
	uint8_t x384 = 1U;

	t92 = (x381&((x382|x383)/x384));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x386 = 0U;
	int64_t x387 = -1LL;
	volatile uint64_t t93 = 60416429LLU;

	t93 = (x385&((x386|x387)/x388));

	if (t93 != 5140LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = INT8_MIN;
	uint64_t x390 = 356016LLU;
	int32_t x391 = -1;
	uint64_t t94 = 1924LLU;

	t94 = (x389&((x390|x391)/x392));

	if (t94 != 658812288346769664LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = 3623;
	int16_t x396 = INT16_MIN;
	int32_t t95 = 3508190;

	t95 = (x393&((x394|x395)/x396));

	if (t95 != 3622) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x398 = UINT32_MAX;
	static volatile int16_t x399 = 3790;
	uint64_t t96 = 4662252854398389505LLU;

	t96 = (x397&((x398|x399)/x400));

	if (t96 != 1431178LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x401 = 7U;
	int32_t x402 = -1;
	volatile int8_t x403 = 8;
	volatile int64_t t97 = -219528942LL;

	t97 = (x401&((x402|x403)/x404));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	static int8_t x406 = INT8_MIN;
	volatile int32_t x407 = INT32_MAX;
	volatile int8_t x408 = INT8_MAX;
	volatile int64_t t98 = -16875947LL;

	t98 = (x405&((x406|x407)/x408));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x409 = 7323018491LLU;
	static int32_t x410 = INT32_MIN;
	static int16_t x411 = 4;
	int64_t x412 = -1LL;
	uint64_t t99 = 211LLU;

	t99 = (x409&((x410|x411)/x412));

	if (t99 != 880567544LLU) { NG(); } else { ; }
	
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

