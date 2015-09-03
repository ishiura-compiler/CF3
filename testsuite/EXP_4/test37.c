#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x7 = INT8_MIN;
volatile uint64_t t1 = 13443932491400LLU;
volatile int32_t x21 = -8373045;
static uint16_t x36 = UINT16_MAX;
uint8_t x41 = 120U;
int8_t x44 = INT8_MIN;
int32_t x50 = -1;
static volatile int64_t t8 = -58599027LL;
int8_t x54 = INT8_MIN;
uint64_t t10 = 125302LLU;
static volatile uint32_t t11 = 49U;
static volatile int64_t x74 = -6381434857427LL;
int16_t x75 = 16;
int16_t x76 = -831;
int16_t x78 = -1;
static uint16_t x79 = UINT16_MAX;
volatile int32_t t13 = 198711;
int32_t x81 = INT32_MAX;
static volatile uint64_t x91 = UINT64_MAX;
uint16_t x105 = 14U;
uint64_t x108 = 2954271908952LLU;
int32_t x109 = INT32_MAX;
int16_t x111 = 14454;
static uint64_t x112 = 106911151392891LLU;
volatile uint16_t x130 = UINT16_MAX;
volatile uint16_t x133 = UINT16_MAX;
int64_t x134 = 24161069652638LL;
int32_t x137 = INT32_MIN;
static int64_t x152 = 1847165741808LL;
int64_t t25 = -289010LL;
static int32_t x154 = -50620;
uint8_t x167 = 1U;
int32_t x168 = INT32_MIN;
uint32_t t30 = 4539U;
static volatile uint16_t x183 = 2811U;
static uint32_t x184 = UINT32_MAX;
uint16_t x185 = 3U;
static volatile int32_t t35 = 1143862;
static uint16_t x204 = 8U;
volatile int8_t x206 = INT8_MIN;
int32_t x207 = 293;
volatile uint32_t t37 = 298U;
static int64_t t38 = 68LL;
volatile uint64_t x213 = UINT64_MAX;
volatile int8_t x214 = -1;
int8_t x232 = INT8_MAX;
volatile int8_t x240 = INT8_MAX;
uint16_t x241 = UINT16_MAX;
int32_t x242 = -4;
volatile uint64_t t44 = 1LLU;
uint8_t x247 = 3U;
int32_t t45 = -11;
static volatile int8_t x250 = INT8_MAX;
uint64_t t46 = 3588185813LLU;
uint32_t t47 = 159715U;
static volatile int8_t x258 = INT8_MAX;
int16_t x263 = -1;
uint64_t t49 = 1402275190892839610LLU;
static uint32_t x266 = UINT32_MAX;
volatile uint32_t t52 = 90373U;
static uint16_t x284 = UINT16_MAX;
static uint64_t t53 = 17398300108LLU;
int16_t x285 = INT16_MAX;
volatile uint16_t x292 = UINT16_MAX;
static volatile uint64_t t55 = 10246927649LLU;
static int32_t t57 = 1;
uint64_t x303 = UINT64_MAX;
int8_t x312 = 1;
volatile int8_t x322 = INT8_MIN;
int32_t x323 = -1;
uint64_t x338 = 1861860LLU;
uint8_t x340 = UINT8_MAX;
volatile uint64_t t64 = 78603LLU;
uint16_t x358 = 25U;
uint64_t x360 = UINT64_MAX;
int32_t x366 = 14;
volatile uint64_t x369 = 6078799562513544900LLU;
static int64_t x373 = INT64_MAX;
int8_t x401 = -1;
int16_t x406 = INT16_MIN;
int8_t x418 = INT8_MAX;
uint8_t x422 = 109U;
uint16_t x433 = 7U;
uint16_t x434 = UINT16_MAX;
static int64_t t76 = -28LL;
volatile int32_t x458 = -1;
static int16_t x465 = INT16_MIN;
uint32_t x467 = 1766171U;
int8_t x472 = -1;
static volatile int32_t t80 = 7979401;
int64_t x481 = -89LL;
int64_t x484 = 334511861700049063LL;
static uint64_t x490 = 2396LLU;
volatile uint32_t x491 = UINT32_MAX;
int16_t x494 = 640;
int64_t x495 = -1LL;
uint64_t x500 = UINT64_MAX;
volatile int32_t t90 = -190;
int8_t x532 = INT8_MAX;
volatile uint64_t t91 = 273LLU;
uint32_t x534 = 9170U;
int64_t x536 = -3223994141348LL;
volatile int64_t t92 = -410836642LL;
uint32_t x541 = 108745811U;
static int64_t t95 = 53288969217LL;
uint16_t x556 = UINT16_MAX;
volatile uint64_t t96 = 4793LLU;
uint64_t t97 = 279810678LLU;
uint32_t x564 = UINT32_MAX;
static int32_t x569 = -1203553;
int8_t x571 = 3;
volatile uint16_t x572 = 14U;


