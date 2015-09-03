#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -7689;
uint32_t x2 = UINT32_MAX;
volatile int8_t x4 = INT8_MAX;
int64_t x7 = 456705516155982LL;
int16_t x10 = INT16_MAX;
int8_t x34 = INT8_MIN;
int8_t x40 = -42;
uint64_t x45 = 141702969718544647LLU;
volatile int16_t x50 = INT16_MIN;
int16_t x52 = INT16_MAX;
int16_t x60 = 187;
static volatile uint64_t x66 = UINT64_MAX;
uint64_t t11 = 22LLU;
uint16_t x71 = 5U;
volatile int8_t x74 = INT8_MAX;
int16_t x76 = INT16_MAX;
static volatile int64_t x77 = INT64_MIN;
int64_t x79 = -1LL;
int8_t x113 = -1;
int8_t x116 = INT8_MIN;
int8_t x120 = INT8_MIN;
int16_t x132 = -131;
uint32_t x143 = 15U;
uint8_t x165 = UINT8_MAX;
volatile uint8_t x166 = UINT8_MAX;
volatile uint32_t x168 = 56509U;
int64_t x170 = -1LL;
static uint64_t t26 = 1LLU;
volatile int16_t x192 = -84;
uint32_t t29 = 1863U;
volatile int32_t x202 = INT32_MIN;
int64_t x210 = INT64_MAX;
int32_t x211 = -245863;
int8_t x212 = -1;
int32_t t32 = 3414;
volatile uint64_t t33 = 954514613984615LLU;
int32_t x220 = INT32_MIN;
int32_t x222 = INT32_MIN;
uint32_t x229 = 12U;
static int8_t x236 = 8;
uint32_t x243 = 7U;
int8_t x266 = -8;
volatile uint64_t t42 = 4604089030LLU;
int32_t x271 = -267;
int8_t x288 = -1;
volatile uint64_t t47 = 14245881LLU;
volatile int64_t t50 = 2223528687646871LL;
int16_t x339 = 1;
int16_t x344 = INT16_MIN;
static int16_t x353 = INT16_MIN;
int8_t x357 = INT8_MIN;
volatile int16_t x358 = -1;
uint8_t x360 = 5U;
int32_t x362 = -1;
volatile int32_t t60 = 506;
int8_t x366 = 1;
static int8_t x368 = INT8_MIN;
volatile int32_t t61 = -2015;
int32_t x369 = INT32_MAX;
volatile int8_t x371 = -1;
int16_t x377 = INT16_MIN;
static int64_t x382 = 243459208LL;
static volatile uint64_t t65 = 762594505860LLU;
volatile int16_t x401 = 8774;
uint8_t x405 = 1U;
uint8_t x407 = UINT8_MAX;
int8_t x412 = 0;
volatile int8_t x415 = -1;
static int32_t t69 = -331657567;
int16_t x419 = -3;
volatile uint64_t t70 = 2719800LLU;
static volatile int32_t x430 = INT32_MIN;
int64_t x434 = INT64_MAX;
int32_t x435 = -327786636;
int32_t t73 = -47;
uint16_t x441 = 0U;
volatile uint8_t x454 = UINT8_MAX;
int8_t x455 = INT8_MIN;
static int32_t t78 = -16148528;
uint8_t x458 = 48U;
volatile uint32_t t79 = UINT32_MAX;
static int64_t x462 = INT64_MIN;
uint32_t x463 = UINT32_MAX;
static uint32_t t80 = 3707630U;
uint8_t x467 = UINT8_MAX;
volatile int32_t t82 = 60050873;
volatile uint64_t t83 = 927683LLU;
int32_t x496 = 6270574;
volatile int8_t x497 = -3;
int8_t x504 = -1;
int16_t x508 = 28;
volatile int32_t t91 = 65;
uint8_t x535 = 0U;
int8_t x542 = -1;
volatile uint32_t x543 = 43069828U;
volatile uint32_t t95 = 4985U;
uint8_t x553 = 4U;
uint8_t x555 = 93U;
int64_t x570 = INT64_MIN;


