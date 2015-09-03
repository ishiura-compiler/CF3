#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 989353349455LLU;
int64_t t2 = 1LL;
static volatile uint32_t x23 = UINT32_MAX;
int8_t x26 = INT8_MAX;
int32_t x30 = INT32_MIN;
uint16_t x32 = UINT16_MAX;
int8_t x40 = INT8_MAX;
int64_t x51 = INT64_MAX;
static uint64_t x60 = 6666228163068LLU;
uint64_t t11 = 17395137LLU;
static int16_t x61 = INT16_MIN;
uint16_t x62 = 0U;
uint8_t x64 = UINT8_MAX;
volatile int16_t x76 = -1;
int32_t x79 = INT32_MIN;
uint32_t x91 = 43633367U;
int16_t x92 = INT16_MIN;
volatile uint8_t x96 = 49U;
int16_t x98 = INT16_MIN;
int32_t t20 = 12;
uint8_t x107 = 0U;
uint32_t x108 = 85511U;
volatile int32_t t24 = -238278335;
volatile uint64_t x127 = 8264057712336448093LLU;
int16_t x141 = -1502;
volatile int32_t x147 = 885;
uint32_t x148 = 252561881U;
int64_t x150 = INT64_MAX;
volatile int8_t x155 = INT8_MIN;
static int8_t x162 = INT8_MAX;
volatile uint64_t t32 = 460LLU;
int32_t x175 = -23693467;
int64_t x178 = INT64_MIN;
volatile uint32_t x187 = 165842U;
static uint32_t x191 = 5U;
volatile int32_t x196 = -1;
int8_t x197 = -1;
static volatile int8_t x198 = INT8_MAX;
static volatile int64_t x199 = -1LL;
static volatile int16_t x203 = INT16_MIN;
uint32_t x207 = UINT32_MAX;
int64_t x213 = INT64_MIN;
volatile int64_t x214 = INT64_MIN;
int8_t x218 = INT8_MAX;
static uint16_t x220 = 4603U;
volatile int64_t t45 = -3597320LL;
volatile int16_t x229 = INT16_MIN;
int64_t x234 = INT64_MIN;
int64_t x238 = INT64_MIN;
uint16_t x239 = UINT16_MAX;
volatile uint16_t x240 = 10U;
volatile uint64_t t49 = 360745LLU;
static int64_t t50 = 1446238016810362379LL;
uint32_t x250 = 15388U;
int32_t x259 = INT32_MIN;
uint8_t x260 = 6U;
uint8_t x266 = 31U;
int16_t x277 = -1;
volatile int64_t t59 = -507LL;
int64_t x281 = -14842702341087LL;
static volatile int8_t x282 = INT8_MAX;
int8_t x285 = INT8_MIN;
uint16_t x288 = 2482U;
static int32_t x295 = -1625;
volatile int32_t t63 = 5;
int8_t x298 = INT8_MIN;
static int64_t t64 = 255008727682LL;
static uint64_t x302 = 10276LLU;
volatile uint16_t x328 = 5U;
volatile int32_t x329 = -3827;
int64_t x338 = INT64_MIN;
int64_t x342 = -1LL;
uint16_t x349 = 1U;
int32_t t75 = 297;
static int64_t x358 = 299028134828628642LL;
int32_t x364 = INT32_MIN;
volatile uint64_t t79 = 4021070LLU;
int8_t x370 = -1;
uint16_t x371 = UINT16_MAX;
int16_t x373 = 5;
uint16_t x375 = UINT16_MAX;
static int64_t x377 = INT64_MIN;
static uint8_t x379 = 74U;
uint16_t x380 = 8568U;
uint32_t t83 = 192778004U;
int64_t x387 = -7LL;
int32_t x393 = -1936;
uint64_t x394 = 438559795313938LLU;
uint32_t x404 = 397U;
static volatile int64_t t89 = 461LL;
uint32_t x417 = 1399183850U;
uint64_t x419 = 190275LLU;
static int64_t x423 = -1LL;
volatile int32_t x433 = 125705;
volatile int32_t t96 = -5;
int8_t x438 = INT8_MIN;
volatile int32_t x441 = INT32_MIN;
static volatile uint8_t x446 = UINT8_MAX;
int64_t t99 = -187795705813LL;


