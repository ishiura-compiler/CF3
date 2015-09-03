#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = 476531071412316LL;
uint32_t x4 = 773387U;
int16_t x5 = INT16_MAX;
uint32_t x29 = 7U;
int64_t x35 = -26993820LL;
int64_t x41 = INT64_MAX;
int32_t x42 = INT32_MAX;
int16_t x53 = -1;
static volatile uint64_t t11 = 34LLU;
static volatile int16_t x61 = 0;
static int64_t x64 = -4592463153632942LL;
volatile uint64_t x79 = 5796141875984838869LLU;
int32_t x92 = INT32_MIN;
uint32_t t20 = 1007U;
uint32_t x93 = 58881614U;
int8_t x94 = INT8_MIN;
volatile int64_t x107 = 949408926591115122LL;
volatile uint64_t t24 = 8192LLU;
static int16_t x111 = -28;
int64_t x113 = -1LL;
int32_t x119 = -1;
uint32_t t27 = 105178888U;
uint64_t x127 = 49797LLU;
uint32_t x141 = 429U;
volatile uint32_t t33 = 37199U;
int64_t t34 = 1557947992447LL;
uint32_t x150 = 1902257974U;
int16_t x153 = -1;
int64_t t36 = 7054102218674478LL;
static volatile int64_t t38 = 207329790424LL;
int64_t x167 = -1LL;
int32_t x172 = -1;
int64_t x179 = INT64_MIN;
static volatile int64_t t42 = 1LL;
uint64_t t43 = 417835046646859LLU;
uint32_t x194 = 1451920089U;
static int32_t x199 = INT32_MAX;
volatile int32_t t47 = -1;
static volatile int16_t x202 = INT16_MAX;
int64_t x203 = INT64_MIN;
static uint8_t x206 = 29U;
int8_t x208 = 0;
uint16_t x209 = 6471U;
int32_t t50 = -65654703;
uint32_t x213 = 598165U;
uint32_t t51 = 4765U;
uint32_t t53 = 119230U;
static int8_t x235 = 7;
int8_t x243 = INT8_MIN;
int8_t x245 = INT8_MIN;
int64_t x254 = 72358089267485LL;
uint64_t t60 = 584426929LLU;
volatile uint32_t x263 = 274U;
volatile int32_t t63 = -28;
int64_t x274 = INT64_MAX;
volatile int8_t x277 = -6;
static int64_t x278 = INT64_MAX;
uint64_t x279 = 346LLU;
uint64_t x280 = 4731672219695128LLU;
int64_t x281 = -1LL;
int32_t x283 = INT32_MIN;
uint16_t x289 = UINT16_MAX;
uint16_t x294 = 7U;
static uint16_t x295 = 26U;
int8_t x297 = INT8_MIN;
int32_t x303 = -1;
static uint16_t x304 = 9U;
int16_t x306 = INT16_MAX;
uint64_t x308 = 3311580193LLU;
int16_t x322 = 467;
int32_t x323 = INT32_MIN;
volatile int32_t x324 = INT32_MIN;
volatile int64_t t76 = 1795417510152LL;
uint32_t x333 = 9380U;
volatile int16_t x334 = 2455;
volatile int64_t t77 = 39LL;
static int32_t x341 = INT32_MIN;
volatile uint8_t x350 = 0U;
uint16_t x360 = UINT16_MAX;
volatile int16_t x365 = -1;
volatile uint64_t t83 = 33636LLU;
volatile int64_t t84 = 12LL;
uint8_t x382 = 50U;
int32_t t87 = -10417;
static int64_t x385 = INT64_MAX;
volatile uint32_t x388 = UINT32_MAX;
uint64_t x389 = 445LLU;
volatile uint16_t x390 = 6350U;
uint64_t t89 = 4841LLU;
uint8_t x394 = UINT8_MAX;
static int32_t x398 = INT32_MIN;
uint8_t x399 = UINT8_MAX;
uint16_t x404 = 206U;
volatile int64_t t92 = -31762834427818LL;
int32_t x406 = -46975472;
int64_t x418 = -1LL;
int32_t t96 = -100;
volatile uint64_t t97 = 5216380682075LLU;


