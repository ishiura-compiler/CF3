#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
int16_t x2 = -1;
static int8_t x8 = INT8_MIN;
int64_t t1 = 69LL;
uint8_t x18 = UINT8_MAX;
int16_t x20 = -7819;
int64_t t3 = 2937881035665388089LL;
static volatile uint16_t x21 = 26U;
volatile int32_t x22 = 2716;
int32_t t5 = 631;
static uint16_t x29 = 1485U;
uint64_t x31 = 5LLU;
volatile uint64_t t6 = 3008LLU;
uint32_t x33 = 419U;
static volatile uint16_t x40 = 5276U;
uint32_t x45 = UINT32_MAX;
static int32_t x53 = 3;
static int16_t x54 = -21;
static int16_t x65 = INT16_MAX;
volatile int16_t x79 = INT16_MAX;
uint64_t x82 = 617LLU;
int64_t x90 = INT64_MAX;
uint8_t x93 = 13U;
int32_t x94 = -297;
int32_t t21 = -270369;
int32_t x101 = -1;
uint8_t x105 = 6U;
int32_t x106 = INT32_MIN;
int8_t x107 = INT8_MAX;
static int16_t x113 = -300;
volatile uint8_t x116 = UINT8_MAX;
volatile uint32_t t26 = 13186220U;
static volatile uint64_t x118 = UINT64_MAX;
int8_t x119 = INT8_MAX;
int16_t x134 = INT16_MAX;
static volatile uint16_t x140 = 0U;
volatile uint8_t x142 = 51U;
uint16_t x159 = UINT16_MAX;
int16_t x166 = 0;
int64_t x167 = 2111438LL;
int8_t x171 = INT8_MIN;
uint16_t x173 = 17U;
uint32_t x181 = 0U;
int16_t x184 = -1;
static int16_t x185 = -12;
static int64_t t43 = 116428LL;
static volatile int64_t x200 = 156757031961652849LL;
int64_t t46 = 56675145268LL;
static uint64_t x205 = 5975189LLU;
volatile uint8_t x209 = UINT8_MAX;
static int16_t x210 = -1;
volatile int16_t x214 = 3315;
int64_t x220 = -3500793745403LL;
int64_t t52 = 3100533LL;
int64_t x238 = INT64_MIN;
int16_t x239 = -3514;
static int8_t x245 = INT8_MIN;
static int8_t x262 = INT8_MIN;
volatile int32_t x272 = INT32_MIN;
static uint8_t x273 = UINT8_MAX;
uint8_t x276 = UINT8_MAX;
volatile uint64_t t63 = 18295643LLU;
int16_t x284 = INT16_MIN;
uint8_t x293 = UINT8_MAX;
uint32_t t69 = 1U;
uint64_t x301 = UINT64_MAX;
int16_t x306 = INT16_MIN;
int32_t t71 = 184;
uint8_t x309 = 1U;
static uint32_t x316 = 19019U;
uint64_t t73 = 24413LLU;
int32_t x331 = INT32_MAX;
static int32_t t77 = INT32_MAX;
uint8_t x335 = UINT8_MAX;
uint64_t x336 = 1477711428189422536LLU;
static volatile int32_t x341 = -1;
uint32_t x344 = UINT32_MAX;
uint16_t x346 = 1U;
int8_t x352 = -1;
int32_t t82 = -326702222;
static int16_t x354 = -22;
int8_t x356 = -1;
uint32_t x362 = 30160958U;
int64_t x363 = INT64_MIN;
int64_t t84 = 122929LL;
uint64_t x373 = 22292250886877252LLU;
volatile int8_t x375 = INT8_MAX;
static volatile uint32_t t89 = 9247649U;
uint32_t x386 = 185472U;
volatile int16_t x388 = 2;
static int16_t x390 = 1828;
int8_t x396 = INT8_MAX;
int16_t x404 = INT16_MAX;
int32_t x417 = -466;
volatile int64_t t97 = 45770414LL;
uint16_t x421 = 53U;
int64_t x429 = -1LL;


