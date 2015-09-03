#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
int64_t x14 = INT64_MAX;
int16_t x15 = -20;
volatile uint32_t x19 = 182386U;
volatile int32_t t4 = 691;
volatile int64_t x21 = INT64_MIN;
uint64_t x23 = 2005LLU;
uint64_t x28 = 331606367LLU;
volatile int64_t x30 = 5248771081993LL;
int8_t x32 = -1;
int32_t t7 = 136;
volatile uint64_t x37 = UINT64_MAX;
static uint64_t x38 = 607810492649LLU;
uint64_t x44 = 63428415LLU;
int64_t x48 = -367LL;
int64_t x49 = INT64_MIN;
int8_t x54 = INT8_MIN;
int32_t t13 = -122545;
static volatile int32_t t14 = 1;
uint16_t x75 = 1472U;
volatile int32_t t16 = -204;
volatile int16_t x89 = INT16_MIN;
static uint64_t x91 = 24LLU;
volatile uint64_t x92 = 130LLU;
int32_t t18 = 138165380;
int8_t x107 = -1;
int16_t x122 = 1674;
int16_t x133 = INT16_MIN;
static volatile int32_t t23 = -466;
static int32_t x145 = INT32_MAX;
int64_t x146 = -1LL;
uint32_t x148 = 35468U;
int16_t x167 = INT16_MIN;
static uint8_t x175 = 9U;
volatile int32_t t32 = 29;
int32_t t33 = -7095407;
int16_t x198 = INT16_MIN;
static int32_t t35 = -1;
int16_t x206 = INT16_MAX;
static uint8_t x208 = 39U;
static volatile int32_t t37 = 976005436;
volatile int32_t t38 = 89;
uint8_t x228 = 17U;
static int32_t x229 = INT32_MIN;
int32_t t40 = -330;
int32_t t41 = -4098;
int64_t x237 = INT64_MIN;
int8_t x245 = 1;
static uint8_t x252 = UINT8_MAX;
volatile int32_t t44 = -14595747;
int8_t x258 = INT8_MIN;
static int8_t x260 = 20;
volatile int32_t t46 = 8;
int8_t x261 = 2;
static int32_t x264 = INT32_MAX;
int8_t x267 = INT8_MIN;
int32_t t49 = 1040679;
int8_t x275 = -1;
int16_t x277 = INT16_MAX;
uint64_t x280 = 652LLU;
volatile int32_t t51 = -17176734;
volatile int32_t t52 = -1;
uint8_t x314 = UINT8_MAX;
int32_t t56 = 1;
volatile int32_t t57 = -15;
int32_t x339 = INT32_MAX;
static uint64_t x346 = UINT64_MAX;
volatile int32_t t61 = 7910;
volatile int8_t x351 = -1;
int8_t x355 = INT8_MIN;
volatile int32_t t63 = 212;
uint16_t x358 = 591U;
int16_t x394 = -6424;
static int16_t x403 = 190;
static volatile int32_t t69 = 56463;
int32_t x405 = -4329;
static volatile uint16_t x410 = 4U;
static int16_t x412 = INT16_MAX;
uint32_t x417 = 10859U;
int8_t x419 = INT8_MAX;
static int16_t x425 = INT16_MIN;
static int8_t x428 = 8;
volatile int32_t t74 = 706680244;
int64_t x430 = -1LL;
volatile int8_t x431 = INT8_MIN;
static uint16_t x433 = UINT16_MAX;
static volatile int32_t t76 = 27204;
int32_t t77 = -1828;
uint32_t x443 = 17656061U;
int16_t x444 = -2;
int8_t x445 = INT8_MIN;
int8_t x446 = INT8_MAX;
int64_t x454 = INT64_MIN;
int8_t x463 = 4;
uint32_t x464 = 6986273U;
volatile int16_t x467 = -2804;
uint8_t x494 = 92U;
uint64_t x495 = 20226909LLU;
static int16_t x496 = INT16_MIN;
int64_t x502 = INT64_MAX;
volatile uint16_t x503 = 133U;
int32_t t88 = -10611;
int32_t x509 = INT32_MAX;
static int8_t x525 = INT8_MAX;
int16_t x528 = -1;
uint8_t x535 = 0U;
int32_t x536 = -1;
volatile int64_t x541 = INT64_MAX;
uint8_t x557 = 8U;
int16_t x558 = INT16_MIN;
int16_t x560 = -1;
volatile int32_t t99 = 28;