void f0(void) {
	volatile int32_t x2 = -1;
	int32_t x3 = -1056;
	int64_t t0 = 178675LL;

	t0 = ((x1&(x2%x3))-x4);

	if (t0 != 476531070638929LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 7LLU;
	int32_t x7 = INT32_MIN;
	int32_t x8 = 22505;
	uint64_t t1 = 0LLU;

	t1 = ((x5&(x6%x7))-x8);

	if (t1 != 18446744073709529118LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	static uint32_t x10 = 1271U;
	int8_t x11 = -1;
	int8_t x12 = INT8_MIN;
	uint32_t t2 = 10U;

	t2 = ((x9&(x10%x11))-x12);

	if (t2 != 1399U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 1571;
	uint32_t x18 = UINT32_MAX;
	volatile uint16_t x19 = UINT16_MAX;
	volatile uint64_t x20 = 1638239279LLU;
	volatile uint64_t t3 = 602177308LLU;

	t3 = ((x17&(x18%x19))-x20);

	if (t3 != 18446744072071312337LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = 28425989714LL;
	uint8_t x22 = 4U;
	volatile int64_t x23 = -1LL;
	volatile int16_t x24 = 77;
	volatile int64_t t4 = 7LL;

	t4 = ((x21&(x22%x23))-x24);

	if (t4 != -77LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int32_t x26 = INT32_MAX;
	volatile int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MAX;
	int64_t t5 = -513134087374LL;

	t5 = ((x25&(x26%x27))-x28);

	if (t5 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = INT64_MIN;
	int8_t x31 = INT8_MAX;
	uint32_t x32 = 41569U;
	static int64_t t6 = -124401LL;

	t6 = ((x29&(x30%x31))-x32);

	if (t6 != -41562LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	static volatile int32_t x34 = -6664301;
	int8_t x36 = INT8_MIN;
	volatile int64_t t7 = 188883595LL;

	t7 = ((x33&(x34%x35))-x36);

	if (t7 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 42;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	static int32_t x40 = -1;
	volatile int32_t t8 = -72361;

	t8 = ((x37&(x38%x39))-x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x43 = 34439166LL;
	static uint32_t x44 = 23U;
	int64_t t9 = 194934639571868LL;

	t9 = ((x41&(x42%x43))-x44);

	if (t9 != 12255332LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	int8_t x46 = 9;
	int64_t x47 = -650502LL;
	uint8_t x48 = 1U;
	int64_t t10 = -1012LL;

	t10 = ((x45&(x46%x47))-x48);

	if (t10 != 8LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x54 = 16848U;
	static uint64_t x55 = UINT64_MAX;
	int16_t x56 = -1338;

	t11 = ((x53&(x54%x55))-x56);

	if (t11 != 18186LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x58 = 2111971003680164707LLU;
	uint16_t x59 = 493U;
	int32_t x60 = INT32_MAX;
	uint64_t t12 = 69866838721LLU;

	t12 = ((x57&(x58%x59))-x60);

	if (t12 != 18446744071562068097LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = UINT16_MAX;
	static uint32_t x63 = 120847U;
	static volatile int64_t t13 = 2241098304569206LL;

	t13 = ((x61&(x62%x63))-x64);

	if (t13 != 4592463153632942LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MIN;
	int16_t x68 = -52;
	static volatile int64_t t14 = -463751519696228LL;

	t14 = ((x65&(x66%x67))-x68);

	if (t14 != -32716LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = 62992592853169LL;
	static uint64_t x70 = 1139290024990335194LLU;
	int32_t x71 = -1;
	uint32_t x72 = 4574664U;
	static volatile uint64_t t15 = 17081164LLU;

	t15 = ((x69&(x70%x71))-x72);

	if (t15 != 17629008556744LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x73 = INT16_MAX;
	int8_t x74 = -3;
	static int16_t x75 = 9;
	int16_t x76 = 2;
	int32_t t16 = -82;

	t16 = ((x73&(x74%x75))-x76);

	if (t16 != 32763) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = 157381786LL;
	int16_t x78 = 408;
	int16_t x80 = INT16_MAX;
	uint64_t t17 = 0LLU;

	t17 = ((x77&(x78%x79))-x80);

	if (t17 != 18446744073709519001LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	int8_t x82 = 14;
	int32_t x83 = -1;
	uint64_t x84 = 18723LLU;
	volatile uint64_t t18 = 35437344LLU;

	t18 = ((x81&(x82%x83))-x84);

	if (t18 != 18446744073709532893LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = -1;
	int8_t x86 = -1;
	volatile uint32_t x87 = UINT32_MAX;
	static volatile int8_t x88 = INT8_MIN;
	uint32_t t19 = 2092957044U;

	t19 = ((x85&(x86%x87))-x88);

	if (t19 != 128U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = -94;
	int8_t x90 = INT8_MIN;
	static uint32_t x91 = 5U;

	t20 = ((x89&(x90%x91))-x92);

	if (t20 != 2147483650U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x95 = -186;
	int16_t x96 = INT16_MIN;
	uint32_t t21 = 1448U;

	t21 = ((x93&(x94%x95))-x96);

	if (t21 != 58914304U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	static int8_t x98 = -1;
	int8_t x99 = 6;
	static int8_t x100 = 0;
	static int32_t t22 = 3;

	t22 = ((x97&(x98%x99))-x100);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	uint16_t x102 = 328U;
	uint8_t x103 = 6U;
	uint64_t x104 = UINT64_MAX;
	uint64_t t23 = 24232LLU;

	t23 = ((x101&(x102%x103))-x104);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 83004505LLU;
	int8_t x106 = 2;
	volatile int8_t x108 = INT8_MIN;

	t24 = ((x105&(x106%x107))-x108);

	if (t24 != 128LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MAX;
	uint8_t x112 = UINT8_MAX;
	int64_t t25 = 267816196792LL;

	t25 = ((x109&(x110%x111))-x112);

	if (t25 != -255LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = -1;
	int8_t x115 = -1;
	static int32_t x116 = -5466451;
	int64_t t26 = 50613158330LL;

	t26 = ((x113&(x114%x115))-x116);

	if (t26 != 5466451LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 76747644U;
	int16_t x118 = 5029;
	uint32_t x120 = 97739051U;

	t27 = ((x117&(x118%x119))-x120);

	if (t27 != 4197228245U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x121 = 11302U;
	uint64_t x122 = 147491698917487LLU;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t28 = 6166134246596037987LLU;

	t28 = ((x121&(x122%x123))-x124);

	if (t28 != 9223372036854775846LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MAX;
	volatile int32_t x126 = -85;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t29 = 19966280888632491LLU;

	t29 = ((x125&(x126%x127))-x128);

	if (t29 != 9223372036854808805LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = -22220267;
	volatile int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t30 = 38767528LLU;

	t30 = ((x129&(x130%x131))-x132);

	if (t30 != 18446744073687331350LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 86U;
	int16_t x134 = 1342;
	int16_t x135 = INT16_MIN;
	static int64_t x136 = 80097616LL;
	volatile int64_t t31 = 1119399257115108LL;

	t31 = ((x133&(x134%x135))-x136);

	if (t31 != -80097594LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	static int32_t x138 = INT32_MAX;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 38297U;
	int64_t t32 = -58518LL;

	t32 = ((x137&(x138%x139))-x140);

	if (t32 != 2147445223LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x142 = -1;
	volatile int16_t x143 = 11;
	int32_t x144 = -76877;

	t33 = ((x141&(x142%x143))-x144);

	if (t33 != 77306U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MAX;
	static int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MAX;
	int16_t x148 = -144;

	t34 = ((x145&(x146%x147))-x148);

	if (t34 != 9223372036854743184LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x149 = 45U;
	int64_t x151 = 20561281LL;
	uint16_t x152 = 3456U;
	int64_t t35 = 687594502340331004LL;

	t35 = ((x149&(x150%x151))-x152);

	if (t35 != -3448LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x154 = INT32_MIN;
	static uint16_t x155 = 19481U;
	int64_t x156 = -1LL;

	t36 = ((x153&(x154%x155))-x156);

	if (t36 != -15093LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 2786U;
	static volatile uint16_t x158 = 2334U;
	int16_t x159 = INT16_MIN;
	static uint16_t x160 = 81U;
	int32_t t37 = -1;

	t37 = ((x157&(x158%x159))-x160);

	if (t37 != 1969) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = -1;
	int32_t x162 = INT32_MAX;
	uint16_t x163 = 3U;
	int64_t x164 = 446213464LL;

	t38 = ((x161&(x162%x163))-x164);

	if (t38 != -446213463LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = 2;
	uint16_t x166 = UINT16_MAX;
	static int8_t x168 = INT8_MIN;
	static volatile int64_t t39 = -23453315098LL;

	t39 = ((x165&(x166%x167))-x168);

	if (t39 != 128LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = -1;
	volatile uint64_t x171 = 375LLU;
	volatile uint64_t t40 = 1173LLU;

	t40 = ((x169&(x170%x171))-x172);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 27076U;
	volatile uint8_t x174 = 101U;
	uint64_t x175 = UINT64_MAX;
	volatile uint32_t x176 = 1213U;
	volatile uint64_t t41 = 429793214846LLU;

	t41 = ((x173&(x174%x175))-x176);

	if (t41 != 18446744073709550471LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x177 = 227897U;
	int8_t x178 = INT8_MIN;
	uint16_t x180 = 3U;

	t42 = ((x177&(x178%x179))-x180);

	if (t42 != 227837LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x181 = 432603737307424LLU;
	volatile uint64_t x182 = UINT64_MAX;
	int64_t x183 = 133566846LL;
	static volatile uint64_t x184 = 30316206833LLU;

	t43 = ((x181&(x182%x183))-x184);

	if (t43 != 18446744043394864687LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x185 = -29;
	uint16_t x186 = 21U;
	int16_t x187 = INT16_MAX;
	volatile int32_t x188 = 0;
	volatile int32_t t44 = 37;

	t44 = ((x185&(x186%x187))-x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 29322U;
	uint32_t x190 = 13662U;
	int32_t x191 = INT32_MIN;
	volatile uint8_t x192 = 6U;
	volatile uint32_t t45 = 85U;

	t45 = ((x189&(x190%x191))-x192);

	if (t45 != 12292U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 122U;
	static int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;
	int64_t t46 = 29068025451491938LL;

	t46 = ((x193&(x194%x195))-x196);

	if (t46 != 2147483736LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x197 = -1;
	int8_t x198 = 3;
	int8_t x200 = 4;

	t47 = ((x197&(x198%x199))-x200);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x204 = INT8_MIN;
	volatile int64_t t48 = -301624319794LL;

	t48 = ((x201&(x202%x203))-x204);

	if (t48 != 32895LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = 24U;
	uint32_t x207 = 24242U;
	volatile uint32_t t49 = 2133856580U;

	t49 = ((x205&(x206%x207))-x208);

	if (t49 != 24U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x210 = 1;
	int16_t x211 = -1;
	static int16_t x212 = -1;

	t50 = ((x209&(x210%x211))-x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x214 = 28;
	static int16_t x215 = INT16_MIN;
	volatile int32_t x216 = INT32_MIN;

	t51 = ((x213&(x214%x215))-x216);

	if (t51 != 2147483668U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MIN;
	volatile int32_t x218 = INT32_MIN;
	int8_t x219 = -1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t52 = 8861;

	t52 = ((x217&(x218%x219))-x220);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x221 = 20U;
	volatile uint16_t x222 = 1011U;
	static int16_t x223 = INT16_MIN;
	volatile int8_t x224 = 15;

	t53 = ((x221&(x222%x223))-x224);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 825328500U;
	uint16_t x226 = 2U;
	int64_t x227 = -376LL;
	int16_t x228 = INT16_MAX;
	int64_t t54 = 376429LL;

	t54 = ((x225&(x226%x227))-x228);

	if (t54 != -32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x233 = 1834260094016470LLU;
	uint16_t x234 = UINT16_MAX;
	static int16_t x236 = INT16_MAX;
	static uint64_t t55 = 269745436LLU;

	t55 = ((x233&(x234%x235))-x236);

	if (t55 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -1;
	uint32_t x238 = 21753685U;
	int32_t x239 = 398232;
	static int16_t x240 = -422;
	volatile uint32_t t56 = 204U;

	t56 = ((x237&(x238%x239))-x240);

	if (t56 != 249579U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x241 = INT16_MIN;
	static uint16_t x242 = 575U;
	int64_t x244 = -1LL;
	int64_t t57 = -319561925LL;

	t57 = ((x241&(x242%x243))-x244);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x246 = 2278369130787LLU;
	int8_t x247 = INT8_MIN;
	int64_t x248 = -7869219650LL;
	static uint64_t t58 = 8075570LLU;

	t58 = ((x245&(x246%x247))-x248);

	if (t58 != 2286238350402LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x249 = 1U;
	static int16_t x250 = INT16_MIN;
	int32_t x251 = -1;
	int16_t x252 = INT16_MAX;
	int32_t t59 = -8;

	t59 = ((x249&(x250%x251))-x252);

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = 7580837365014LLU;
	volatile uint8_t x255 = UINT8_MAX;
	volatile uint8_t x256 = 15U;

	t60 = ((x253&(x254%x255))-x256);

	if (t60 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x257 = 7110162U;
	uint8_t x258 = 29U;
	static volatile int32_t x259 = INT32_MAX;
	int16_t x260 = -1;
	static uint32_t t61 = 709477579U;

	t61 = ((x257&(x258%x259))-x260);

	if (t61 != 17U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	static uint32_t x262 = 575244U;
	int32_t x264 = INT32_MAX;
	uint32_t t62 = 33213U;

	t62 = ((x261&(x262%x263))-x264);

	if (t62 != 2147483649U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = UINT16_MAX;
	int8_t x266 = INT8_MAX;
	volatile int32_t x267 = INT32_MIN;
	static volatile int16_t x268 = -1;

	t63 = ((x265&(x266%x267))-x268);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = INT8_MIN;
	int8_t x275 = INT8_MIN;
	volatile int16_t x276 = INT16_MIN;
	volatile int64_t t64 = 251106005LL;

	t64 = ((x273&(x274%x275))-x276);

	if (t64 != 32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t t65 = 867306206149627364LLU;

	t65 = ((x277&(x278%x279))-x280);

	if (t65 != 18442012401489856592LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x282 = -1;
	volatile int64_t x284 = -63884390577695LL;
	volatile int64_t t66 = 1036766000455589040LL;

	t66 = ((x281&(x282%x283))-x284);

	if (t66 != 63884390577694LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x290 = -791233LL;
	volatile int8_t x291 = INT8_MIN;
	static int8_t x292 = 0;
	int64_t t67 = 52676895435520121LL;

	t67 = ((x289&(x290%x291))-x292);

	if (t67 != 65471LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x293 = 352219143084896245LLU;
	int32_t x296 = -35;
	volatile uint64_t t68 = 0LLU;

	t68 = ((x293&(x294%x295))-x296);

	if (t68 != 40LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x298 = 30;
	int8_t x299 = -1;
	int32_t x300 = -1;
	int32_t t69 = 70089029;

	t69 = ((x297&(x298%x299))-x300);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = -1;
	int64_t x302 = -8712541611012LL;
	static volatile int64_t t70 = -14LL;

	t70 = ((x301&(x302%x303))-x304);

	if (t70 != -9LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x305 = INT16_MIN;
	volatile int8_t x307 = -1;
	volatile uint64_t t71 = 9672130LLU;

	t71 = ((x305&(x306%x307))-x308);

	if (t71 != 18446744070397971423LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x309 = 144360401LLU;
	int64_t x310 = 97368LL;
	static int64_t x311 = INT64_MAX;
	uint16_t x312 = UINT16_MAX;
	uint64_t t72 = 42390666546823LLU;

	t72 = ((x309&(x310%x311))-x312);

	if (t72 != 18446744073709502545LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MAX;
	volatile int32_t x315 = -1;
	int32_t x316 = INT32_MAX;
	int32_t t73 = -1676440;

	t73 = ((x313&(x314%x315))-x316);

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x321 = 224064U;
	uint32_t t74 = 1147U;

	t74 = ((x321&(x322%x323))-x324);

	if (t74 != 2147483968U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = -61;
	int32_t x326 = -15666;
	int8_t x327 = 6;
	int8_t x328 = INT8_MAX;
	int32_t t75 = -621285;

	t75 = ((x325&(x326%x327))-x328);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = -186041;
	static uint16_t x331 = UINT16_MAX;
	int32_t x332 = INT32_MIN;

	t76 = ((x329&(x330%x331))-x332);

	if (t76 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x335 = INT64_MAX;
	int16_t x336 = 17;

	t77 = ((x333&(x334%x335))-x336);

	if (t77 != 115LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = -1;
	int16_t x338 = INT16_MIN;
	static volatile uint16_t x339 = 17U;
	int16_t x340 = INT16_MIN;
	volatile int32_t t78 = 6057158;

	t78 = ((x337&(x338%x339))-x340);

	if (t78 != 32759) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	int16_t x344 = -25;
	volatile int64_t t79 = -321850237325575621LL;

	t79 = ((x341&(x342%x343))-x344);

	if (t79 != 25LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x349 = -10690013;
	static volatile int64_t x351 = INT64_MIN;
	int8_t x352 = 30;
	volatile int64_t t80 = 1024860178LL;

	t80 = ((x349&(x350%x351))-x352);

	if (t80 != -30LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x353 = -408LL;
	int16_t x354 = 0;
	int64_t x355 = 1883LL;
	uint8_t x356 = UINT8_MAX;
	static int64_t t81 = -12992053060071LL;

	t81 = ((x353&(x354%x355))-x356);

	if (t81 != -255LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = 0;
	int8_t x358 = 2;
	int16_t x359 = INT16_MIN;
	volatile int32_t t82 = 4176;

	t82 = ((x357&(x358%x359))-x360);

	if (t82 != -65535) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x366 = -1;
	static uint16_t x367 = 50U;
	static uint64_t x368 = UINT64_MAX;

	t83 = ((x365&(x366%x367))-x368);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = INT32_MAX;
	int32_t x370 = -599;
	int16_t x371 = INT16_MIN;
	int64_t x372 = 139LL;

	t84 = ((x369&(x370%x371))-x372);

	if (t84 != 2147482910LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = 131212;
	uint64_t x374 = UINT64_MAX;
	static volatile int64_t x375 = -1LL;
	volatile int8_t x376 = -1;
	volatile uint64_t t85 = 442407309415332LLU;

	t85 = ((x373&(x374%x375))-x376);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	uint16_t x380 = UINT16_MAX;
	int32_t t86 = -399020;

	t86 = ((x377&(x378%x379))-x380);

	if (t86 != -65663) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x381 = INT8_MIN;
	int32_t x383 = 2566;
	int8_t x384 = INT8_MIN;

	t87 = ((x381&(x382%x383))-x384);

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x386 = -1LL;
	int8_t x387 = INT8_MIN;
	volatile int64_t t88 = 320706LL;

	t88 = ((x385&(x386%x387))-x388);

	if (t88 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x391 = 152U;
	uint64_t x392 = 1426LLU;

	t89 = ((x389&(x390%x391))-x392);

	if (t89 != 18446744073709550242LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = -1LL;
	uint64_t x395 = 1LLU;
	int64_t x396 = -1658132471042816688LL;
	uint64_t t90 = 2055819261LLU;

	t90 = ((x393&(x394%x395))-x396);

	if (t90 != 1658132471042816688LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x397 = 14;
	int16_t x400 = 1628;
	int32_t t91 = 20;

	t91 = ((x397&(x398%x399))-x400);

	if (t91 != -1628) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x401 = 20237LL;
	int16_t x402 = 0;
	uint8_t x403 = 5U;

	t92 = ((x401&(x402%x403))-x404);

	if (t92 != -206LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x405 = INT8_MIN;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MIN;
	uint64_t t93 = 571507792213LLU;

	t93 = ((x405&(x406%x407))-x408);

	if (t93 != 18446744073662576256LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x409 = 2235391737902396LLU;
	uint8_t x410 = UINT8_MAX;
	uint64_t x411 = 3108436638367438LLU;
	uint64_t x412 = 28140032838LLU;
	volatile uint64_t t94 = 16LLU;

	t94 = ((x409&(x410%x411))-x412);

	if (t94 != 18446744045569518838LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = -6;
	int8_t x419 = -1;
	uint8_t x420 = UINT8_MAX;
	volatile int64_t t95 = -136362299583LL;

	t95 = ((x417&(x418%x419))-x420);

	if (t95 != -255LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x421 = 702U;
	static volatile uint16_t x422 = 8358U;
	int8_t x423 = INT8_MIN;
	volatile int32_t x424 = -2;

	t96 = ((x421&(x422%x423))-x424);

	if (t96 != 40) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x425 = 11506LLU;
	int32_t x426 = 7870566;
	uint8_t x427 = UINT8_MAX;
	int16_t x428 = 125;

	t97 = ((x425&(x426%x427))-x428);

	if (t97 != 117LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = -1LL;
	int8_t x430 = -1;
	int64_t x431 = 364703537656LL;
	uint64_t x432 = 436LLU;
	uint64_t t98 = 481145376629808283LLU;

	t98 = ((x429&(x430%x431))-x432);

	if (t98 != 18446744073709551179LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x433 = 1940714384622061LL;
	int32_t x434 = -1;
	uint16_t x435 = 1466U;
	static volatile uint8_t x436 = 1U;
	static volatile int64_t t99 = -432732103214661443LL;

	t99 = ((x433&(x434%x435))-x436);

	if (t99 != 1940714384622060LL) { NG(); } else { ; }
	
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

