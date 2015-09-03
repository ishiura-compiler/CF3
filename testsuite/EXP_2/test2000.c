#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = 796U;
volatile uint32_t x4 = 18015618U;
int32_t x8 = INT32_MIN;
int64_t x9 = -1775746936746LL;
int8_t x14 = INT8_MAX;
int32_t x17 = -420603573;
int32_t x19 = -1;
volatile int32_t t4 = -10;
static uint64_t t6 = 520761740658586LLU;
volatile int16_t x42 = -1;
uint16_t x44 = UINT16_MAX;
int8_t x47 = -1;
int32_t x49 = INT32_MIN;
int32_t x50 = INT32_MAX;
volatile int16_t x55 = -1;
static uint64_t x56 = UINT64_MAX;
int16_t x61 = -1;
int16_t x62 = INT16_MAX;
volatile int64_t x63 = -11184528LL;
uint8_t x65 = UINT8_MAX;
uint32_t x68 = UINT32_MAX;
volatile int64_t t16 = -3290271885224LL;
int32_t x71 = INT32_MAX;
static int64_t t17 = 14502251548LL;
static int16_t x74 = -3;
uint64_t t18 = 216282LLU;
static volatile uint8_t x78 = 19U;
int8_t x82 = INT8_MIN;
int8_t x84 = INT8_MIN;
uint64_t x85 = 16155319501900588LLU;
uint64_t t21 = 750484LLU;
volatile uint32_t x90 = 800U;
static volatile int32_t x94 = INT32_MIN;
int8_t x95 = -1;
int64_t t23 = 63932003280441368LL;
volatile int8_t x107 = -1;
volatile uint32_t x115 = 47629U;
int64_t t28 = -942095382082396LL;
volatile int32_t x118 = -43457;
uint32_t t29 = 1510067986U;
static int16_t x121 = -1;
volatile int16_t x123 = INT16_MIN;
volatile int16_t x126 = -1;
volatile uint32_t t31 = 340218954U;
int16_t x137 = -12;
int32_t x138 = -1;
static volatile int64_t x140 = -1LL;
volatile int64_t t34 = 142582328822911LL;
uint64_t x142 = 225783464031LLU;
int64_t x144 = -438429921729613LL;
uint8_t x148 = 104U;
int32_t x151 = -1;
int8_t x156 = -1;
uint16_t x158 = 0U;
int64_t x159 = INT64_MIN;
int32_t x160 = INT32_MIN;
static int64_t t39 = INT64_MIN;
int32_t x170 = -230338159;
int64_t x172 = -1LL;
int8_t x175 = INT8_MIN;
volatile uint32_t t44 = 20U;
int64_t t45 = INT64_MAX;
int32_t x200 = INT32_MIN;
uint32_t x201 = UINT32_MAX;
static uint8_t x208 = UINT8_MAX;
int16_t x215 = INT16_MIN;
static int32_t t53 = 265804282;
static uint64_t x217 = 4065904162380LLU;
int32_t x221 = INT32_MAX;
int64_t x224 = -378822664LL;
int32_t t56 = INT32_MIN;
int32_t x239 = INT32_MIN;
int32_t x243 = INT32_MIN;
int16_t x246 = -89;
int64_t t62 = -1628625LL;
volatile int16_t x253 = INT16_MAX;
int16_t x256 = -1;
int16_t x257 = -3;
volatile int64_t t64 = 105LL;
static int8_t x263 = -1;
static int64_t t65 = -2237292956159661LL;
uint32_t x271 = 48063U;
int32_t x272 = INT32_MIN;
volatile int16_t x273 = -6084;
volatile int32_t t68 = 128882;
static int8_t x277 = INT8_MIN;
static int32_t x280 = INT32_MIN;
volatile int16_t x282 = INT16_MAX;
int8_t x284 = INT8_MAX;
uint16_t x287 = 85U;
int64_t t71 = -1497839254LL;
int32_t t72 = -53;
int8_t x295 = INT8_MAX;
int8_t x296 = INT8_MAX;
static volatile int64_t t73 = 132932LL;
int32_t x297 = INT32_MIN;
uint64_t t74 = 1865080LLU;
int64_t x302 = -1LL;
static uint16_t x308 = 7933U;
volatile int64_t t76 = -4791LL;
int16_t x311 = -3521;
uint8_t x312 = 5U;
volatile int8_t x327 = 5;
volatile uint32_t t82 = UINT32_MAX;
int64_t x340 = -90946517473557LL;
int16_t x349 = -346;
volatile int32_t t87 = 15850224;
static uint64_t t88 = 306401478000058959LLU;
static volatile int64_t t91 = 95121LL;
uint8_t x371 = UINT8_MAX;
volatile int32_t x373 = 46;
uint16_t x374 = 5U;
uint8_t x379 = UINT8_MAX;
uint64_t t94 = 4390811314028377770LLU;
static int64_t x383 = INT64_MIN;
uint64_t t95 = 1362966220LLU;
volatile int8_t x386 = INT8_MAX;
int64_t x387 = INT64_MIN;
volatile int64_t t96 = -524846343860480LL;
volatile int64_t t97 = 816LL;
volatile uint64_t x394 = 422004LLU;
static int64_t x395 = INT64_MIN;
uint8_t x397 = 92U;
volatile int32_t x398 = 270;