void f0(void) {
	static uint16_t x1 = 7U;
	int32_t x2 = INT32_MAX;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = 355;
	volatile int32_t t0 = -16;

	t0 = (x1<=(x2<(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MAX;
	volatile int32_t x7 = -1;
	int16_t x8 = -8177;
	int32_t t1 = 0;

	t1 = (x5<=(x6<(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 101U;
	int8_t x11 = INT8_MAX;
	int64_t x12 = -939402310435LL;
	static volatile int32_t t2 = -7005691;

	t2 = (x9<=(x10<(x11*x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x13 = 443U;
	int8_t x16 = -1;
	static int32_t t3 = 970946;

	t3 = (x13<=(x14<(x15*x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 1U;
	static int32_t x18 = -2011865;
	int32_t x20 = 1;

	t4 = (x17<=(x18<(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -105;
	volatile uint32_t x24 = UINT32_MAX;
	int32_t t5 = -3;

	t5 = (x21<=(x22<(x23*x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 244;
	int64_t x26 = -1LL;
	volatile int8_t x27 = INT8_MIN;
	volatile int32_t t6 = -4388010;

	t6 = (x25<=(x26<(x27*x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x29 = 40321404488LLU;
	uint16_t x31 = 12U;

	t7 = (x29<=(x30<(x31*x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x39 = 37;
	int8_t x40 = INT8_MAX;
	static volatile int32_t t8 = 4668;

	t8 = (x37<=(x38<(x39*x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	uint16_t x42 = UINT16_MAX;
	int32_t x43 = INT32_MIN;
	int32_t t9 = 198361;

	t9 = (x41<=(x42<(x43*x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = 5U;
	static uint16_t x46 = 890U;
	int32_t x47 = INT32_MAX;
	int32_t t10 = -6207702;

	t10 = (x45<=(x46<(x47*x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x50 = 2U;
	uint32_t x51 = 29U;
	static int32_t x52 = -14024758;
	volatile int32_t t11 = 24;

	t11 = (x49<=(x50<(x51*x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x55 = INT8_MAX;
	volatile uint32_t x56 = 13329822U;
	int32_t t12 = -38;

	t12 = (x53<=(x54<(x55*x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x61 = -67852;
	uint32_t x62 = 72451U;
	uint64_t x63 = 140095474LLU;
	static int8_t x64 = INT8_MIN;

	t13 = (x61<=(x62<(x63*x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = -1;
	uint64_t x66 = 1169856174534930565LLU;
	int16_t x67 = 15;
	uint32_t x68 = 99U;

	t14 = (x65<=(x66<(x67*x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = -1;
	volatile uint16_t x74 = 0U;
	uint16_t x76 = 6089U;
	static volatile int32_t t15 = 4791;

	t15 = (x73<=(x74<(x75*x76)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = UINT32_MAX;
	uint16_t x78 = 0U;
	uint16_t x79 = 1U;
	int16_t x80 = INT16_MIN;

	t16 = (x77<=(x78<(x79*x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x90 = -1;
	volatile int32_t t17 = -1837;

	t17 = (x89<=(x90<(x91*x92)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MIN;
	int32_t x99 = -1;
	int64_t x100 = -1LL;

	t18 = (x97<=(x98<(x99*x100)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x105 = INT32_MAX;
	int16_t x106 = 143;
	volatile uint32_t x108 = 13304721U;
	int32_t t19 = 106804633;

	t19 = (x105<=(x106<(x107*x108)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = 530;
	int8_t x110 = -1;
	volatile int16_t x111 = INT16_MAX;
	int64_t x112 = 68639LL;
	volatile int32_t t20 = -486758472;

	t20 = (x109<=(x110<(x111*x112)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x117 = -1;
	static volatile int8_t x118 = -1;
	static volatile int32_t x119 = -223;
	static volatile int16_t x120 = 125;
	int32_t t21 = -686051937;

	t21 = (x117<=(x118<(x119*x120)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x121 = -1;
	uint8_t x123 = 1U;
	uint32_t x124 = 18671315U;
	volatile int32_t t22 = -3263010;

	t22 = (x121<=(x122<(x123*x124)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x134 = INT64_MAX;
	uint16_t x135 = 2395U;
	int8_t x136 = INT8_MIN;

	t23 = (x133<=(x134<(x135*x136)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x137 = UINT8_MAX;
	uint16_t x138 = UINT16_MAX;
	uint8_t x139 = UINT8_MAX;
	uint8_t x140 = UINT8_MAX;
	static int32_t t24 = 201553;

	t24 = (x137<=(x138<(x139*x140)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x147 = -158;
	int32_t t25 = 83576096;

	t25 = (x145<=(x146<(x147*x148)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x157 = 2586U;
	static uint8_t x158 = UINT8_MAX;
	uint32_t x159 = 129539U;
	int16_t x160 = INT16_MIN;
	volatile int32_t t26 = -314678870;

	t26 = (x157<=(x158<(x159*x160)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x161 = -2783059152205098028LL;
	uint16_t x162 = 16886U;
	int8_t x163 = INT8_MAX;
	int32_t x164 = -1;
	static int32_t t27 = 0;

	t27 = (x161<=(x162<(x163*x164)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MIN;
	volatile uint64_t x168 = 28401LLU;
	int32_t t28 = 186332;

	t28 = (x165<=(x166<(x167*x168)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = -112594085437695LL;
	int8_t x170 = 0;
	static int64_t x171 = -1040LL;
	int16_t x172 = -10925;
	int32_t t29 = -235646;

	t29 = (x169<=(x170<(x171*x172)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x173 = INT16_MAX;
	static int8_t x174 = INT8_MIN;
	static int8_t x176 = -2;
	volatile int32_t t30 = -240621;

	t30 = (x173<=(x174<(x175*x176)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x181 = 76066137987LL;
	int64_t x182 = 330LL;
	int64_t x183 = INT64_MIN;
	uint8_t x184 = 0U;
	volatile int32_t t31 = 13894142;

	t31 = (x181<=(x182<(x183*x184)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x185 = 1841442U;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = 116780025U;
	int16_t x188 = 0;

	t32 = (x185<=(x186<(x187*x188)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x189 = INT32_MAX;
	static volatile uint32_t x190 = 31U;
	int8_t x191 = -23;
	int8_t x192 = -8;

	t33 = (x189<=(x190<(x191*x192)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x197 = 218766285211726184LLU;
	int32_t x199 = -1;
	uint64_t x200 = 33061419012957278LLU;
	volatile int32_t t34 = -1684;

	t34 = (x197<=(x198<(x199*x200)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x201 = 0U;
	int64_t x202 = INT64_MIN;
	int32_t x203 = -35;
	static uint8_t x204 = 3U;

	t35 = (x201<=(x202<(x203*x204)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x205 = -1LL;
	int16_t x207 = INT16_MIN;
	int32_t t36 = 267;

	t36 = (x205<=(x206<(x207*x208)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x209 = 18699692LLU;
	int32_t x210 = INT32_MAX;
	volatile int8_t x211 = INT8_MIN;
	static uint64_t x212 = 2020342LLU;

	t37 = (x209<=(x210<(x211*x212)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x213 = INT16_MIN;
	static int32_t x214 = 31735089;
	uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 1U;

	t38 = (x213<=(x214<(x215*x216)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x225 = INT64_MAX;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = -14979123949378LL;
	int32_t t39 = 157228;

	t39 = (x225<=(x226<(x227*x228)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x230 = UINT64_MAX;
	static int8_t x231 = -1;
	uint8_t x232 = UINT8_MAX;

	t40 = (x229<=(x230<(x231*x232)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	int32_t x236 = -1;

	t41 = (x233<=(x234<(x235*x236)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x238 = INT16_MIN;
	uint64_t x239 = 1018708894365LLU;
	uint16_t x240 = 4481U;
	static volatile int32_t t42 = -146325;

	t42 = (x237<=(x238<(x239*x240)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = -1;
	uint32_t x248 = 203U;
	static int32_t t43 = -10272;

	t43 = (x245<=(x246<(x247*x248)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x249 = 2019560121905602155LLU;
	int8_t x250 = INT8_MIN;
	int8_t x251 = -1;

	t44 = (x249<=(x250<(x251*x252)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = 337LL;
	uint32_t x255 = 389U;
	volatile uint32_t x256 = 74048286U;
	int32_t t45 = 200863;

	t45 = (x253<=(x254<(x255*x256)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x257 = 38U;
	uint8_t x259 = 6U;

	t46 = (x257<=(x258<(x259*x260)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x262 = INT8_MAX;
	static uint32_t x263 = 3862083U;
	int32_t t47 = 0;

	t47 = (x261<=(x262<(x263*x264)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x265 = 756687935LLU;
	int32_t x266 = INT32_MIN;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t48 = 3058;

	t48 = (x265<=(x266<(x267*x268)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x269 = INT64_MIN;
	volatile int32_t x270 = INT32_MIN;
	static volatile uint16_t x271 = 438U;
	static int32_t x272 = 3982;

	t49 = (x269<=(x270<(x271*x272)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = -6;
	uint8_t x276 = 1U;
	volatile int32_t t50 = -25;

	t50 = (x273<=(x274<(x275*x276)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x278 = 3;
	volatile int32_t x279 = INT32_MAX;

	t51 = (x277<=(x278<(x279*x280)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x285 = INT16_MAX;
	int8_t x286 = INT8_MAX;
	int32_t x287 = INT32_MAX;
	static volatile int16_t x288 = -1;

	t52 = (x285<=(x286<(x287*x288)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x297 = -3;
	int16_t x298 = INT16_MIN;
	uint64_t x299 = 56479LLU;
	int8_t x300 = 26;
	int32_t t53 = -55;

	t53 = (x297<=(x298<(x299*x300)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x305 = INT32_MIN;
	uint64_t x306 = 33002277LLU;
	volatile int64_t x307 = -116102300669977440LL;
	volatile uint8_t x308 = 4U;
	int32_t t54 = -3;

	t54 = (x305<=(x306<(x307*x308)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x313 = INT8_MAX;
	uint8_t x315 = 14U;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t55 = -89;

	t55 = (x313<=(x314<(x315*x316)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x317 = 428218414666776349LL;
	int64_t x318 = INT64_MIN;
	static int8_t x319 = INT8_MIN;
	int64_t x320 = 7589066187LL;

	t56 = (x317<=(x318<(x319*x320)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x325 = INT64_MAX;
	uint64_t x326 = 7052419LLU;
	int8_t x327 = -18;
	volatile uint64_t x328 = 486LLU;

	t57 = (x325<=(x326<(x327*x328)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = INT16_MIN;
	uint32_t x334 = UINT32_MAX;
	uint8_t x335 = 69U;
	int32_t x336 = -20267552;
	int32_t t58 = -11260357;

	t58 = (x333<=(x334<(x335*x336)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x337 = -62;
	volatile int8_t x338 = INT8_MIN;
	int16_t x340 = -1;
	static int32_t t59 = 2;

	t59 = (x337<=(x338<(x339*x340)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x341 = -1;
	volatile int64_t x342 = 14008637240130LL;
	int32_t x343 = INT32_MIN;
	static volatile uint32_t x344 = 5851338U;
	volatile int32_t t60 = -3951819;

	t60 = (x341<=(x342<(x343*x344)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x345 = INT32_MIN;
	static volatile int32_t x347 = 106;
	int64_t x348 = -1LL;

	t61 = (x345<=(x346<(x347*x348)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x349 = INT32_MAX;
	volatile int8_t x350 = -5;
	int8_t x352 = INT8_MIN;
	int32_t t62 = 89653;

	t62 = (x349<=(x350<(x351*x352)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x353 = 1U;
	static int8_t x354 = 4;
	uint32_t x356 = UINT32_MAX;

	t63 = (x353<=(x354<(x355*x356)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x357 = INT64_MAX;
	int8_t x359 = INT8_MAX;
	int8_t x360 = 0;
	volatile int32_t t64 = 0;

	t64 = (x357<=(x358<(x359*x360)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x369 = INT64_MIN;
	static uint32_t x370 = UINT32_MAX;
	int32_t x371 = -1;
	uint32_t x372 = 135685U;
	volatile int32_t t65 = -56219;

	t65 = (x369<=(x370<(x371*x372)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x389 = UINT8_MAX;
	int8_t x390 = -1;
	uint32_t x391 = 1974472775U;
	uint8_t x392 = 1U;
	volatile int32_t t66 = -33647537;

	t66 = (x389<=(x390<(x391*x392)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x393 = -1;
	static uint32_t x395 = 3U;
	volatile int64_t x396 = -1842246370707LL;
	static volatile int32_t t67 = -136240;

	t67 = (x393<=(x394<(x395*x396)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x397 = INT64_MIN;
	int32_t x398 = INT32_MIN;
	uint16_t x399 = UINT16_MAX;
	int8_t x400 = INT8_MAX;
	static volatile int32_t t68 = 8622;

	t68 = (x397<=(x398<(x399*x400)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x401 = -1LL;
	int64_t x402 = INT64_MAX;
	int16_t x404 = INT16_MAX;

	t69 = (x401<=(x402<(x403*x404)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x406 = UINT32_MAX;
	uint64_t x407 = 4903371354669524613LLU;
	int8_t x408 = INT8_MAX;
	volatile int32_t t70 = 2183129;

	t70 = (x405<=(x406<(x407*x408)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x409 = -1;
	static uint32_t x411 = 18535U;
	volatile int32_t t71 = 22914176;

	t71 = (x409<=(x410<(x411*x412)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x418 = -1;
	uint16_t x420 = 750U;
	int32_t t72 = -1;

	t72 = (x417<=(x418<(x419*x420)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x421 = INT64_MIN;
	volatile int16_t x422 = INT16_MIN;
	uint64_t x423 = 29942864LLU;
	uint16_t x424 = 2080U;
	int32_t t73 = 66;

	t73 = (x421<=(x422<(x423*x424)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x426 = INT16_MIN;
	int8_t x427 = INT8_MAX;

	t74 = (x425<=(x426<(x427*x428)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x429 = UINT64_MAX;
	volatile uint64_t x432 = 19192LLU;
	int32_t t75 = -21;

	t75 = (x429<=(x430<(x431*x432)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x434 = UINT64_MAX;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = 8792612LLU;

	t76 = (x433<=(x434<(x435*x436)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x437 = -1;
	static int16_t x438 = -1;
	uint32_t x439 = UINT32_MAX;
	volatile uint16_t x440 = 31U;

	t77 = (x437<=(x438<(x439*x440)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x441 = INT8_MIN;
	volatile int16_t x442 = -23;
	static int32_t t78 = 27543727;

	t78 = (x441<=(x442<(x443*x444)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x447 = -1LL;
	int8_t x448 = -63;
	static volatile int32_t t79 = -60171129;

	t79 = (x445<=(x446<(x447*x448)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x453 = INT8_MAX;
	volatile int16_t x455 = -1;
	static uint16_t x456 = UINT16_MAX;
	int32_t t80 = 1;

	t80 = (x453<=(x454<(x455*x456)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x461 = 1U;
	uint8_t x462 = 1U;
	static volatile int32_t t81 = -33;

	t81 = (x461<=(x462<(x463*x464)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x465 = 15758736LL;
	int16_t x466 = INT16_MAX;
	static uint8_t x468 = 22U;
	int32_t t82 = -62525791;

	t82 = (x465<=(x466<(x467*x468)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x469 = 16U;
	int64_t x470 = 73551LL;
	int16_t x471 = -1;
	int8_t x472 = -1;
	volatile int32_t t83 = 3;

	t83 = (x469<=(x470<(x471*x472)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x481 = INT64_MIN;
	int32_t x482 = INT32_MIN;
	static int16_t x483 = -1;
	uint64_t x484 = 33LLU;
	int32_t t84 = -572402406;

	t84 = (x481<=(x482<(x483*x484)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x489 = -1;
	uint64_t x490 = 173532561893LLU;
	static int16_t x491 = -1;
	static int32_t x492 = INT32_MAX;
	int32_t t85 = 48864546;

	t85 = (x489<=(x490<(x491*x492)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x493 = 1800U;
	int32_t t86 = -328571057;

	t86 = (x493<=(x494<(x495*x496)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x497 = INT8_MIN;
	volatile int16_t x498 = INT16_MIN;
	static uint64_t x499 = 18839956793655LLU;
	uint16_t x500 = 10484U;
	int32_t t87 = 12755;

	t87 = (x497<=(x498<(x499*x500)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x501 = INT8_MIN;
	volatile int16_t x504 = 215;

	t88 = (x501<=(x502<(x503*x504)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x510 = -1;
	static int8_t x511 = 0;
	int8_t x512 = -14;
	volatile int32_t t89 = 58843;

	t89 = (x509<=(x510<(x511*x512)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x513 = UINT32_MAX;
	int16_t x514 = INT16_MIN;
	int16_t x515 = -1;
	static uint64_t x516 = 59242228731055LLU;
	static int32_t t90 = 3542;

	t90 = (x513<=(x514<(x515*x516)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x517 = UINT64_MAX;
	uint8_t x518 = 25U;
	static int8_t x519 = -1;
	int8_t x520 = -2;
	volatile int32_t t91 = 17475308;

	t91 = (x517<=(x518<(x519*x520)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x521 = -1;
	int8_t x522 = INT8_MIN;
	int8_t x523 = INT8_MAX;
	static int32_t x524 = 12419233;
	volatile int32_t t92 = -519486711;

	t92 = (x521<=(x522<(x523*x524)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x526 = -1;
	volatile uint32_t x527 = 3U;
	int32_t t93 = 890145;

	t93 = (x525<=(x526<(x527*x528)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x529 = INT64_MAX;
	volatile uint64_t x530 = 460952474572465591LLU;
	volatile uint64_t x531 = 85051163494LLU;
	uint64_t x532 = 52935346477LLU;
	volatile int32_t t94 = -556;

	t94 = (x529<=(x530<(x531*x532)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x533 = 0U;
	int32_t x534 = INT32_MAX;
	int32_t t95 = -39383;

	t95 = (x533<=(x534<(x535*x536)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x537 = 138720472U;
	uint64_t x538 = UINT64_MAX;
	uint64_t x539 = UINT64_MAX;
	int32_t x540 = INT32_MIN;
	volatile int32_t t96 = 367730;

	t96 = (x537<=(x538<(x539*x540)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x542 = INT64_MIN;
	int16_t x543 = -7101;
	static int16_t x544 = -1;
	volatile int32_t t97 = 368973;

	t97 = (x541<=(x542<(x543*x544)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x545 = -1LL;
	int16_t x546 = INT16_MAX;
	int8_t x547 = INT8_MIN;
	static uint16_t x548 = UINT16_MAX;
	volatile int32_t t98 = 1033606551;

	t98 = (x545<=(x546<(x547*x548)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x559 = 426034;

	t99 = (x557<=(x558<(x559*x560)));

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