void f0(void) {
	volatile int16_t x3 = -1;
	int8_t x4 = -1;
	volatile int32_t t0 = -3863016;

	t0 = (((x1&x2)^x3)-x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 18U;
	uint8_t x6 = UINT8_MAX;
	volatile int64_t x7 = 1471677121765339073LL;

	t1 = (((x5&x6)^x7)-x8);

	if (t1 != 1471677121765339219LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 1LL;
	uint32_t x14 = 236U;
	volatile int16_t x15 = INT16_MIN;
	uint32_t x16 = 2642259U;
	volatile int64_t t2 = -5785122LL;

	t2 = (((x13&x14)^x15)-x16);

	if (t2 != -2675027LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = 5;
	int64_t x19 = -11060355515195LL;

	t3 = (((x17&x18)^x19)-x20);

	if (t3 != -11060355507381LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x23 = -1;
	static int32_t x24 = -1;
	int32_t t4 = -810;

	t4 = (((x21&x22)^x23)-x24);

	if (t4 != -24) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x26 = 4U;
	int16_t x27 = -1;
	static volatile int16_t x28 = INT16_MIN;

	t5 = (((x25&x26)^x27)-x28);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = -43;
	uint16_t x32 = 10625U;

	t6 = (((x29&x30)^x31)-x32);

	if (t6 != 18446744073709542463LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MAX;
	static volatile int64_t x35 = INT64_MAX;
	uint16_t x36 = 3U;
	static int64_t t7 = -12450LL;

	t7 = (((x33&x34)^x35)-x36);

	if (t7 != 9223372036854775385LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	static int8_t x39 = INT8_MIN;
	static volatile int64_t t8 = -176010213LL;

	t8 = (((x37&x38)^x39)-x40);

	if (t8 != 9223372036854770404LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 121535386U;
	int16_t x42 = -12796;
	int64_t x43 = INT64_MAX;
	static volatile uint16_t x44 = 101U;
	int64_t t9 = 138LL;

	t9 = (((x41&x42)^x43)-x44);

	if (t9 != 9223372036733253018LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = 1;
	int32_t x47 = -1;
	static int16_t x48 = INT16_MIN;
	uint32_t t10 = 61U;

	t10 = (((x45&x46)^x47)-x48);

	if (t10 != 32766U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 2458237283668957LLU;
	int8_t x50 = -1;
	static int32_t x51 = INT32_MIN;
	uint16_t x52 = 483U;
	static volatile uint64_t t11 = 427596667569605LLU;

	t11 = (((x49&x50)^x51)-x52);

	if (t11 != 18444285838307168762LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x55 = UINT16_MAX;
	static int16_t x56 = INT16_MIN;
	int32_t t12 = -11057;

	t12 = (((x53&x54)^x55)-x56);

	if (t12 != 98300) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 76441946079410LLU;
	int16_t x58 = INT16_MAX;
	static volatile uint32_t x59 = 18678466U;
	static uint64_t x60 = 401983522LLU;
	volatile uint64_t t13 = 36376561528625LLU;

	t13 = (((x57&x58)^x59)-x60);

	if (t13 != 18446744073326262862LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 72U;
	int64_t x62 = -1LL;
	volatile int8_t x63 = 10;
	uint16_t x64 = UINT16_MAX;
	volatile int64_t t14 = 86LL;

	t14 = (((x61&x62)^x63)-x64);

	if (t14 != -65469LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x66 = -135LL;
	volatile int8_t x67 = 0;
	int16_t x68 = -4;
	volatile int64_t t15 = 282012018LL;

	t15 = (((x65&x66)^x67)-x68);

	if (t15 != 32637LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	volatile int8_t x70 = INT8_MAX;
	volatile int64_t x71 = -1LL;
	static uint16_t x72 = 133U;
	volatile int64_t t16 = 1303133350LL;

	t16 = (((x69&x70)^x71)-x72);

	if (t16 != -261LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = 16741LL;
	uint32_t x80 = UINT32_MAX;
	volatile int64_t t17 = -13721751LL;

	t17 = (((x77&x78)^x79)-x80);

	if (t17 != -4294934528LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x81 = UINT8_MAX;
	static int32_t x83 = 5748149;
	int16_t x84 = 4;
	uint64_t t18 = 755282870LLU;

	t18 = (((x81&x82)^x83)-x84);

	if (t18 != 5748184LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -91257370032851LL;
	int64_t x86 = 1833204476983LL;
	volatile uint8_t x87 = 3U;
	volatile int8_t x88 = INT8_MAX;
	int64_t t19 = 240492260705555LL;

	t19 = (((x85&x86)^x87)-x88);

	if (t19 != 1100862210983LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -5;
	uint8_t x91 = UINT8_MAX;
	static int16_t x92 = 1;
	static volatile int64_t t20 = 1097303532097877270LL;

	t20 = (((x89&x90)^x91)-x92);

	if (t20 != 9223372036854775555LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x95 = 1012511035;
	int32_t x96 = 31323736;

	t21 = (((x93&x94)^x95)-x96);

	if (t21 != 981187302) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = 19U;
	uint32_t x98 = 2476569U;
	int16_t x99 = -1;
	static int32_t x100 = -1;
	static uint32_t t22 = 3098U;

	t22 = (((x97&x98)^x99)-x100);

	if (t22 != 4294967279U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x102 = INT16_MAX;
	volatile int8_t x103 = INT8_MIN;
	uint16_t x104 = 7218U;
	int32_t t23 = -1742632;

	t23 = (((x101&x102)^x103)-x104);

	if (t23 != -39859) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x108 = -1LL;
	int64_t t24 = 159053248315916LL;

	t24 = (((x105&x106)^x107)-x108);

	if (t24 != 128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = 427107686247LL;
	static int64_t x110 = INT64_MIN;
	volatile int32_t x111 = 5549;
	volatile int8_t x112 = 51;
	static int64_t t25 = 469766548230999973LL;

	t25 = (((x109&x110)^x111)-x112);

	if (t25 != 5498LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x114 = UINT32_MAX;
	int8_t x115 = INT8_MIN;

	t26 = (((x113&x114)^x115)-x116);

	if (t26 != 85U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	volatile int16_t x120 = INT16_MIN;
	volatile uint64_t t27 = 211656LLU;

	t27 = (((x117&x118)^x119)-x120);

	if (t27 != 32767LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = 1;
	int8_t x122 = 14;
	int8_t x123 = INT8_MAX;
	static int32_t x124 = -207389574;
	int32_t t28 = -3767;

	t28 = (((x121&x122)^x123)-x124);

	if (t28 != 207389701) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MAX;
	static uint16_t x126 = 9U;
	volatile uint32_t x127 = 3588002U;
	static uint32_t x128 = UINT32_MAX;
	uint32_t t29 = 829516344U;

	t29 = (((x125&x126)^x127)-x128);

	if (t29 != 3588012U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	uint32_t x130 = UINT32_MAX;
	static volatile int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	volatile uint32_t t30 = 23861733U;

	t30 = (((x129&x130)^x131)-x132);

	if (t30 != 32640U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MAX;
	volatile int16_t x135 = -1;
	static volatile int8_t x136 = INT8_MIN;
	int64_t t31 = -260816309902151LL;

	t31 = (((x133&x134)^x135)-x136);

	if (t31 != -32640LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = UINT64_MAX;
	static uint32_t x138 = 818U;
	int8_t x139 = INT8_MIN;
	volatile uint64_t t32 = 1672031164831LLU;

	t32 = (((x137&x138)^x139)-x140);

	if (t32 != 18446744073709550770LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = UINT32_MAX;
	uint32_t x143 = 457709U;
	volatile uint64_t x144 = 6434986287606001179LLU;
	volatile uint64_t t33 = 13588393589197LLU;

	t33 = (((x141&x142)^x143)-x144);

	if (t33 != 12011757786104008131LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x149 = 1063U;
	int16_t x150 = -1;
	static int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MAX;
	volatile int32_t t34 = -185787;

	t34 = (((x149&x150)^x151)-x152);

	if (t34 != -31832) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x153 = 1496721U;
	volatile int8_t x154 = INT8_MAX;
	uint64_t x155 = 0LLU;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t35 = 4LLU;

	t35 = (((x153&x154)^x155)-x156);

	if (t35 != 145LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x157 = INT8_MAX;
	int32_t x158 = INT32_MIN;
	volatile uint32_t x160 = 25338U;
	static volatile uint32_t t36 = 136040617U;

	t36 = (((x157&x158)^x159)-x160);

	if (t36 != 40197U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x161 = -13;
	uint32_t x162 = 30956427U;
	uint8_t x163 = UINT8_MAX;
	static volatile int16_t x164 = -1;
	static volatile uint32_t t37 = 324893056U;

	t37 = (((x161&x162)^x163)-x164);

	if (t37 != 30956413U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = -463;
	uint64_t x168 = 842743LLU;
	volatile uint64_t t38 = 19684603LLU;

	t38 = (((x165&x166)^x167)-x168);

	if (t38 != 1268695LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = 116U;
	int8_t x170 = 13;
	static int64_t x172 = -458335564085629225LL;
	int64_t t39 = -55732396LL;

	t39 = (((x169&x170)^x171)-x172);

	if (t39 != 458335564085629101LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = INT16_MIN;
	static int16_t x175 = -1;
	volatile int64_t x176 = INT64_MIN;
	int64_t t40 = INT64_MAX;

	t40 = (((x173&x174)^x175)-x176);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = 3535438;
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = 10U;
	int32_t t41 = 1205;

	t41 = (((x177&x178)^x179)-x180);

	if (t41 != -3538954) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x182 = 11;
	static int8_t x183 = 5;
	uint32_t t42 = 685U;

	t42 = (((x181&x182)^x183)-x184);

	if (t42 != 6U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x186 = 117153U;
	int64_t x187 = -1LL;
	static uint32_t x188 = UINT32_MAX;

	t43 = (((x185&x186)^x187)-x188);

	if (t43 != -4295084448LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MAX;
	volatile uint8_t x190 = UINT8_MAX;
	uint32_t x191 = 12706U;
	int32_t x192 = 22114157;
	volatile uint32_t t44 = 3787U;

	t44 = (((x189&x190)^x191)-x192);

	if (t44 != 4272865904U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MAX;
	static int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MIN;
	volatile int32_t t45 = -65;

	t45 = (((x193&x194)^x195)-x196);

	if (t45 != 32640) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = 12678;
	int32_t x199 = 2;

	t46 = (((x197&x198)^x199)-x200);

	if (t46 != -156757031961652847LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = UINT8_MAX;
	static int32_t x202 = INT32_MIN;
	static volatile int32_t x203 = -1;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t47 = 32;

	t47 = (((x201&x202)^x203)-x204);

	if (t47 != -65536) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x206 = 3378U;
	static uint32_t x207 = 31U;
	uint8_t x208 = 0U;
	volatile uint64_t t48 = 5297946773276994705LLU;

	t48 = (((x205&x206)^x207)-x208);

	if (t48 != 3087LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x211 = INT64_MIN;
	uint8_t x212 = 13U;
	volatile int64_t t49 = -407122477006266LL;

	t49 = (((x209&x210)^x211)-x212);

	if (t49 != -9223372036854775566LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -1;
	static int64_t x215 = INT64_MIN;
	static int32_t x216 = -983;
	static volatile int64_t t50 = 639702550LL;

	t50 = (((x213&x214)^x215)-x216);

	if (t50 != -9223372036854771510LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = 3U;
	int16_t x218 = -446;
	int32_t x219 = 500;
	int64_t t51 = 212186486925069LL;

	t51 = (((x217&x218)^x219)-x220);

	if (t51 != 3500793745905LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = -1;
	int32_t x222 = INT32_MIN;
	int64_t x223 = -97394622LL;
	static volatile uint16_t x224 = 3744U;

	t52 = (((x221&x222)^x223)-x224);

	if (t52 != 2050085282LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x225 = -680583556118LL;
	static uint8_t x226 = UINT8_MAX;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	static volatile int64_t t53 = 103106541LL;

	t53 = (((x225&x226)^x227)-x228);

	if (t53 != -2147450646LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = 7;
	uint8_t x231 = 8U;
	int64_t x232 = -105LL;
	int64_t t54 = 2142818003016LL;

	t54 = (((x229&x230)^x231)-x232);

	if (t54 != 113LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = 0U;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t55 = 27086087214604LL;

	t55 = (((x237&x238)^x239)-x240);

	if (t55 != 9223372036854772294LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = 1;
	static uint64_t x242 = 586205658LLU;
	static uint64_t x243 = UINT64_MAX;
	volatile uint64_t x244 = 290032390956325LLU;
	static uint64_t t56 = 0LLU;

	t56 = (((x241&x242)^x243)-x244);

	if (t56 != 18446454041318595290LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x246 = 535833079;
	uint16_t x247 = UINT16_MAX;
	static uint16_t x248 = 1U;
	volatile int32_t t57 = -186142;

	t57 = (((x245&x246)^x247)-x248);

	if (t57 != 535877246) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x253 = INT16_MIN;
	static volatile int64_t x254 = 0LL;
	uint64_t x255 = 493535854LLU;
	static int8_t x256 = INT8_MIN;
	static volatile uint64_t t58 = 633LLU;

	t58 = (((x253&x254)^x255)-x256);

	if (t58 != 493535982LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x257 = INT8_MIN;
	uint8_t x258 = 5U;
	static int8_t x259 = -29;
	int8_t x260 = INT8_MIN;
	volatile int32_t t59 = 1007241;

	t59 = (((x257&x258)^x259)-x260);

	if (t59 != 99) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x261 = 41LL;
	static int8_t x263 = INT8_MIN;
	volatile int64_t x264 = INT64_MIN;
	volatile int64_t t60 = -363LL;

	t60 = (((x261&x262)^x263)-x264);

	if (t60 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MAX;
	uint8_t x266 = 0U;
	int8_t x267 = 0;
	int64_t x268 = -2302760741498LL;
	int64_t t61 = -44080LL;

	t61 = (((x265&x266)^x267)-x268);

	if (t61 != 2302760741498LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x269 = -1LL;
	int32_t x270 = INT32_MAX;
	int32_t x271 = -1;
	static volatile int64_t t62 = -15953718650052628LL;

	t62 = (((x269&x270)^x271)-x272);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x274 = UINT64_MAX;
	int8_t x275 = INT8_MIN;

	t63 = (((x273&x274)^x275)-x276);

	if (t63 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -1;
	static uint8_t x278 = UINT8_MAX;
	static volatile int8_t x279 = INT8_MIN;
	volatile int16_t x280 = -36;
	int32_t t64 = 1629497;

	t64 = (((x277&x278)^x279)-x280);

	if (t64 != -93) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	int16_t x283 = -1;
	int32_t t65 = -23607507;

	t65 = (((x281&x282)^x283)-x284);

	if (t65 != 32895) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = INT64_MAX;
	uint32_t x286 = 851U;
	int8_t x287 = -1;
	uint32_t x288 = 727U;
	volatile int64_t t66 = -95874LL;

	t66 = (((x285&x286)^x287)-x288);

	if (t66 != -1579LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x289 = -3;
	int64_t x290 = 293562143763LL;
	int8_t x291 = INT8_MIN;
	uint32_t x292 = UINT32_MAX;
	int64_t t67 = 59313920164929529LL;

	t67 = (((x289&x290)^x291)-x292);

	if (t67 != -297857111150LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x294 = INT16_MAX;
	static uint16_t x295 = UINT16_MAX;
	volatile uint8_t x296 = UINT8_MAX;
	volatile int32_t t68 = -22;

	t68 = (((x293&x294)^x295)-x296);

	if (t68 != 65025) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x297 = 23969U;
	uint32_t x298 = 1312695U;
	int8_t x299 = -1;
	volatile uint16_t x300 = 1U;

	t69 = (((x297&x298)^x299)-x300);

	if (t69 != 4294965853U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = INT16_MIN;
	static int32_t x304 = INT32_MIN;
	uint64_t t70 = 3326125LLU;

	t70 = (((x301&x302)^x303)-x304);

	if (t70 != 2147516415LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = INT16_MAX;
	volatile int16_t x307 = -1;
	int32_t x308 = -1;

	t71 = (((x305&x306)^x307)-x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x310 = -323;
	volatile int64_t x311 = -3818908598371091LL;
	int16_t x312 = INT16_MIN;
	static int64_t t72 = -147357244149LL;

	t72 = (((x309&x310)^x311)-x312);

	if (t72 != -3818908598338324LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x313 = 2108U;
	uint64_t x314 = 63214358669LLU;
	int32_t x315 = 2824;

	t73 = (((x313&x314)^x315)-x316);

	if (t73 != 18446744073709535417LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x317 = 7938784365224504LLU;
	uint32_t x318 = 270U;
	static uint64_t x319 = 7LLU;
	volatile int8_t x320 = INT8_MIN;
	volatile uint64_t t74 = 3156564630762555LLU;

	t74 = (((x317&x318)^x319)-x320);

	if (t74 != 143LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x321 = 75481LLU;
	volatile int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	int8_t x324 = -4;
	volatile uint64_t t75 = 5754567LLU;

	t75 = (((x321&x322)^x323)-x324);

	if (t75 != 9223372036854851204LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = INT32_MIN;
	uint32_t x326 = UINT32_MAX;
	int64_t x327 = -4067482590LL;
	static int16_t x328 = 2;
	volatile int64_t t76 = 225556482129LL;

	t76 = (((x325&x326)^x327)-x328);

	if (t76 != -1919998944LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = INT32_MIN;
	int8_t x330 = INT8_MIN;
	int32_t x332 = INT32_MIN;

	t77 = (((x329&x330)^x331)-x332);

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = INT16_MAX;
	uint64_t x334 = 21596LLU;
	uint64_t t78 = 260706035522LLU;

	t78 = (((x333&x334)^x335)-x336);

	if (t78 != 16969032645520150747LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x337 = INT32_MAX;
	volatile int8_t x338 = INT8_MAX;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = -11;
	int32_t t79 = 3834997;

	t79 = (((x337&x338)^x339)-x340);

	if (t79 != 139) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x342 = -1;
	int16_t x343 = INT16_MIN;
	volatile uint32_t t80 = 130429U;

	t80 = (((x341&x342)^x343)-x344);

	if (t80 != 32768U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x345 = UINT32_MAX;
	int8_t x347 = -16;
	int64_t x348 = 43833LL;
	volatile int64_t t81 = 15180675LL;

	t81 = (((x345&x346)^x347)-x348);

	if (t81 != 4294923448LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = -1;
	static int16_t x350 = INT16_MIN;
	int8_t x351 = -1;

	t82 = (((x349&x350)^x351)-x352);

	if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = 8481733;
	uint32_t x355 = 116U;
	uint32_t t83 = 1723307U;

	t83 = (((x353&x354)^x355)-x356);

	if (t83 != 8481717U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = INT16_MIN;
	volatile int32_t x364 = INT32_MIN;

	t84 = (((x361&x362)^x363)-x364);

	if (t84 != -9223372034677145600LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x365 = 78U;
	static uint8_t x366 = 96U;
	int32_t x367 = -11982;
	static int8_t x368 = INT8_MIN;
	int32_t t85 = -92465;

	t85 = (((x365&x366)^x367)-x368);

	if (t85 != -11790) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = INT64_MIN;
	int64_t x372 = -1LL;
	volatile int64_t t86 = 224LL;

	t86 = (((x369&x370)^x371)-x372);

	if (t86 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x374 = UINT16_MAX;
	uint32_t x376 = 46483U;
	uint64_t t87 = 16651762841425LLU;

	t87 = (((x373&x374)^x375)-x376);

	if (t87 != 18446744073709517480LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MIN;
	uint32_t x379 = UINT32_MAX;
	static int16_t x380 = INT16_MIN;
	int64_t t88 = -75798LL;

	t88 = (((x377&x378)^x379)-x380);

	if (t88 != -9223372032559775745LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MAX;
	int32_t x383 = INT32_MIN;
	int32_t x384 = -5334;

	t89 = (((x381&x382)^x383)-x384);

	if (t89 != 2147521749U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x385 = INT16_MIN;
	int8_t x387 = -1;
	uint32_t t90 = 21678U;

	t90 = (((x385&x386)^x387)-x388);

	if (t90 != 4294803453U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x389 = UINT32_MAX;
	static int32_t x391 = INT32_MAX;
	static uint32_t x392 = 307958U;
	static uint32_t t91 = 993U;

	t91 = (((x389&x390)^x391)-x392);

	if (t91 != 2147173861U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MAX;
	uint8_t x395 = UINT8_MAX;
	int64_t t92 = -265314851245LL;

	t92 = (((x393&x394)^x395)-x396);

	if (t92 != 128LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x397 = -1;
	int64_t x398 = 590310149LL;
	static uint8_t x399 = UINT8_MAX;
	volatile uint64_t x400 = UINT64_MAX;
	volatile uint64_t t93 = 16961979134691LLU;

	t93 = (((x397&x398)^x399)-x400);

	if (t93 != 590310395LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x401 = -1;
	volatile uint32_t x402 = 60001U;
	int16_t x403 = INT16_MAX;
	static uint32_t t94 = 1969892879U;

	t94 = (((x401&x402)^x403)-x404);

	if (t94 != 5535U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x409 = UINT64_MAX;
	volatile int32_t x410 = INT32_MIN;
	static int32_t x411 = -1;
	static int32_t x412 = -744263072;
	uint64_t t95 = 29134092541098LLU;

	t95 = (((x409&x410)^x411)-x412);

	if (t95 != 2891746719LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x413 = 147298LLU;
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MIN;
	volatile uint64_t t96 = 44LLU;

	t96 = (((x413&x414)^x415)-x416);

	if (t96 != 98LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x418 = -445843611987291681LL;
	int64_t x419 = INT64_MAX;
	int8_t x420 = -1;

	t97 = (((x417&x418)^x419)-x420);

	if (t97 != -8777528424867483662LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x422 = -1;
	static int32_t x423 = INT32_MIN;
	uint32_t x424 = 834409U;
	static volatile uint32_t t98 = 313127U;

	t98 = (((x421&x422)^x423)-x424);

	if (t98 != 2146649292U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x430 = INT32_MIN;
	int8_t x431 = -44;
	int64_t x432 = -1LL;
	int64_t t99 = -1855105051526586066LL;

	t99 = (((x429&x430)^x431)-x432);

	if (t99 != 2147483605LL) { NG(); } else { ; }
	
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