void f0(void) {
	volatile int8_t x1 = -1;
	int8_t x2 = INT8_MIN;
	uint32_t t0 = 112624607U;

	t0 = ((x1&(x2|x3))&x4);

	if (t0 != 18015616U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 7U;
	uint16_t x6 = UINT16_MAX;
	static int16_t x7 = INT16_MIN;
	int32_t t1 = -1391002;

	t1 = ((x5&(x6|x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	volatile int64_t x11 = INT64_MIN;
	uint16_t x12 = 31U;
	int64_t t2 = 4033819683612LL;

	t2 = ((x9&(x10|x11))&x12);

	if (t2 != 22LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 16505U;
	int16_t x15 = -473;
	static int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -607227LL;

	t3 = ((x13&(x14|x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	static int16_t x20 = INT16_MIN;

	t4 = ((x17&(x18|x19))&x20);

	if (t4 != -420610048) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 43LLU;
	int64_t x22 = -34029209571775LL;
	static int64_t x23 = -1LL;
	int32_t x24 = -1;
	volatile uint64_t t5 = 29618020LLU;

	t5 = ((x21&(x22|x23))&x24);

	if (t5 != 43LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x26 = INT8_MIN;
	int64_t x27 = -3627148145LL;
	volatile int64_t x28 = INT64_MAX;

	t6 = ((x25&(x26|x27))&x28);

	if (t6 != 9223372036854775695LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MAX;
	volatile uint64_t x31 = UINT64_MAX;
	static int16_t x32 = INT16_MIN;
	uint64_t t7 = 24633326265LLU;

	t7 = ((x29&(x30|x31))&x32);

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int64_t x34 = 910972605195LL;
	int16_t x35 = -1;
	volatile uint64_t x36 = UINT64_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x33&(x34|x35))&x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 96U;
	volatile int32_t x38 = -243187;
	static uint64_t x39 = 160190LLU;
	int8_t x40 = INT8_MAX;
	uint64_t t9 = 267196528LLU;

	t9 = ((x37&(x38|x39))&x40);

	if (t9 != 32LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x41 = 613U;
	int16_t x43 = -1;
	volatile uint32_t t10 = 386605U;

	t10 = ((x41&(x42|x43))&x44);

	if (t10 != 613U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint8_t x46 = UINT8_MAX;
	volatile int64_t x48 = INT64_MIN;
	int64_t t11 = INT64_MIN;

	t11 = ((x45&(x46|x47))&x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = INT8_MIN;
	int64_t x52 = -1011518397LL;
	int64_t t12 = 14124141LL;

	t12 = ((x49&(x50|x51))&x52);

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 6;
	static int8_t x54 = INT8_MAX;
	volatile uint64_t t13 = 507248650LLU;

	t13 = ((x53&(x54|x55))&x56);

	if (t13 != 6LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -5370;
	uint64_t x58 = 3382395774088754906LLU;
	int64_t x59 = -1LL;
	static int64_t x60 = INT64_MAX;
	uint64_t t14 = 448093498658558186LLU;

	t14 = ((x57&(x58|x59))&x60);

	if (t14 != 9223372036854770438LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x64 = INT64_MAX;
	volatile int64_t t15 = -16146567LL;

	t15 = ((x61&(x62|x63))&x64);

	if (t15 != 9223372036843601919LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MAX;

	t16 = ((x65&(x66|x67))&x68);

	if (t16 != 255LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -16267728834308282LL;
	int16_t x70 = -1211;
	uint16_t x72 = 624U;

	t17 = ((x69&(x70|x71))&x72);

	if (t17 != 576LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 3308629LLU;
	int32_t x75 = -184023231;
	uint16_t x76 = 9945U;

	t18 = ((x73&(x74|x75))&x76);

	if (t18 != 9297LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -31185;
	int32_t x79 = INT32_MIN;
	int16_t x80 = 1;
	int32_t t19 = -1;

	t19 = ((x77&(x78|x79))&x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x81 = -1;
	int8_t x83 = -1;
	volatile int32_t t20 = -1345152;

	t20 = ((x81&(x82|x83))&x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x86 = 6384;
	int64_t x87 = INT64_MIN;
	volatile int16_t x88 = INT16_MIN;

	t21 = ((x85&(x86|x87))&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 369U;
	volatile uint32_t x91 = 533U;
	int16_t x92 = -1;
	uint32_t t22 = 2108U;

	t22 = ((x89&(x90|x91))&x92);

	if (t22 != 305U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1LL;
	static int8_t x96 = INT8_MAX;

	t23 = ((x93&(x94|x95))&x96);

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 190489LLU;
	volatile int16_t x98 = 18;
	int16_t x99 = -42;
	uint16_t x100 = 19U;
	volatile uint64_t t24 = 32805005865994621LLU;

	t24 = ((x97&(x98|x99))&x100);

	if (t24 != 16LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MAX;
	volatile uint64_t x103 = 247064665346LLU;
	uint64_t x104 = 122136154276794LLU;
	uint64_t t25 = 7204234LLU;

	t25 = ((x101&(x102|x103))&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int64_t x106 = INT64_MAX;
	uint32_t x108 = 14U;
	volatile int64_t t26 = 127993500300448LL;

	t26 = ((x105&(x106|x107))&x108);

	if (t26 != 14LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	volatile int64_t x110 = INT64_MIN;
	int32_t x111 = 3;
	static int32_t x112 = -855034;
	int64_t t27 = -186427757807083796LL;

	t27 = ((x109&(x110|x111))&x112);

	if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	int64_t x114 = 5180942LL;
	uint8_t x116 = UINT8_MAX;

	t28 = ((x113&(x114|x115))&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MAX;
	uint32_t x119 = UINT32_MAX;
	uint16_t x120 = UINT16_MAX;

	t29 = ((x117&(x118|x119))&x120);

	if (t29 != 65535U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = 481099388936151LL;
	int32_t x124 = 497807;
	int64_t t30 = 2979LL;

	t30 = ((x121&(x122|x123))&x124);

	if (t30 != 497799LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 14;
	uint8_t x127 = 1U;
	uint32_t x128 = 2147599U;

	t31 = ((x125&(x126|x127))&x128);

	if (t31 != 14U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 26638U;
	int32_t x130 = INT32_MAX;
	uint64_t x131 = 140LLU;
	uint64_t x132 = 7018517174791LLU;
	volatile uint64_t t32 = 68LLU;

	t32 = ((x129&(x130|x131))&x132);

	if (t32 != 2054LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -1;
	volatile int32_t t33 = 1038207;

	t33 = ((x133&(x134|x135))&x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x139 = 545U;

	t34 = ((x137&(x138|x139))&x140);

	if (t34 != 4294967284LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 470U;
	static int8_t x143 = -24;
	uint64_t t35 = 12LLU;

	t35 = ((x141&(x142|x143))&x144);

	if (t35 != 402LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x145 = UINT16_MAX;
	static int8_t x146 = 0;
	uint16_t x147 = 1U;
	int32_t t36 = -90420;

	t36 = ((x145&(x146|x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 202U;
	uint16_t x150 = 2406U;
	uint64_t x152 = 1673976LLU;
	uint64_t t37 = 3839733LLU;

	t37 = ((x149&(x150|x151))&x152);

	if (t37 != 200LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 1U;
	uint8_t x154 = 31U;
	int16_t x155 = INT16_MIN;
	uint32_t t38 = 3489242U;

	t38 = ((x153&(x154|x155))&x156);

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;

	t39 = ((x157&(x158|x159))&x160);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 472136187666720671LLU;
	volatile int32_t x162 = INT32_MIN;
	uint32_t x163 = UINT32_MAX;
	int16_t x164 = INT16_MAX;
	volatile uint64_t t40 = 1879316275842509LLU;

	t40 = ((x161&(x162|x163))&x164);

	if (t40 != 26527LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MAX;
	static volatile int8_t x166 = INT8_MIN;
	uint32_t x167 = UINT32_MAX;
	uint32_t x168 = 63596U;
	static uint32_t t41 = 4U;

	t41 = ((x165&(x166|x167))&x168);

	if (t41 != 108U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int16_t x171 = INT16_MIN;
	static uint64_t t42 = 527187LLU;

	t42 = ((x169&(x170|x171))&x172);

	if (t42 != 18446744073709539729LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = 24;
	uint32_t x174 = 35U;
	int32_t x176 = INT32_MAX;
	uint32_t t43 = 81U;

	t43 = ((x173&(x174|x175))&x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -124;
	volatile uint32_t x178 = 341U;
	volatile uint32_t x179 = 37U;
	uint8_t x180 = 27U;

	t44 = ((x177&(x178|x179))&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	volatile int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MAX;
	int64_t x184 = INT64_MAX;

	t45 = ((x181&(x182|x183))&x184);

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = UINT32_MAX;
	static int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MAX;
	volatile int32_t x188 = -2360;
	static volatile int64_t t46 = 108318705751LL;

	t46 = ((x185&(x186|x187))&x188);

	if (t46 != 72LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	volatile int32_t x190 = INT32_MAX;
	int16_t x191 = INT16_MIN;
	uint32_t x192 = 253960U;
	int64_t t47 = -2595LL;

	t47 = ((x189&(x190|x191))&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = -1;
	uint16_t x195 = 2U;
	uint64_t x196 = 27LLU;
	uint64_t t48 = 5352803272002LLU;

	t48 = ((x193&(x194|x195))&x196);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	volatile int64_t x198 = -1LL;
	static int8_t x199 = INT8_MAX;
	static int64_t t49 = INT64_MIN;

	t49 = ((x197&(x198|x199))&x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 1174U;
	int8_t x203 = INT8_MIN;
	static int64_t x204 = -27420LL;
	volatile int64_t t50 = 918591426479368LL;

	t50 = ((x201&(x202|x203))&x204);

	if (t50 != 4294939780LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -3988;
	int8_t x206 = INT8_MIN;
	static volatile int8_t x207 = -1;
	volatile int32_t t51 = -215464;

	t51 = ((x205&(x206|x207))&x208);

	if (t51 != 108) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = UINT16_MAX;
	uint64_t x210 = 246LLU;
	static volatile uint64_t x211 = UINT64_MAX;
	int16_t x212 = INT16_MIN;
	volatile uint64_t t52 = 20060654458LLU;

	t52 = ((x209&(x210|x211))&x212);

	if (t52 != 32768LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 22U;
	static int16_t x214 = INT16_MIN;
	int16_t x216 = 1755;

	t53 = ((x213&(x214|x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MIN;
	volatile uint64_t x219 = 2505978LLU;
	volatile int64_t x220 = INT64_MIN;
	volatile uint64_t t54 = 1750564143159730LLU;

	t54 = ((x217&(x218|x219))&x220);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MAX;
	uint16_t x223 = 1U;
	int64_t t55 = -4295278038157LL;

	t55 = ((x221&(x222|x223))&x224);

	if (t55 != 1768660984LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MAX;
	static int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;

	t56 = ((x225&(x226|x227))&x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -4853;
	int8_t x230 = -3;
	static volatile int16_t x231 = INT16_MIN;
	int8_t x232 = -1;
	int32_t t57 = -11499;

	t57 = ((x229&(x230|x231))&x232);

	if (t57 != -4855) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = -248;
	uint64_t x234 = 17LLU;
	volatile int8_t x235 = -62;
	int8_t x236 = 3;
	uint64_t t58 = 95363904737756417LLU;

	t58 = ((x233&(x234|x235))&x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 3U;
	int64_t x238 = 41LL;
	uint8_t x240 = UINT8_MAX;
	static int64_t t59 = 50356760091895LL;

	t59 = ((x237&(x238|x239))&x240);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x242 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 251003;

	t60 = ((x241&(x242|x243))&x244);

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	volatile uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MAX;
	uint64_t t61 = 6687841694LLU;

	t61 = ((x245&(x246|x247))&x248);

	if (t61 != 2147483647LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 1989722809U;
	static volatile uint8_t x250 = 62U;
	int64_t x251 = -1LL;
	int16_t x252 = INT16_MIN;

	t62 = ((x249&(x250|x251))&x252);

	if (t62 != 1989705728LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x254 = 2975U;
	int64_t x255 = INT64_MAX;
	static int64_t t63 = 25108510423LL;

	t63 = ((x253&(x254|x255))&x256);

	if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = 4367033007754LL;
	int32_t x259 = -1;
	int8_t x260 = -1;

	t64 = ((x257&(x258|x259))&x260);

	if (t64 != -3LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	uint16_t x262 = 4451U;
	int64_t x264 = 65959778126091LL;

	t65 = ((x261&(x262|x263))&x264);

	if (t65 != 11LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 1141635U;
	int16_t x266 = -1;
	int8_t x267 = -6;
	uint8_t x268 = UINT8_MAX;
	uint32_t t66 = 610483U;

	t66 = ((x265&(x266|x267))&x268);

	if (t66 != 131U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 20U;
	uint16_t x270 = 22827U;
	uint32_t t67 = 69005150U;

	t67 = ((x269&(x270|x271))&x272);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	volatile uint8_t x276 = 0U;

	t68 = ((x273&(x274|x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	volatile int32_t t69 = INT32_MIN;

	t69 = ((x277&(x278|x279))&x280);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	volatile uint64_t x283 = 1060160407655948LLU;
	volatile uint64_t t70 = 955149690632163LLU;

	t70 = ((x281&(x282|x283))&x284);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -11959751LL;
	int8_t x286 = INT8_MIN;
	uint16_t x288 = UINT16_MAX;

	t71 = ((x285&(x286|x287))&x288);

	if (t71 != 33297LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x290 = 17;
	static int32_t x291 = INT32_MIN;
	volatile int16_t x292 = INT16_MIN;

	t72 = ((x289&(x290|x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = -1;

	t73 = ((x293&(x294|x295))&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MAX;
	int32_t x299 = 11338;
	uint64_t x300 = 1339382LLU;

	t74 = ((x297&(x298|x299))&x300);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 3249LL;
	volatile int64_t x303 = INT64_MAX;
	uint32_t x304 = 546136U;
	int64_t t75 = 6461840553258LL;

	t75 = ((x301&(x302|x303))&x304);

	if (t75 != 1040LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = -1085839724184112109LL;
	int64_t x306 = 3881735772LL;
	int8_t x307 = INT8_MAX;

	t76 = ((x305&(x306|x307))&x308);

	if (t76 != 5137LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MIN;
	static int32_t x310 = -1;
	int32_t t77 = -68948;

	t77 = ((x309&(x310|x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	uint64_t x314 = 8732472108405983LLU;
	static int16_t x315 = 19;
	int8_t x316 = 15;
	static volatile uint64_t t78 = 697859796079795459LLU;

	t78 = ((x313&(x314|x315))&x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 4925;
	int16_t x318 = 2087;
	int8_t x319 = 0;
	int64_t x320 = 114812LL;
	static int64_t t79 = -2LL;

	t79 = ((x317&(x318|x319))&x320);

	if (t79 != 36LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	static int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MAX;
	volatile uint16_t x324 = 0U;
	int64_t t80 = 803609618715117LL;

	t80 = ((x321&(x322|x323))&x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	int16_t x328 = -13065;
	static volatile int64_t t81 = INT64_MIN;

	t81 = ((x325&(x326|x327))&x328);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	volatile uint32_t x330 = UINT32_MAX;
	static volatile int16_t x331 = INT16_MAX;
	uint32_t x332 = UINT32_MAX;

	t82 = ((x329&(x330|x331))&x332);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 1;
	uint8_t x334 = 2U;
	int16_t x335 = INT16_MIN;
	int64_t x336 = INT64_MIN;
	volatile int64_t t83 = 55315408952LL;

	t83 = ((x333&(x334|x335))&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	int32_t x338 = -71;
	int32_t x339 = INT32_MIN;
	volatile int64_t t84 = 1266352625592050LL;

	t84 = ((x337&(x338|x339))&x340);

	if (t84 != -90946517499904LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	int16_t x342 = 10;
	volatile int8_t x343 = 0;
	int32_t x344 = -27066;
	volatile int32_t t85 = 71717;

	t85 = ((x341&(x342|x343))&x344);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 141U;
	volatile int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MAX;
	volatile int64_t x348 = -1LL;
	int64_t t86 = -146475804LL;

	t86 = ((x345&(x346|x347))&x348);

	if (t86 != 13LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -1;
	int8_t x351 = INT8_MIN;
	uint8_t x352 = UINT8_MAX;

	t87 = ((x349&(x350|x351))&x352);

	if (t87 != 166) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	int16_t x354 = INT16_MAX;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -2;

	t88 = ((x353&(x354|x355))&x356);

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x357 = INT64_MIN;
	uint16_t x358 = UINT16_MAX;
	uint8_t x359 = 1U;
	volatile uint16_t x360 = 5271U;
	int64_t t89 = 114981727LL;

	t89 = ((x357&(x358|x359))&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	volatile uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MAX;
	int32_t x364 = INT32_MAX;
	uint64_t t90 = 7705LLU;

	t90 = ((x361&(x362|x363))&x364);

	if (t90 != 2147483520LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 1015057477662571LL;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = 36U;
	int16_t x368 = INT16_MIN;

	t91 = ((x365&(x366|x367))&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = UINT64_MAX;
	static uint8_t x370 = 13U;
	uint64_t x372 = UINT64_MAX;
	uint64_t t92 = 105085542861695145LLU;

	t92 = ((x369&(x370|x371))&x372);

	if (t92 != 255LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x375 = -1;
	int16_t x376 = 9;
	int32_t t93 = 25;

	t93 = ((x373&(x374|x375))&x376);

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 2111761031120214916LLU;
	uint32_t x378 = 3144U;
	int64_t x380 = INT64_MAX;

	t94 = ((x377&(x378|x379))&x380);

	if (t94 != 2180LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	volatile uint64_t x382 = 10474LLU;
	int64_t x384 = INT64_MIN;

	t95 = ((x381&(x382|x383))&x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 246501331;
	volatile int8_t x388 = -1;

	t96 = ((x385&(x386|x387))&x388);

	if (t96 != 83LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -936686474LL;
	static uint8_t x390 = 3U;
	volatile int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MAX;

	t97 = ((x389&(x390|x391))&x392);

	if (t97 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 1669961277LL;
	static uint8_t x396 = 114U;
	uint64_t t98 = 2068399LLU;

	t98 = ((x393&(x394|x395))&x396);

	if (t98 != 48LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x399 = 35345183990186LL;
	uint8_t x400 = 120U;
	int64_t t99 = -29LL;

	t99 = ((x397&(x398|x399))&x400);

	if (t99 != 8LL) { NG(); } else { ; }
	
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