void f0(void) {
	volatile uint8_t x1 = 28U;
	int32_t x2 = INT32_MIN;
	uint64_t x3 = UINT64_MAX;
	int16_t x4 = 134;
	uint64_t t0 = 72040LLU;

	t0 = ((x1&x2)|(x3+x4));

	if (t0 != 133LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 213617460010060519LLU;
	static int64_t x6 = INT64_MAX;
	volatile uint32_t x7 = UINT32_MAX;
	int64_t x8 = -205318LL;

	t1 = ((x5&x6)|(x7+x8));

	if (t1 != 213617461256052735LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 65310U;
	int8_t x14 = INT8_MAX;
	uint16_t x15 = 2U;
	volatile int64_t x16 = -1LL;

	t2 = ((x13&x14)|(x15+x16));

	if (t2 != 31LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	int32_t x18 = INT32_MIN;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 5757U;
	int32_t t3 = 10;

	t3 = ((x17&x18)|(x19+x20));

	if (t3 != -27011) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t x22 = INT32_MIN;
	int8_t x24 = -29;
	static volatile uint32_t t4 = 6U;

	t4 = ((x21&x22)|(x23+x24));

	if (t4 != 4294967266U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = 301;
	int8_t x27 = INT8_MIN;
	volatile uint32_t x28 = UINT32_MAX;
	uint32_t t5 = 5560894U;

	t5 = ((x25&x26)|(x27+x28));

	if (t5 != 4294967167U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 1196LLU;
	int64_t x31 = -305527098LL;
	volatile uint64_t t6 = 215666291117327943LLU;

	t6 = ((x29&x30)|(x31+x32));

	if (t6 != 18446744073404090053LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 2833097933923345LLU;
	static int64_t x38 = INT64_MIN;
	volatile int16_t x39 = INT16_MIN;
	volatile uint64_t t7 = 1426344281LLU;

	t7 = ((x37&x38)|(x39+x40));

	if (t7 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MAX;
	int32_t x42 = INT32_MIN;
	uint64_t x43 = 9031971180451045LLU;
	uint64_t x44 = 21940909799024007LLU;
	uint64_t t8 = 142684051957LLU;

	t8 = ((x41&x42)|(x43+x44));

	if (t8 != 30972880979475052LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = INT64_MIN;
	static int16_t x50 = 7539;
	int16_t x52 = -5;
	int64_t t9 = 5459557364831LL;

	t9 = ((x49&x50)|(x51+x52));

	if (t9 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x53 = INT32_MIN;
	int8_t x54 = 2;
	static int32_t x55 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;
	uint64_t t10 = 13289269LLU;

	t10 = ((x53&x54)|(x55+x56));

	if (t10 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x57 = 28U;
	uint16_t x58 = 177U;
	uint32_t x59 = 1299U;

	t11 = ((x57&x58)|(x59+x60));

	if (t11 != 6666228164383LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x63 = INT16_MIN;
	volatile int32_t t12 = 527164624;

	t12 = ((x61&x62)|(x63+x64));

	if (t12 != -32513) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x65 = UINT32_MAX;
	volatile uint64_t x66 = 292976351270LLU;
	volatile int64_t x67 = INT64_MIN;
	static int32_t x68 = 760827;
	uint64_t t13 = 38500LLU;

	t13 = ((x65&x66)|(x67+x68));

	if (t13 != 9223372037774105599LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int32_t x70 = -139583716;
	int8_t x71 = INT8_MAX;
	uint64_t x72 = 8152966LLU;
	uint64_t t14 = 2655960072622LLU;

	t14 = ((x69&x70)|(x71+x72));

	if (t14 != 8159005LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 43004U;
	uint8_t x74 = UINT8_MAX;
	uint64_t x75 = 32666648LLU;
	volatile uint64_t t15 = 32793474545LLU;

	t15 = ((x73&x74)|(x75+x76));

	if (t15 != 32666879LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	static int16_t x78 = -415;
	uint8_t x80 = 15U;
	int64_t t16 = 2061076236444591774LL;

	t16 = ((x77&x78)|(x79+x80));

	if (t16 != -2147483633LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	uint16_t x82 = UINT16_MAX;
	volatile int64_t x83 = 76808LL;
	int32_t x84 = -1;
	int64_t t17 = -89027275433491LL;

	t17 = ((x81&x82)|(x83+x84));

	if (t17 != 77055LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x89 = UINT32_MAX;
	static int16_t x90 = INT16_MIN;
	static uint32_t t18 = 10651U;

	t18 = ((x89&x90)|(x91+x92));

	if (t18 != 4294953687U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = 5254789;
	uint64_t x94 = 691284246795466LLU;
	int8_t x95 = INT8_MAX;
	uint64_t t19 = 12221LLU;

	t19 = ((x93&x94)|(x95+x96));

	if (t19 != 5244080LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = INT8_MAX;

	t20 = ((x97&x98)|(x99+x100));

	if (t20 != -2147417986) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int64_t x106 = -327997250LL;
	volatile int64_t t21 = 921601LL;

	t21 = ((x105&x106)|(x107+x108));

	if (t21 != 93887LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = 4202U;
	int64_t x110 = -12272040269346001LL;
	static int16_t x111 = INT16_MIN;
	int16_t x112 = 1;
	volatile int64_t t22 = 12606134313753LL;

	t22 = ((x109&x110)|(x111+x112));

	if (t22 != -32725LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = -36;
	int16_t x118 = INT16_MIN;
	int8_t x119 = -50;
	static volatile int16_t x120 = INT16_MAX;
	volatile int32_t t23 = 15075136;

	t23 = ((x117&x118)|(x119+x120));

	if (t23 != -51) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x121 = -1;
	uint16_t x122 = UINT16_MAX;
	volatile uint8_t x123 = 123U;
	int8_t x124 = INT8_MIN;

	t24 = ((x121&x122)|(x123+x124));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x125 = UINT64_MAX;
	uint8_t x126 = 27U;
	static uint8_t x128 = 24U;
	volatile uint64_t t25 = 7306956584517285LLU;

	t25 = ((x125&x126)|(x127+x128));

	if (t25 != 8264057712336448127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x133 = 1U;
	int8_t x134 = INT8_MIN;
	int8_t x135 = -1;
	uint16_t x136 = 1U;
	volatile uint32_t t26 = 1533U;

	t26 = ((x133&x134)|(x135+x136));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x137 = INT64_MAX;
	uint32_t x138 = 3U;
	volatile uint16_t x139 = 8U;
	int64_t x140 = -6116305LL;
	volatile int64_t t27 = 32055602LL;

	t27 = ((x137&x138)|(x139+x140));

	if (t27 != -6116297LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x142 = INT8_MIN;
	static int32_t x143 = 431326;
	int64_t x144 = -122LL;
	int64_t t28 = -683240LL;

	t28 = ((x141&x142)|(x143+x144));

	if (t28 != -412LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = -1;
	int64_t x146 = INT64_MIN;
	int64_t t29 = 2019LL;

	t29 = ((x145&x146)|(x147+x148));

	if (t29 != -9223372036602213042LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x149 = -21;
	uint16_t x151 = UINT16_MAX;
	int64_t x152 = INT64_MIN;
	volatile int64_t t30 = -3210443288569054LL;

	t30 = ((x149&x150)|(x151+x152));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x153 = UINT64_MAX;
	volatile int32_t x154 = 3433;
	int64_t x156 = INT64_MAX;
	volatile uint64_t t31 = 3666083676LLU;

	t31 = ((x153&x154)|(x155+x156));

	if (t31 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x163 = 14773761658383873LLU;
	int8_t x164 = INT8_MIN;

	t32 = ((x161&x162)|(x163+x164));

	if (t32 != 14773761658383745LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = -1;
	uint32_t x174 = UINT32_MAX;
	volatile int8_t x176 = -1;
	uint32_t t33 = UINT32_MAX;

	t33 = ((x173&x174)|(x175+x176));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = INT32_MAX;
	volatile int16_t x179 = -1;
	int16_t x180 = -1;
	static int64_t t34 = 135LL;

	t34 = ((x177&x178)|(x179+x180));

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = INT32_MIN;
	volatile int16_t x182 = -4;
	int32_t x183 = -1;
	int32_t x184 = -1;
	static int32_t t35 = 34;

	t35 = ((x181&x182)|(x183+x184));

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	static int8_t x186 = 1;
	int64_t x188 = INT64_MIN;
	uint64_t t36 = 1491066347LLU;

	t36 = ((x185&x186)|(x187+x188));

	if (t36 != 9223372036854941651LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x189 = 13257026U;
	int64_t x190 = 8062LL;
	volatile uint8_t x192 = 15U;
	volatile int64_t t37 = -63165614LL;

	t37 = ((x189&x190)|(x191+x192));

	if (t37 != 2390LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x193 = -1LL;
	int32_t x194 = INT32_MAX;
	uint16_t x195 = 20215U;
	volatile int64_t t38 = -33681718190090LL;

	t38 = ((x193&x194)|(x195+x196));

	if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x200 = 9U;
	int64_t t39 = -7760687916325LL;

	t39 = ((x197&x198)|(x199+x200));

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = -3173LL;
	int32_t x204 = -58424;
	int64_t t40 = 88LL;

	t40 = ((x201&x202)|(x203+x204));

	if (t40 != -91192LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = UINT64_MAX;
	uint16_t x206 = 547U;
	int8_t x208 = -1;
	volatile uint64_t t41 = 9827846318691LLU;

	t41 = ((x205&x206)|(x207+x208));

	if (t41 != 4294967295LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x209 = UINT8_MAX;
	uint8_t x210 = 99U;
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = INT32_MIN;
	static uint32_t t42 = 397U;

	t42 = ((x209&x210)|(x211+x212));

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x215 = INT64_MIN;
	uint32_t x216 = 169151U;
	volatile int64_t t43 = 0LL;

	t43 = ((x213&x214)|(x215+x216));

	if (t43 != -9223372036854606657LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = INT8_MIN;
	uint8_t x219 = 26U;
	volatile int32_t t44 = 0;

	t44 = ((x217&x218)|(x219+x220));

	if (t44 != 4629) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x221 = -194LL;
	int16_t x222 = -1;
	static int8_t x223 = INT8_MIN;
	int16_t x224 = -6396;

	t45 = ((x221&x222)|(x223+x224));

	if (t45 != -66LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x225 = INT64_MAX;
	volatile uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MIN;
	uint32_t x228 = 3U;
	volatile int64_t t46 = -389LL;

	t46 = ((x225&x226)|(x227+x228));

	if (t46 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x230 = INT16_MAX;
	int8_t x231 = -1;
	uint16_t x232 = UINT16_MAX;
	int32_t t47 = 25190064;

	t47 = ((x229&x230)|(x231+x232));

	if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x233 = 144827786568LL;
	volatile uint16_t x235 = 13U;
	volatile uint32_t x236 = 2279U;
	volatile int64_t t48 = 84097356LL;

	t48 = ((x233&x234)|(x235+x236));

	if (t48 != 2292LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x237 = 5957762138134313994LLU;

	t49 = ((x237&x238)|(x239+x240));

	if (t49 != 65545LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = 22;
	uint8_t x242 = 2U;
	int64_t x243 = -96155LL;
	volatile int8_t x244 = -1;

	t50 = ((x241&x242)|(x243+x244));

	if (t50 != -96154LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x245 = INT16_MIN;
	uint32_t x246 = 36592338U;
	volatile int32_t x247 = -1;
	uint8_t x248 = UINT8_MAX;
	uint32_t t51 = 11680U;

	t51 = ((x245&x246)|(x247+x248));

	if (t51 != 36569342U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x249 = -1;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile uint32_t t52 = 351275U;

	t52 = ((x249&x250)|(x251+x252));

	if (t52 != 32767U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x253 = UINT32_MAX;
	uint32_t x254 = 0U;
	static uint16_t x255 = 914U;
	static uint16_t x256 = UINT16_MAX;
	volatile uint32_t t53 = 118269359U;

	t53 = ((x253&x254)|(x255+x256));

	if (t53 != 66449U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = 29U;
	volatile uint64_t x258 = 15312042036LLU;
	static uint64_t t54 = 84806LLU;

	t54 = ((x257&x258)|(x259+x260));

	if (t54 != 18446744071562067990LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x261 = -1;
	int64_t x262 = 19910LL;
	int32_t x263 = -1;
	int8_t x264 = -2;
	volatile int64_t t55 = 7LL;

	t55 = ((x261&x262)|(x263+x264));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x267 = -1;
	volatile uint8_t x268 = 3U;
	volatile uint64_t t56 = 900646810251094058LLU;

	t56 = ((x265&x266)|(x267+x268));

	if (t56 != 31LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x269 = UINT64_MAX;
	static int8_t x270 = -1;
	int8_t x271 = INT8_MIN;
	static int16_t x272 = INT16_MIN;
	uint64_t t57 = UINT64_MAX;

	t57 = ((x269&x270)|(x271+x272));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x273 = 1;
	int16_t x274 = INT16_MIN;
	int64_t x275 = 184LL;
	int32_t x276 = INT32_MAX;
	volatile int64_t t58 = 213638LL;

	t58 = ((x273&x274)|(x275+x276));

	if (t58 != 2147483831LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x278 = -96000878LL;
	static volatile uint32_t x279 = 50194U;
	int64_t x280 = INT64_MIN;

	t59 = ((x277&x278)|(x279+x280));

	if (t59 != -95951726LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x283 = -76LL;
	int16_t x284 = INT16_MIN;
	volatile int64_t t60 = 3325673627640LL;

	t60 = ((x281&x282)|(x283+x284));

	if (t60 != -32843LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x286 = INT8_MIN;
	uint64_t x287 = 112561223839LLU;
	volatile uint64_t t61 = 61777005947LLU;

	t61 = ((x285&x286)|(x287+x288));

	if (t61 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x289 = 65U;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MIN;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t62 = 1177;

	t62 = ((x289&x290)|(x291+x292));

	if (t62 != -65471) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x293 = INT16_MAX;
	volatile int16_t x294 = -1;
	uint16_t x296 = UINT16_MAX;

	t63 = ((x293&x294)|(x295+x296));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x297 = -1LL;
	int32_t x299 = INT32_MAX;
	volatile uint32_t x300 = UINT32_MAX;

	t64 = ((x297&x298)|(x299+x300));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x301 = 27949U;
	int8_t x303 = INT8_MAX;
	int64_t x304 = INT64_MIN;
	static uint64_t t65 = 19LLU;

	t65 = ((x301&x302)|(x303+x304));

	if (t65 != 9223372036854786175LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x305 = UINT32_MAX;
	volatile uint8_t x306 = 9U;
	static int8_t x307 = INT8_MIN;
	uint16_t x308 = UINT16_MAX;
	uint32_t t66 = 307U;

	t66 = ((x305&x306)|(x307+x308));

	if (t66 != 65407U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 1U;
	int8_t x311 = INT8_MAX;
	int8_t x312 = INT8_MIN;
	volatile uint32_t t67 = UINT32_MAX;

	t67 = ((x309&x310)|(x311+x312));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int16_t x314 = -1;
	int32_t x315 = -1;
	static volatile uint8_t x316 = 1U;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = ((x313&x314)|(x315+x316));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = INT32_MIN;
	static volatile int32_t x326 = -1;
	int8_t x327 = INT8_MIN;
	static volatile int32_t t69 = 42;

	t69 = ((x325&x326)|(x327+x328));

	if (t69 != -123) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x330 = UINT32_MAX;
	volatile uint16_t x331 = 1679U;
	int16_t x332 = INT16_MAX;
	uint32_t t70 = 46213U;

	t70 = ((x329&x330)|(x331+x332));

	if (t70 != 4294965135U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x333 = INT64_MAX;
	uint32_t x334 = 721116811U;
	uint64_t x335 = 1834300LLU;
	int16_t x336 = -29;
	volatile uint64_t t71 = 1LLU;

	t71 = ((x333&x334)|(x335+x336));

	if (t71 != 721158047LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	static int64_t x339 = 14LL;
	int8_t x340 = 7;
	static volatile int64_t t72 = 609539LL;

	t72 = ((x337&x338)|(x339+x340));

	if (t72 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x341 = -18;
	int8_t x343 = INT8_MAX;
	volatile int32_t x344 = INT32_MIN;
	static int64_t t73 = 1LL;

	t73 = ((x341&x342)|(x343+x344));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x345 = 4LLU;
	int16_t x346 = INT16_MAX;
	volatile uint16_t x347 = 17U;
	uint32_t x348 = 599U;
	volatile uint64_t t74 = 61582922LLU;

	t74 = ((x345&x346)|(x347+x348));

	if (t74 != 620LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x350 = 1;
	uint16_t x351 = 2U;
	uint8_t x352 = 4U;

	t75 = ((x349&x350)|(x351+x352));

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x353 = -1;
	int32_t x354 = -17;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -1;
	static volatile int32_t t76 = 495;

	t76 = ((x353&x354)|(x355+x356));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = 24LLU;
	uint16_t x359 = 8052U;
	int16_t x360 = INT16_MIN;
	volatile uint64_t t77 = 13772084391269LLU;

	t77 = ((x357&x358)|(x359+x360));

	if (t77 != 18446744073709526900LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x361 = 47981706841264377LLU;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = 1871;
	static uint64_t t78 = 102910660987LLU;

	t78 = ((x361&x362)|(x363+x364));

	if (t78 != 18446744072367216639LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int8_t x366 = 1;
	volatile int16_t x367 = 3617;
	int32_t x368 = -1;

	t79 = ((x365&x366)|(x367+x368));

	if (t79 != 3617LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x369 = INT16_MIN;
	int8_t x372 = 0;
	volatile int32_t t80 = 1726;

	t80 = ((x369&x370)|(x371+x372));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x374 = INT64_MIN;
	int8_t x376 = INT8_MAX;
	int64_t t81 = 39LL;

	t81 = ((x373&x374)|(x375+x376));

	if (t81 != 65662LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x378 = -223653151500121857LL;
	volatile int64_t t82 = 218702479933LL;

	t82 = ((x377&x378)|(x379+x380));

	if (t82 != -9223372036854767166LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = INT16_MIN;
	uint32_t x382 = UINT32_MAX;
	uint8_t x383 = 41U;
	uint32_t x384 = 24335145U;

	t83 = ((x381&x382)|(x383+x384));

	if (t83 != 4294955858U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x385 = INT64_MIN;
	int32_t x386 = -1;
	volatile int32_t x388 = 5193009;
	int64_t t84 = 0LL;

	t84 = ((x385&x386)|(x387+x388));

	if (t84 != -9223372036849582806LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x389 = 60U;
	static volatile uint16_t x390 = 10969U;
	volatile uint16_t x391 = 3918U;
	uint16_t x392 = 13U;
	int32_t t85 = 955;

	t85 = ((x389&x390)|(x391+x392));

	if (t85 != 3931) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x395 = 1168;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t86 = 1026LLU;

	t86 = ((x393&x394)|(x395+x396));

	if (t86 != 438559795313823LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x397 = UINT16_MAX;
	static uint64_t x398 = 7LLU;
	uint64_t x399 = 233597556203LLU;
	uint16_t x400 = 1258U;
	static uint64_t t87 = 2116872952629070039LLU;

	t87 = ((x397&x398)|(x399+x400));

	if (t87 != 233597557463LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x401 = -1LL;
	int64_t x402 = INT64_MAX;
	int64_t x403 = INT64_MIN;
	volatile int64_t t88 = -928541862723950LL;

	t88 = ((x401&x402)|(x403+x404));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = INT16_MAX;
	static int16_t x406 = INT16_MAX;
	int64_t x407 = 1LL;
	int32_t x408 = 1947524;

	t89 = ((x405&x406)|(x407+x408));

	if (t89 != 1966079LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x409 = 10848846415888612LLU;
	int32_t x410 = 7274180;
	int64_t x411 = -5605261241240LL;
	static uint16_t x412 = 79U;
	volatile uint64_t t90 = 40066LLU;

	t90 = ((x409&x410)|(x411+x412));

	if (t90 != 18446738468448474359LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x413 = 45852414U;
	static int64_t x414 = INT64_MIN;
	int8_t x415 = -1;
	int16_t x416 = 146;
	int64_t t91 = 830255LL;

	t91 = ((x413&x414)|(x415+x416));

	if (t91 != 145LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x418 = INT64_MAX;
	volatile int64_t x420 = INT64_MIN;
	uint64_t t92 = 22573835456752LLU;

	t92 = ((x417&x418)|(x419+x420));

	if (t92 != 9223372038254100459LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x421 = 36;
	int64_t x422 = -1LL;
	uint64_t x424 = 67314021196126803LLU;
	volatile uint64_t t93 = 175648LLU;

	t93 = ((x421&x422)|(x423+x424));

	if (t93 != 67314021196126838LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = -2109950763LL;
	int32_t x426 = -1;
	uint64_t x427 = UINT64_MAX;
	uint32_t x428 = 4308U;
	volatile uint64_t t94 = 4002555755689LLU;

	t94 = ((x425&x426)|(x427+x428));

	if (t94 != 18446744071599600855LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = -1LL;
	int8_t x430 = 7;
	static int16_t x431 = INT16_MIN;
	int64_t x432 = -1LL;
	int64_t t95 = 561752365783943602LL;

	t95 = ((x429&x430)|(x431+x432));

	if (t95 != -32769LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x434 = INT16_MAX;
	int8_t x435 = 1;
	volatile uint8_t x436 = 24U;

	t96 = ((x433&x434)|(x435+x436));

	if (t96 != 27417) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = 248604571250047LL;
	static uint32_t x439 = 6U;
	static volatile int8_t x440 = INT8_MAX;
	static volatile int64_t t97 = 599195798759854LL;

	t97 = ((x437&x438)|(x439+x440));

	if (t97 != 248604571250053LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x442 = INT16_MAX;
	int8_t x443 = INT8_MIN;
	int64_t x444 = INT64_MAX;
	int64_t t98 = 83492203811LL;

	t98 = ((x441&x442)|(x443+x444));

	if (t98 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x445 = INT32_MAX;
	int64_t x447 = INT64_MIN;
	int8_t x448 = INT8_MAX;

	t99 = ((x445&x446)|(x447+x448));

	if (t99 != -9223372036854775553LL) { NG(); } else { ; }
	
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