void f0(void) {
	uint16_t x5 = 55U;
	static uint16_t x6 = 19U;
	static int64_t x8 = 249638311LL;
	int64_t t0 = -1194636601297570LL;

	t0 = (x5&(x6*(x7+x8)));

	if (t0 != 37LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 1443U;
	static int8_t x14 = INT8_MIN;
	volatile uint64_t x15 = UINT64_MAX;
	static uint16_t x16 = 87U;

	t1 = (x13&(x14*(x15+x16)));

	if (t1 != 1280LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x22 = INT8_MAX;
	volatile int8_t x23 = INT8_MIN;
	uint16_t x24 = 120U;
	volatile int32_t t2 = -2229418;

	t2 = (x21&(x22*(x23+x24)));

	if (t2 != -8373240) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x29 = 1U;
	int8_t x30 = INT8_MAX;
	uint64_t x31 = 7LLU;
	int16_t x32 = 73;
	uint64_t t3 = 10685531LLU;

	t3 = (x29&(x30*(x31+x32)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = 33;
	volatile int32_t t4 = 16956;

	t4 = (x33&(x34*(x35+x36)));

	if (t4 != 16719840) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x37 = 29348U;
	int32_t x38 = -17682;
	uint32_t x39 = 14506U;
	int8_t x40 = INT8_MIN;
	volatile uint32_t t5 = 13845U;

	t5 = (x37&(x38*(x39+x40)));

	if (t5 != 12804U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x42 = 7463396968657274100LLU;
	uint8_t x43 = 0U;
	uint64_t t6 = 200361069404127639LLU;

	t6 = (x41&(x42*(x43+x44)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = -33;
	int64_t x46 = INT64_MAX;
	uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 22U;
	volatile uint64_t t7 = 14417LLU;

	t7 = (x45&(x46*(x47+x48)));

	if (t7 != 9223372036854775755LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MIN;
	volatile int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MAX;

	t8 = (x49&(x50*(x51+x52)));

	if (t8 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x53 = 2152815LLU;
	uint64_t x55 = 15070083LLU;
	uint64_t x56 = UINT64_MAX;
	uint64_t t9 = 2322920792LLU;

	t9 = (x53&(x54*(x55+x56)));

	if (t9 != 6400LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = INT16_MIN;
	uint64_t x66 = 814LLU;
	int8_t x67 = -1;
	uint16_t x68 = 57U;

	t10 = (x65&(x66*(x67+x68)));

	if (t10 != 32768LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MAX;
	int8_t x71 = INT8_MIN;
	static uint32_t x72 = UINT32_MAX;

	t11 = (x69&(x70*(x71+x72)));

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x73 = 13584526862LLU;
	uint64_t t12 = 9971907521LLU;

	t12 = (x73&(x74*(x75+x76)));

	if (t12 != 4322363404LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x77 = INT16_MIN;
	int8_t x80 = -6;

	t13 = (x77&(x78*(x79+x80)));

	if (t13 != -65536) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x82 = INT32_MAX;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MAX;
	static volatile int32_t t14 = -230;

	t14 = (x81&(x82*(x83+x84)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x85 = UINT64_MAX;
	static int8_t x86 = INT8_MIN;
	int64_t x87 = -12229999824446LL;
	volatile uint64_t x88 = 5393275149930747530LLU;
	volatile uint64_t t15 = 26317LLU;

	t15 = (x85&(x86*(x87+x88)));

	if (t15 != 10638621049804806656LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x89 = -1;
	volatile uint16_t x90 = 12U;
	uint32_t x92 = 857959U;
	uint64_t t16 = 2005977LLU;

	t16 = (x89&(x90*(x91+x92)));

	if (t16 != 10295496LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x97 = INT16_MAX;
	uint8_t x98 = 23U;
	volatile int8_t x99 = -1;
	uint64_t x100 = 54842LLU;
	volatile uint64_t t17 = 3550503LLU;

	t17 = (x97&(x98*(x99+x100)));

	if (t17 != 16159LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x106 = INT8_MAX;
	static int16_t x107 = INT16_MIN;
	uint64_t t18 = 63204165576187LLU;

	t18 = (x105&(x106*(x107+x108)));

	if (t18 != 8LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x110 = UINT16_MAX;
	uint64_t t19 = 3816556800494925585LLU;

	t19 = (x109&(x110*(x111+x112)));

	if (t19 != 264060687LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x129 = INT16_MIN;
	uint32_t x131 = 211645458U;
	uint16_t x132 = 19U;
	uint32_t t20 = 7171U;

	t20 = (x129&(x130*(x131+x132)));

	if (t20 != 1736933376U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x135 = 5;
	volatile uint16_t x136 = 1836U;
	int64_t t21 = 4096LL;

	t21 = (x133&(x134*(x135+x136)));

	if (t21 != 43582LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x138 = INT8_MIN;
	uint16_t x139 = 1U;
	uint8_t x140 = 53U;
	static int32_t t22 = INT32_MIN;

	t22 = (x137&(x138*(x139+x140)));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x141 = INT64_MAX;
	uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	uint16_t x144 = UINT16_MAX;
	int64_t t23 = -466861503719118221LL;

	t23 = (x141&(x142*(x143+x144)));

	if (t23 != 4294934529LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x145 = UINT16_MAX;
	int16_t x146 = -1;
	int64_t x147 = INT64_MIN;
	static int64_t x148 = 1082316010LL;
	int64_t t24 = -3942718912445LL;

	t24 = (x145&(x146*(x147+x148)));

	if (t24 != 11030LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x149 = INT32_MAX;
	int8_t x150 = INT8_MAX;
	static uint32_t x151 = 56104U;

	t25 = (x149&(x150*(x151+x152)));

	if (t25 != 1090110952LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x153 = -1;
	int64_t x155 = 8165220LL;
	static uint64_t x156 = 19715720483570007LLU;
	volatile uint64_t t26 = 6851LLU;

	t26 = (x153&(x154*(x155+x156)));

	if (t26 != 16561152762388148140LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x157 = 55;
	int8_t x158 = 0;
	int8_t x159 = INT8_MIN;
	static int16_t x160 = -1;
	int32_t t27 = -3475826;

	t27 = (x157&(x158*(x159+x160)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x161 = 29;
	int8_t x162 = -1;
	uint16_t x163 = 112U;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t28 = 4804U;

	t28 = (x161&(x162*(x163+x164)));

	if (t28 != 17U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x165 = INT8_MAX;
	static uint64_t x166 = 15LLU;
	volatile uint64_t t29 = 18411066230062LLU;

	t29 = (x165&(x166*(x167+x168)));

	if (t29 != 15LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x177 = -1;
	volatile uint32_t x178 = UINT32_MAX;
	uint16_t x179 = UINT16_MAX;
	uint16_t x180 = 29981U;

	t30 = (x177&(x178*(x179+x180)));

	if (t30 != 4294871780U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x181 = 25050624LL;
	volatile int8_t x182 = 5;
	int64_t t31 = -467885463911109596LL;

	t31 = (x181&(x182*(x183+x184)));

	if (t31 != 13824LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x186 = 3;
	uint32_t x187 = 81169U;
	int32_t x188 = INT32_MIN;
	uint32_t t32 = 1871U;

	t32 = (x185&(x186*(x187+x188)));

	if (t32 != 3U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x189 = INT8_MAX;
	int8_t x190 = -1;
	static volatile int8_t x191 = INT8_MIN;
	uint16_t x192 = 31657U;
	static volatile int32_t t33 = 2749;

	t33 = (x189&(x190*(x191+x192)));

	if (t33 != 87) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x193 = INT32_MIN;
	int16_t x194 = -1;
	uint8_t x195 = 3U;
	int8_t x196 = INT8_MAX;
	volatile int32_t t34 = INT32_MIN;

	t34 = (x193&(x194*(x195+x196)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x197 = -1;
	uint16_t x198 = UINT16_MAX;
	volatile uint8_t x199 = 26U;
	static int16_t x200 = 212;

	t35 = (x197&(x198*(x199+x200)));

	if (t35 != 15597330) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x201 = 143954LLU;
	static uint64_t x202 = 5LLU;
	volatile int8_t x203 = -7;
	uint64_t t36 = 31453710LLU;

	t36 = (x201&(x202*(x203+x204)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x205 = 1U;
	uint32_t x208 = UINT32_MAX;

	t37 = (x205&(x206*(x207+x208)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x209 = INT16_MAX;
	volatile int64_t x210 = -1LL;
	uint16_t x211 = 106U;
	static uint8_t x212 = 16U;

	t38 = (x209&(x210*(x211+x212)));

	if (t38 != 32646LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x215 = INT8_MIN;
	int32_t x216 = 13843;
	uint64_t t39 = 3003LLU;

	t39 = (x213&(x214*(x215+x216)));

	if (t39 != 18446744073709537901LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x221 = -10602312;
	int16_t x222 = INT16_MAX;
	volatile int64_t x223 = -1917269045045752707LL;
	static volatile uint64_t x224 = 8495989819238294LLU;
	static volatile uint64_t t40 = 833847570277451234LLU;

	t40 = (x221&(x222*(x223+x224)));

	if (t40 != 8142453341881239720LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x229 = UINT64_MAX;
	int64_t x230 = -1LL;
	int32_t x231 = INT32_MIN;
	static uint64_t t41 = 7987328702LLU;

	t41 = (x229&(x230*(x231+x232)));

	if (t41 != 2147483521LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x233 = -1598;
	uint64_t x234 = 2954254LLU;
	static volatile uint8_t x235 = 3U;
	uint64_t x236 = 37152658233641LLU;
	volatile uint64_t t42 = 8554733510704LLU;

	t42 = (x233&(x234*(x235+x236)));

	if (t42 != 17524668828827963456LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x237 = UINT16_MAX;
	uint16_t x238 = 358U;
	int16_t x239 = INT16_MIN;
	volatile int32_t t43 = -238709278;

	t43 = (x237&(x238*(x239+x240)));

	if (t43 != 45466) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x243 = 2LLU;
	int64_t x244 = INT64_MAX;

	t44 = (x241&(x242*(x243+x244)));

	if (t44 != 65532LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x245 = INT32_MAX;
	static int16_t x246 = 0;
	static int32_t x248 = -1;

	t45 = (x245&(x246*(x247+x248)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x251 = 3491161LLU;
	static int16_t x252 = INT16_MIN;

	t46 = (x249&(x250*(x251+x252)));

	if (t46 != 439189504LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x253 = 30915U;
	uint16_t x254 = 55U;
	static int8_t x255 = INT8_MIN;
	volatile uint8_t x256 = UINT8_MAX;

	t47 = (x253&(x254*(x255+x256)));

	if (t47 != 6209U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x257 = 13746LLU;
	int8_t x259 = INT8_MAX;
	volatile int16_t x260 = INT16_MIN;
	volatile uint64_t t48 = 29396964382715581LLU;

	t48 = (x257&(x258*(x259+x260)));

	if (t48 != 13568LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x261 = -1;
	uint64_t x262 = UINT64_MAX;
	uint8_t x264 = UINT8_MAX;

	t49 = (x261&(x262*(x263+x264)));

	if (t49 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x265 = INT64_MIN;
	static uint8_t x267 = 100U;
	static volatile int32_t x268 = -1;
	static int64_t t50 = -145421473LL;

	t50 = (x265&(x266*(x267+x268)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x269 = INT16_MAX;
	static int16_t x270 = -2390;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -1LL;
	int64_t t51 = -49273LL;

	t51 = (x269&(x270*(x271+x272)));

	if (t51 != 13398LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x277 = INT32_MAX;
	uint32_t x278 = 461790563U;
	static int8_t x279 = INT8_MIN;
	uint32_t x280 = 207U;

	t52 = (x277&(x278*(x279+x280)));

	if (t52 != 2121716109U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MAX;
	uint64_t x283 = 385311LLU;

	t53 = (x281&(x282*(x283+x284)));

	if (t53 != 57257344LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x286 = UINT8_MAX;
	volatile int16_t x287 = INT16_MIN;
	int32_t x288 = -1;
	int32_t t54 = 116;

	t54 = (x285&(x286*(x287+x288)));

	if (t54 != 32513) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x289 = UINT64_MAX;
	volatile int64_t x290 = 1LL;
	uint8_t x291 = 97U;

	t55 = (x289&(x290*(x291+x292)));

	if (t55 != 65632LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x293 = 16493U;
	uint32_t x294 = 1U;
	volatile int32_t x295 = INT32_MAX;
	int16_t x296 = -1;
	volatile uint32_t t56 = 12U;

	t56 = (x293&(x294*(x295+x296)));

	if (t56 != 16492U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x297 = -1;
	static volatile uint16_t x298 = UINT16_MAX;
	int8_t x299 = INT8_MIN;
	int8_t x300 = -3;

	t57 = (x297&(x298*(x299+x300)));

	if (t57 != -8585085) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;
	uint64_t t58 = 2LLU;

	t58 = (x301&(x302*(x303+x304)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x305 = 910312;
	int16_t x306 = -1;
	int16_t x307 = INT16_MAX;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t59 = 21349;

	t59 = (x305&(x306*(x307+x308)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x309 = 84U;
	int32_t x310 = INT32_MIN;
	volatile int8_t x311 = -1;
	volatile int32_t t60 = -1;

	t60 = (x309&(x310*(x311+x312)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x313 = 74U;
	static volatile int16_t x314 = -231;
	int64_t x315 = -1244459707LL;
	int32_t x316 = -2334507;
	volatile int64_t t61 = -2278LL;

	t61 = (x313&(x314*(x315+x316)));

	if (t61 != 10LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x321 = INT16_MAX;
	uint8_t x324 = 31U;
	int32_t t62 = 11;

	t62 = (x321&(x322*(x323+x324)));

	if (t62 != 28928) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MIN;
	uint16_t x331 = 16654U;
	int8_t x332 = 17;
	static volatile int32_t t63 = -184327824;

	t63 = (x329&(x330*(x331+x332)));

	if (t63 != 28800) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x337 = -29;
	volatile int64_t x339 = INT64_MIN;

	t64 = (x337&(x338*(x339+x340)));

	if (t64 != 474774272LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x341 = 1U;
	volatile uint32_t x342 = UINT32_MAX;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = UINT8_MAX;
	uint32_t t65 = 374U;

	t65 = (x341&(x342*(x343+x344)));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x357 = INT32_MIN;
	int32_t x359 = -39599358;
	static uint64_t t66 = 25759LLU;

	t66 = (x357&(x358*(x359+x360)));

	if (t66 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x365 = INT16_MIN;
	static int8_t x367 = 1;
	uint64_t x368 = 538143LLU;
	volatile uint64_t t67 = 2666LLU;

	t67 = (x365&(x366*(x367+x368)));

	if (t67 != 7503872LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x370 = 54;
	int8_t x371 = -1;
	int8_t x372 = INT8_MAX;
	volatile uint64_t t68 = 7048LLU;

	t68 = (x369&(x370*(x371+x372)));

	if (t68 != 4740LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x374 = INT8_MIN;
	static volatile int8_t x375 = -1;
	uint16_t x376 = 3517U;
	int64_t t69 = 49871634789509185LL;

	t69 = (x373&(x374*(x375+x376)));

	if (t69 != 9223372036854325760LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x402 = -1LL;
	volatile int64_t x403 = INT64_MIN;
	uint16_t x404 = 1U;
	int64_t t70 = INT64_MAX;

	t70 = (x401&(x402*(x403+x404)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x405 = -231;
	volatile int16_t x407 = INT16_MAX;
	int8_t x408 = INT8_MIN;
	volatile int32_t t71 = -2158;

	t71 = (x405&(x406*(x407+x408)));

	if (t71 != -1069514752) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x417 = 933;
	int64_t x419 = -259178619892175LL;
	uint16_t x420 = UINT16_MAX;
	static volatile int64_t t72 = -3075873LL;

	t72 = (x417&(x418*(x419+x420)));

	if (t72 != 384LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x421 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	volatile int32_t x424 = -1;
	int32_t t73 = 3;

	t73 = (x421&(x422*(x423+x424)));

	if (t73 != -3571840) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x425 = INT32_MAX;
	uint64_t x426 = UINT64_MAX;
	volatile uint64_t x427 = 909176922999846LLU;
	static uint64_t x428 = 103LLU;
	static uint64_t t74 = 6350342LLU;

	t74 = (x425&(x426*(x427+x428)));

	if (t74 != 1081570163LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x435 = UINT64_MAX;
	static int8_t x436 = INT8_MIN;
	volatile uint64_t t75 = 323008LLU;

	t75 = (x433&(x434*(x435+x436)));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x453 = INT64_MAX;
	static int16_t x454 = INT16_MIN;
	int8_t x455 = 5;
	volatile int64_t x456 = -41261LL;

	t76 = (x453&(x454*(x455+x456)));

	if (t76 != 1351876608LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x457 = INT8_MAX;
	uint32_t x459 = 1045969U;
	int32_t x460 = -1;
	uint32_t t77 = 1818022U;

	t77 = (x457&(x458*(x459+x460)));

	if (t77 != 48U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x461 = INT32_MIN;
	int16_t x462 = 7753;
	int8_t x463 = INT8_MIN;
	uint16_t x464 = UINT16_MAX;
	int32_t t78 = 29;

	t78 = (x461&(x462*(x463+x464)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x466 = -7249;
	volatile uint64_t x468 = UINT64_MAX;
	volatile uint64_t t79 = 5349224LLU;

	t79 = (x465&(x466*(x467+x468)));

	if (t79 != 18446744060906569728LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x469 = -1;
	int8_t x470 = INT8_MIN;
	static int8_t x471 = INT8_MIN;

	t80 = (x469&(x470*(x471+x472)));

	if (t80 != 16512) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x473 = -1;
	volatile uint8_t x474 = UINT8_MAX;
	static int32_t x475 = -611;
	int8_t x476 = INT8_MAX;
	volatile int32_t t81 = -1253972;

	t81 = (x473&(x474*(x475+x476)));

	if (t81 != -123420) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x477 = INT8_MIN;
	static uint16_t x478 = 111U;
	uint64_t x479 = 24LLU;
	uint16_t x480 = 3486U;
	static volatile uint64_t t82 = 48902147LLU;

	t82 = (x477&(x478*(x479+x480)));

	if (t82 != 389504LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x482 = UINT8_MAX;
	uint64_t x483 = UINT64_MAX;
	uint64_t t83 = 84LLU;

	t83 = (x481&(x482*(x483+x484)));

	if (t83 != 11513548438674304258LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x485 = INT64_MIN;
	volatile int64_t x486 = 12762048LL;
	int32_t x487 = INT32_MIN;
	uint32_t x488 = 1982159U;
	volatile int64_t t84 = 12326147327LL;

	t84 = (x485&(x486*(x487+x488)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x489 = 102U;
	static int8_t x492 = INT8_MIN;
	volatile uint64_t t85 = 1LLU;

	t85 = (x489&(x490*(x491+x492)));

	if (t85 != 36LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x493 = -1;
	int32_t x496 = -1;
	volatile int64_t t86 = -70289899165517LL;

	t86 = (x493&(x494*(x495+x496)));

	if (t86 != -1280LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x497 = -1796885LL;
	int8_t x498 = -24;
	volatile int8_t x499 = 49;
	uint64_t t87 = 785LLU;

	t87 = (x497&(x498*(x499+x500)));

	if (t87 != 18446744073707753600LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x501 = 1964U;
	static uint16_t x502 = UINT16_MAX;
	static int64_t x503 = 11LL;
	int16_t x504 = INT16_MIN;
	volatile int64_t t88 = 511LL;

	t88 = (x501&(x502*(x503+x504)));

	if (t88 != 1956LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x505 = 124487743U;
	int32_t x506 = 37;
	int8_t x507 = -1;
	int16_t x508 = INT16_MAX;
	volatile uint32_t t89 = 2486127U;

	t89 = (x505&(x506*(x507+x508)));

	if (t89 != 133174U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x513 = UINT8_MAX;
	int16_t x514 = 1;
	uint8_t x515 = UINT8_MAX;
	static uint8_t x516 = 2U;

	t90 = (x513&(x514*(x515+x516)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x529 = 12;
	uint16_t x530 = 18U;
	uint64_t x531 = UINT64_MAX;

	t91 = (x529&(x530*(x531+x532)));

	if (t91 != 12LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x533 = INT16_MIN;
	volatile uint32_t x535 = UINT32_MAX;

	t92 = (x533&(x534*(x535+x536)));

	if (t92 != -29524641426079744LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x542 = 89352;
	int16_t x543 = INT16_MAX;
	volatile int16_t x544 = INT16_MIN;
	uint32_t t93 = 1763031U;

	t93 = (x541&(x542*(x543+x544)));

	if (t93 != 108658768U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x545 = INT64_MIN;
	int8_t x546 = INT8_MIN;
	int32_t x547 = 15378886;
	uint8_t x548 = 0U;
	static int64_t t94 = INT64_MIN;

	t94 = (x545&(x546*(x547+x548)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x549 = -1LL;
	int8_t x550 = INT8_MAX;
	uint8_t x551 = UINT8_MAX;
	int32_t x552 = -1;

	t95 = (x549&(x550*(x551+x552)));

	if (t95 != 32258LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x553 = UINT64_MAX;
	int8_t x554 = INT8_MIN;
	uint64_t x555 = UINT64_MAX;

	t96 = (x553&(x554*(x555+x556)));

	if (t96 != 18446744073701163264LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x557 = -21033;
	int32_t x558 = INT32_MIN;
	uint64_t x559 = 1647967972712734LLU;
	static volatile int16_t x560 = -1;

	t97 = (x557&(x558*(x559+x560)));

	if (t97 != 5129968799449088000LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x561 = 5U;
	int8_t x562 = INT8_MIN;
	volatile int16_t x563 = INT16_MIN;
	volatile uint32_t t98 = 183U;

	t98 = (x561&(x562*(x563+x564)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x570 = 2401766386904107LL;
	volatile int64_t t99 = -957407LL;

	t99 = (x569&(x570*(x571+x572)));

	if (t99 != 40830028577350299LL) { NG(); } else { ; }
	
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