void f0(void) {
	volatile int16_t x3 = 0;
	static int32_t t0 = 237510;

	t0 = ((x1<x2)|(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = 28485110505LLU;
	int8_t x8 = 1;
	volatile int64_t t1 = 625050LL;

	t1 = ((x5<x6)|(x7*x8));

	if (t1 != 456705516155982LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	static uint8_t x11 = 3U;
	int16_t x12 = -5;
	int32_t t2 = -940075;

	t2 = ((x9<x10)|(x11*x12));

	if (t2 != -15) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 279863U;
	uint8_t x14 = UINT8_MAX;
	uint32_t x15 = UINT32_MAX;
	uint8_t x16 = UINT8_MAX;
	volatile uint32_t t3 = 214994928U;

	t3 = ((x13<x14)|(x15*x16));

	if (t3 != 4294967041U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 32386LLU;
	static int8_t x18 = 18;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = 26968U;
	volatile uint32_t t4 = 891406147U;

	t4 = ((x17<x18)|(x19*x20));

	if (t4 != 4291515392U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x29 = 10U;
	uint16_t x30 = 33U;
	volatile uint32_t x31 = 0U;
	static int64_t x32 = -1LL;
	int64_t t5 = 2102LL;

	t5 = ((x29<x30)|(x31*x32));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 5393890LLU;
	volatile uint16_t x35 = 1018U;
	volatile uint32_t x36 = UINT32_MAX;
	volatile uint32_t t6 = 6442U;

	t6 = ((x33<x34)|(x35*x36));

	if (t6 != 4294966279U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MIN;
	int8_t x38 = 8;
	uint16_t x39 = 7U;
	int32_t t7 = -10;

	t7 = ((x37<x38)|(x39*x40));

	if (t7 != -293) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	int8_t x48 = 1;
	static volatile int32_t t8 = 1;

	t8 = ((x45<x46)|(x47*x48));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -12;
	uint64_t x51 = UINT64_MAX;
	static volatile uint64_t t9 = 24LLU;

	t9 = ((x49<x50)|(x51*x52));

	if (t9 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x57 = INT8_MAX;
	static uint8_t x58 = UINT8_MAX;
	int16_t x59 = INT16_MIN;
	int32_t t10 = -557;

	t10 = ((x57<x58)|(x59*x60));

	if (t10 != -6127615) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	static uint64_t x67 = 841253394LLU;
	static volatile uint16_t x68 = 7U;

	t11 = ((x65<x66)|(x67*x68));

	if (t11 != 5888773759LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = -1;
	volatile int32_t x70 = -1;
	int32_t x72 = -1;
	int32_t t12 = 6;

	t12 = ((x69<x70)|(x71*x72));

	if (t12 != -5) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x73 = UINT32_MAX;
	uint32_t x75 = 57U;
	volatile uint32_t t13 = 6897U;

	t13 = ((x73<x74)|(x75*x76));

	if (t13 != 1867719U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x78 = -1;
	static int16_t x80 = INT16_MAX;
	volatile int64_t t14 = 13950LL;

	t14 = ((x77<x78)|(x79*x80));

	if (t14 != -32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x101 = INT64_MAX;
	static int8_t x102 = INT8_MIN;
	volatile uint64_t x103 = 379150511309556LLU;
	int8_t x104 = INT8_MIN;
	volatile uint64_t t15 = 3280990586335LLU;

	t15 = ((x101<x102)|(x103*x104));

	if (t15 != 18398212808261928448LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x114 = INT16_MAX;
	int8_t x115 = -1;
	volatile int32_t t16 = 12;

	t16 = ((x113<x114)|(x115*x116));

	if (t16 != 129) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x117 = -867664950365LL;
	int8_t x118 = -1;
	static int32_t x119 = -1;
	static int32_t t17 = -460716;

	t17 = ((x117<x118)|(x119*x120));

	if (t17 != 129) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x121 = INT8_MAX;
	uint16_t x122 = 283U;
	uint32_t x123 = UINT32_MAX;
	int64_t x124 = -1LL;
	int64_t t18 = 0LL;

	t18 = ((x121<x122)|(x123*x124));

	if (t18 != -4294967295LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x129 = UINT64_MAX;
	int8_t x130 = 1;
	int16_t x131 = -1;
	int32_t t19 = -108;

	t19 = ((x129<x130)|(x131*x132));

	if (t19 != 131) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x141 = -1760777250262907LL;
	uint64_t x142 = 8874251LLU;
	int8_t x144 = 1;
	static uint32_t t20 = 1476U;

	t20 = ((x141<x142)|(x143*x144));

	if (t20 != 15U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x157 = UINT32_MAX;
	uint8_t x158 = UINT8_MAX;
	uint64_t x159 = UINT64_MAX;
	int16_t x160 = -105;
	uint64_t t21 = 7LLU;

	t21 = ((x157<x158)|(x159*x160));

	if (t21 != 105LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x161 = 1685U;
	volatile int16_t x162 = INT16_MIN;
	uint32_t x163 = 1244475U;
	volatile int8_t x164 = INT8_MAX;
	uint32_t t22 = 37U;

	t22 = ((x161<x162)|(x163*x164));

	if (t22 != 158048325U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x167 = 3U;
	uint32_t t23 = 8561523U;

	t23 = ((x165<x166)|(x167*x168));

	if (t23 != 169527U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x169 = INT8_MAX;
	static volatile int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t24 = 130423;

	t24 = ((x169<x170)|(x171*x172));

	if (t24 != 4194304) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x177 = -492233251878325LL;
	static volatile uint32_t x178 = 129U;
	uint16_t x179 = UINT16_MAX;
	static int16_t x180 = INT16_MAX;
	int32_t t25 = -9880560;

	t25 = ((x177<x178)|(x179*x180));

	if (t25 != 2147385345) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x181 = -1LL;
	int16_t x182 = -1;
	uint64_t x183 = 16840627LLU;
	int8_t x184 = -1;

	t26 = ((x181<x182)|(x183*x184));

	if (t26 != 18446744073692710989LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x189 = 4LLU;
	int64_t x190 = INT64_MIN;
	static volatile int16_t x191 = INT16_MAX;
	static volatile int32_t t27 = -477439;

	t27 = ((x189<x190)|(x191*x192));

	if (t27 != -2752427) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x193 = -1LL;
	int32_t x194 = INT32_MIN;
	static uint8_t x195 = UINT8_MAX;
	int32_t x196 = 2;
	int32_t t28 = 1136526;

	t28 = ((x193<x194)|(x195*x196));

	if (t28 != 510) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x197 = -1;
	int32_t x198 = INT32_MAX;
	uint32_t x199 = 68742848U;
	uint32_t x200 = 19U;

	t29 = ((x197<x198)|(x199*x200));

	if (t29 != 1306114113U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x201 = -2LL;
	static uint64_t x203 = 20LLU;
	uint16_t x204 = 2607U;
	volatile uint64_t t30 = 0LLU;

	t30 = ((x201<x202)|(x203*x204));

	if (t30 != 52140LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x205 = 821U;
	volatile uint16_t x206 = UINT16_MAX;
	uint16_t x207 = 99U;
	static int8_t x208 = INT8_MAX;
	int32_t t31 = -3442616;

	t31 = ((x205<x206)|(x207*x208));

	if (t31 != 12573) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x209 = 217489799U;

	t32 = ((x209<x210)|(x211*x212));

	if (t32 != 245863) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x213 = 1247119LLU;
	static int64_t x214 = 36492004252439LL;
	static uint64_t x215 = 193678879670731177LLU;
	int32_t x216 = INT32_MIN;

	t33 = ((x213<x214)|(x215*x216));

	if (t33 != 16455448438289465345LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x217 = 879457207;
	uint16_t x218 = UINT16_MAX;
	uint32_t x219 = UINT32_MAX;
	static uint32_t t34 = 1581283U;

	t34 = ((x217<x218)|(x219*x220));

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x221 = -1;
	static volatile int8_t x223 = INT8_MAX;
	static volatile int8_t x224 = INT8_MIN;
	int32_t t35 = 2449597;

	t35 = ((x221<x222)|(x223*x224));

	if (t35 != -16256) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x230 = INT64_MAX;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = 3735888585093135847LLU;
	volatile uint64_t t36 = 5786628190375209348LLU;

	t36 = ((x229<x230)|(x231*x232));

	if (t36 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x233 = 496;
	volatile uint8_t x234 = 1U;
	volatile int64_t x235 = 53159LL;
	volatile int64_t t37 = -2714459LL;

	t37 = ((x233<x234)|(x235*x236));

	if (t37 != 425272LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x241 = 113U;
	volatile int16_t x242 = INT16_MAX;
	int8_t x244 = 0;
	uint32_t t38 = 1884U;

	t38 = ((x241<x242)|(x243*x244));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x245 = UINT8_MAX;
	uint8_t x246 = 1U;
	static int8_t x247 = INT8_MAX;
	int64_t x248 = 60332779LL;
	int64_t t39 = -1712LL;

	t39 = ((x245<x246)|(x247*x248));

	if (t39 != 7662262933LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MAX;
	int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t40 = 24892;

	t40 = ((x249<x250)|(x251*x252));

	if (t40 != -16255) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x253 = INT16_MIN;
	int16_t x254 = -10385;
	uint64_t x255 = 4221472777256116939LLU;
	uint16_t x256 = 8793U;
	volatile uint64_t t41 = 12911241828133LLU;

	t41 = ((x253<x254)|(x255*x256));

	if (t41 != 4561054109418393235LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x265 = INT64_MAX;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = 9217821296159975LLU;

	t42 = ((x265<x266)|(x267*x268));

	if (t42 != 6774831713496334336LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x269 = -3985710517843LL;
	static int32_t x270 = INT32_MAX;
	static uint64_t x272 = UINT64_MAX;
	uint64_t t43 = 4425590964184LLU;

	t43 = ((x269<x270)|(x271*x272));

	if (t43 != 267LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x277 = INT64_MAX;
	int16_t x278 = INT16_MAX;
	int16_t x279 = 1;
	volatile uint32_t x280 = UINT32_MAX;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = ((x277<x278)|(x279*x280));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x281 = 7;
	int16_t x282 = 39;
	int16_t x283 = -3;
	int32_t x284 = -1;
	int32_t t45 = 1064;

	t45 = ((x281<x282)|(x283*x284));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x285 = UINT32_MAX;
	int16_t x286 = INT16_MAX;
	int32_t x287 = -1;
	int32_t t46 = 15;

	t46 = ((x285<x286)|(x287*x288));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x289 = -43285066258012LL;
	int32_t x290 = INT32_MIN;
	static volatile uint32_t x291 = 117U;
	uint64_t x292 = UINT64_MAX;

	t47 = ((x289<x290)|(x291*x292));

	if (t47 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int16_t x294 = INT16_MIN;
	static uint8_t x295 = UINT8_MAX;
	uint16_t x296 = 366U;
	int32_t t48 = 16047;

	t48 = ((x293<x294)|(x295*x296));

	if (t48 != 93330) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x301 = 12578U;
	static int32_t x302 = INT32_MAX;
	uint16_t x303 = 31U;
	int8_t x304 = -1;
	int32_t t49 = 12642467;

	t49 = ((x301<x302)|(x303*x304));

	if (t49 != -31) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x313 = UINT32_MAX;
	uint32_t x314 = 3677U;
	int16_t x315 = 0;
	static int64_t x316 = 10765630425269LL;

	t50 = ((x313<x314)|(x315*x316));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x317 = INT64_MIN;
	uint32_t x318 = 66U;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = -1;
	static uint32_t t51 = 27058U;

	t51 = ((x317<x318)|(x319*x320));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	int32_t x323 = -1;
	int8_t x324 = -1;
	int32_t t52 = 5;

	t52 = ((x321<x322)|(x323*x324));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x325 = -6;
	int16_t x326 = -1;
	uint64_t x327 = UINT64_MAX;
	uint8_t x328 = UINT8_MAX;
	uint64_t t53 = 97777503LLU;

	t53 = ((x325<x326)|(x327*x328));

	if (t53 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x333 = UINT64_MAX;
	static int32_t x334 = INT32_MIN;
	uint8_t x335 = 0U;
	static int64_t x336 = 1193716LL;
	volatile int64_t t54 = -110764800381435476LL;

	t54 = ((x333<x334)|(x335*x336));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x337 = -1;
	int64_t x338 = INT64_MIN;
	uint8_t x340 = UINT8_MAX;
	static int32_t t55 = -1772;

	t55 = ((x337<x338)|(x339*x340));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x341 = 109U;
	uint64_t x342 = UINT64_MAX;
	static int16_t x343 = -1;
	static volatile int32_t t56 = 66;

	t56 = ((x341<x342)|(x343*x344));

	if (t56 != 32769) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x345 = INT8_MIN;
	uint16_t x346 = 598U;
	int64_t x347 = 33539449LL;
	volatile uint32_t x348 = 1747378014U;
	volatile int64_t t57 = -1011LL;

	t57 = ((x345<x346)|(x347*x348));

	if (t57 != 58606095784274287LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x354 = -1LL;
	static int64_t x355 = -1LL;
	int8_t x356 = INT8_MIN;
	volatile int64_t t58 = -1921835670LL;

	t58 = ((x353<x354)|(x355*x356));

	if (t58 != 129LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x359 = INT16_MAX;
	int32_t t59 = 106;

	t59 = ((x357<x358)|(x359*x360));

	if (t59 != 163835) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x361 = -1;
	static int32_t x363 = 67034;
	uint8_t x364 = 58U;

	t60 = ((x361<x362)|(x363*x364));

	if (t60 != 3887972) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x365 = INT8_MAX;
	static int16_t x367 = INT16_MAX;

	t61 = ((x365<x366)|(x367*x368));

	if (t61 != -4194176) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x370 = UINT8_MAX;
	int8_t x372 = -1;
	volatile int32_t t62 = -424110531;

	t62 = ((x369<x370)|(x371*x372));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x378 = UINT16_MAX;
	static int8_t x379 = -1;
	uint16_t x380 = UINT16_MAX;
	static int32_t t63 = -3306;

	t63 = ((x377<x378)|(x379*x380));

	if (t63 != -65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x383 = INT16_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t64 = -4;

	t64 = ((x381<x382)|(x383*x384));

	if (t64 != -1073709056) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x397 = INT16_MAX;
	int16_t x398 = INT16_MAX;
	volatile uint64_t x399 = 4897347882445948889LLU;
	int64_t x400 = INT64_MIN;

	t65 = ((x397<x398)|(x399*x400));

	if (t65 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x402 = 0U;
	int8_t x403 = -1;
	uint64_t x404 = 90LLU;
	volatile uint64_t t66 = 2424339335LLU;

	t66 = ((x401<x402)|(x403*x404));

	if (t66 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x406 = INT32_MIN;
	int16_t x408 = 610;
	int32_t t67 = 6;

	t67 = ((x405<x406)|(x407*x408));

	if (t67 != 155550) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x409 = 4U;
	volatile int64_t x410 = -1LL;
	static int16_t x411 = 3;
	int32_t t68 = 220;

	t68 = ((x409<x410)|(x411*x412));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x413 = INT16_MIN;
	int32_t x414 = -125;
	int8_t x416 = 5;

	t69 = ((x413<x414)|(x415*x416));

	if (t69 != -5) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x417 = 8738148391382LL;
	int64_t x418 = -155065767366LL;
	uint64_t x420 = 253LLU;

	t70 = ((x417<x418)|(x419*x420));

	if (t70 != 18446744073709550857LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x425 = INT32_MAX;
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	volatile int16_t x428 = -8508;
	volatile int32_t t71 = -1;

	t71 = ((x425<x426)|(x427*x428));

	if (t71 != 278790144) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x429 = 170607911LL;
	int16_t x431 = 0;
	int64_t x432 = INT64_MIN;
	volatile int64_t t72 = -4162734525369732LL;

	t72 = ((x429<x430)|(x431*x432));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x433 = -1;
	uint8_t x436 = 1U;

	t73 = ((x433<x434)|(x435*x436));

	if (t73 != -327786635) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x437 = 0U;
	static int32_t x438 = -1;
	volatile uint16_t x439 = 0U;
	int8_t x440 = 0;
	volatile int32_t t74 = -122;

	t74 = ((x437<x438)|(x439*x440));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x442 = 128310U;
	int32_t x443 = INT32_MIN;
	static uint32_t x444 = UINT32_MAX;
	uint32_t t75 = 8517U;

	t75 = ((x441<x442)|(x443*x444));

	if (t75 != 2147483649U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x445 = 21;
	static int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	uint8_t x448 = UINT8_MAX;
	int32_t t76 = 1;

	t76 = ((x445<x446)|(x447*x448));

	if (t76 != -32640) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x449 = UINT8_MAX;
	volatile int64_t x450 = INT64_MAX;
	int8_t x451 = -1;
	volatile int32_t x452 = INT32_MAX;
	volatile int32_t t77 = -339810;

	t77 = ((x449<x450)|(x451*x452));

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x453 = 7343137U;
	int16_t x456 = -1;

	t78 = ((x453<x454)|(x455*x456));

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x457 = 13;
	uint32_t x459 = UINT32_MAX;
	uint8_t x460 = 2U;

	t79 = ((x457<x458)|(x459*x460));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x461 = INT8_MIN;
	int8_t x464 = INT8_MIN;

	t80 = ((x461<x462)|(x463*x464));

	if (t80 != 128U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x465 = 31276809099621LLU;
	int64_t x466 = INT64_MIN;
	uint16_t x468 = 4791U;
	int32_t t81 = 692178;

	t81 = ((x465<x466)|(x467*x468));

	if (t81 != 1221705) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x469 = UINT16_MAX;
	int8_t x470 = INT8_MIN;
	uint8_t x471 = 7U;
	int8_t x472 = INT8_MIN;

	t82 = ((x469<x470)|(x471*x472));

	if (t82 != -896) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x473 = INT64_MAX;
	uint8_t x474 = UINT8_MAX;
	int16_t x475 = INT16_MIN;
	volatile uint64_t x476 = 485526LLU;

	t83 = ((x473<x474)|(x475*x476));

	if (t83 != 18446744057799835648LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x477 = 82804444252573LL;
	uint16_t x478 = 6U;
	static int8_t x479 = -1;
	uint64_t x480 = 58LLU;
	volatile uint64_t t84 = 1LLU;

	t84 = ((x477<x478)|(x479*x480));

	if (t84 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x489 = 15U;
	int32_t x490 = INT32_MAX;
	uint8_t x491 = 1U;
	uint8_t x492 = 85U;
	static volatile int32_t t85 = -9751;

	t85 = ((x489<x490)|(x491*x492));

	if (t85 != 85) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x493 = 2U;
	int16_t x494 = -1;
	static uint32_t x495 = 23U;
	uint32_t t86 = 126989U;

	t86 = ((x493<x494)|(x495*x496));

	if (t86 != 144223202U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x498 = 7066;
	static int16_t x499 = 3697;
	uint16_t x500 = 12756U;
	int32_t t87 = -32944;

	t87 = ((x497<x498)|(x499*x500));

	if (t87 != 47158933) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x501 = UINT64_MAX;
	int8_t x502 = INT8_MIN;
	uint16_t x503 = 0U;
	static volatile int32_t t88 = 1;

	t88 = ((x501<x502)|(x503*x504));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x505 = INT16_MIN;
	static uint64_t x506 = UINT64_MAX;
	uint64_t x507 = UINT64_MAX;
	static volatile uint64_t t89 = 3958293038LLU;

	t89 = ((x505<x506)|(x507*x508));

	if (t89 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x513 = 1U;
	uint32_t x514 = UINT32_MAX;
	volatile uint16_t x515 = 1011U;
	int64_t x516 = -51639256593805LL;
	volatile int64_t t90 = -952399631047138LL;

	t90 = ((x513<x514)|(x515*x516));

	if (t90 != -52207288416336855LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x517 = INT16_MIN;
	volatile int64_t x518 = -16992747468766015LL;
	static int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;

	t91 = ((x517<x518)|(x519*x520));

	if (t91 != 4194304) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x521 = INT16_MAX;
	int64_t x522 = -1LL;
	int16_t x523 = INT16_MAX;
	volatile int8_t x524 = INT8_MIN;
	volatile int32_t t92 = 4;

	t92 = ((x521<x522)|(x523*x524));

	if (t92 != -4194176) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x529 = INT8_MIN;
	int64_t x530 = -3725777864152781022LL;
	int64_t x531 = -63326619645222LL;
	int8_t x532 = INT8_MAX;
	static volatile int64_t t93 = 12139LL;

	t93 = ((x529<x530)|(x531*x532));

	if (t93 != -8042480694943194LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x533 = INT64_MIN;
	uint32_t x534 = 12711U;
	uint32_t x536 = UINT32_MAX;
	static volatile uint32_t t94 = 10400U;

	t94 = ((x533<x534)|(x535*x536));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x541 = 6U;
	int32_t x544 = INT32_MAX;

	t95 = ((x541<x542)|(x543*x544));

	if (t95 != 4251897468U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x545 = 394016360336832LLU;
	int32_t x546 = -1;
	static int16_t x547 = -1;
	volatile uint16_t x548 = 11U;
	volatile int32_t t96 = -704;

	t96 = ((x545<x546)|(x547*x548));

	if (t96 != -11) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x549 = -1;
	volatile uint64_t x550 = UINT64_MAX;
	volatile int8_t x551 = INT8_MIN;
	int8_t x552 = -1;
	int32_t t97 = 968;

	t97 = ((x549<x550)|(x551*x552));

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x554 = INT32_MAX;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t98 = 1624;

	t98 = ((x553<x554)|(x555*x556));

	if (t98 != 23715) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x569 = INT8_MIN;
	static int32_t x571 = INT32_MIN;
	int64_t x572 = -1LL;
	int64_t t99 = -205LL;

	t99 = ((x569<x570)|(x571*x572));

	if (t99 != 2147483648LL) { NG(); } else { ; }
	
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

