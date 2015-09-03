#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x12 = UINT8_MAX;
uint8_t x16 = UINT8_MAX;
int64_t t2 = -214718LL;
int64_t x19 = -335LL;
int64_t x24 = INT64_MAX;
uint64_t t4 = 1413515LLU;
uint8_t x26 = 42U;
volatile int64_t x37 = INT64_MAX;
int8_t x44 = -3;
volatile uint64_t t8 = 131846LLU;
int64_t x64 = -1LL;
int64_t t11 = -2563514839286199451LL;
uint16_t x67 = UINT16_MAX;
static int64_t t12 = 510LL;
int8_t x75 = -1;
int16_t x76 = INT16_MAX;
uint8_t x77 = 7U;
uint16_t x83 = UINT16_MAX;
volatile int64_t x90 = -1LL;
int64_t t19 = -3963140184568683635LL;
int16_t x126 = -12636;
static int64_t x132 = 2589206276914098LL;
int64_t x137 = INT64_MIN;
uint64_t t25 = 2878292343785LLU;
static uint16_t x150 = 2U;
int32_t x159 = INT32_MAX;
int16_t x162 = INT16_MIN;
int64_t x164 = 120534503984468LL;
volatile int16_t x166 = INT16_MAX;
int64_t x183 = -745LL;
int64_t t34 = -205LL;
static int16_t x186 = INT16_MIN;
uint64_t t36 = 3900847176LLU;
volatile uint64_t t38 = 73124LLU;
volatile int64_t x208 = -1LL;
int32_t x210 = 23658670;
int8_t x213 = INT8_MIN;
uint32_t x214 = 16U;
uint32_t t41 = 1048645800U;
int64_t x219 = INT64_MIN;
static uint64_t x225 = UINT64_MAX;
uint8_t x226 = 58U;
volatile int16_t x227 = -43;
volatile int8_t x228 = 52;
static volatile int8_t x232 = INT8_MIN;
int32_t t44 = -1;
static int64_t x241 = 46466082880LL;
static uint32_t x243 = UINT32_MAX;
uint32_t x245 = 12732853U;
static volatile uint32_t x247 = UINT32_MAX;
volatile uint32_t t48 = 53U;
volatile int64_t t53 = 459931LL;
uint64_t x299 = UINT64_MAX;
volatile uint64_t t57 = 3677556LLU;
static uint8_t x301 = UINT8_MAX;
int16_t x309 = INT16_MIN;
static uint64_t x310 = UINT64_MAX;
int8_t x320 = -1;
volatile uint64_t t63 = 129136835LLU;
static volatile uint32_t x343 = 223912U;
static volatile uint32_t x344 = 64U;
uint16_t x360 = 113U;
int64_t x366 = -245569291LL;
int8_t x374 = INT8_MIN;
volatile int64_t t69 = -133935403588808LL;
static volatile uint32_t t70 = 201982214U;
int64_t x396 = -1LL;
int16_t x399 = 617;
volatile uint64_t x431 = UINT64_MAX;
int16_t x432 = INT16_MAX;
int8_t x434 = -1;
uint32_t x436 = 327922U;
static uint64_t x439 = 555052LLU;
volatile int64_t x441 = -1LL;
static int16_t x450 = INT16_MAX;
volatile uint16_t x458 = 42U;
uint64_t t83 = 206016391636128719LLU;
uint32_t x465 = 1U;
int8_t x468 = INT8_MAX;
uint32_t x469 = UINT32_MAX;
int8_t x470 = INT8_MIN;
int32_t x472 = -1;
int32_t x476 = INT32_MIN;
int8_t x480 = INT8_MIN;
static uint64_t t87 = 416420901121945LLU;
uint8_t x486 = UINT8_MAX;
int64_t x498 = INT64_MAX;
volatile uint32_t x499 = 24362019U;
volatile int64_t t89 = -219306592493655728LL;
static int64_t x517 = INT64_MIN;
int32_t x531 = INT32_MIN;
volatile int64_t x532 = INT64_MAX;
static int64_t x534 = -1436026847150084LL;
volatile uint64_t t95 = 3LLU;
static uint64_t t96 = 113535608255LLU;


void f0(void) {
	uint64_t x1 = 0LLU;
	int64_t x2 = 2083029230532873LL;
	volatile int32_t x3 = INT32_MIN;
	static int32_t x4 = -1;
	volatile uint64_t t0 = 1633LLU;

	t0 = ((x1^(x2^x3))*x4);

	if (t0 != 2083031064528631LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -22;
	static uint64_t x10 = UINT64_MAX;
	uint32_t x11 = 56380U;
	static uint64_t t1 = 92654173769439424LLU;

	t1 = ((x9^(x10^x11))*x12);

	if (t1 != 14372055LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int8_t x14 = INT8_MIN;
	int8_t x15 = -1;

	t2 = ((x13^(x14^x15))*x16);

	if (t2 != -32640LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x18 = UINT64_MAX;
	volatile int8_t x20 = 5;
	volatile uint64_t t3 = 9091323067332182LLU;

	t3 = ((x17^(x18^x19))*x20);

	if (t3 != 18446744062972135046LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	uint64_t x22 = 37475935526332LLU;
	uint64_t x23 = 4742103722834LLU;

	t4 = ((x21^(x22^x23))*x24);

	if (t4 != 9223414117077579503LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -378779LL;
	uint16_t x27 = 1857U;
	int16_t x28 = INT16_MIN;
	int64_t t5 = -8575771561LL;

	t5 = ((x25^(x26^x27))*x28);

	if (t5 != 12355960832LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = -14;
	int64_t x30 = INT64_MIN;
	uint64_t x31 = 3517665598LLU;
	int8_t x32 = INT8_MAX;
	uint64_t t6 = 18424147LLU;

	t6 = ((x29^(x30^x31))*x32);

	if (t6 != 9223371590111246132LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x38 = INT64_MIN;
	uint32_t x39 = 14887019U;
	int8_t x40 = INT8_MIN;
	int64_t t7 = -64108LL;

	t7 = ((x37^(x38^x39))*x40);

	if (t7 != 1905538560LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -2;
	int16_t x42 = INT16_MIN;
	volatile uint64_t x43 = 3958485565LLU;

	t8 = ((x41^(x42^x43))*x44);

	if (t8 != 18446744061834073783LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 25U;
	volatile int16_t x50 = INT16_MIN;
	int16_t x51 = 2352;
	volatile uint8_t x52 = 21U;
	volatile int32_t t9 = 1764818;

	t9 = ((x49^(x50^x51))*x52);

	if (t9 != -638883) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = -1;
	static uint32_t x54 = 23268061U;
	int16_t x55 = INT16_MIN;
	volatile int32_t x56 = -935609;
	uint32_t t10 = 150U;

	t10 = ((x53^(x54^x55))*x56);

	if (t10 != 1698500206U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = 8325618LL;
	volatile int8_t x62 = INT8_MAX;
	static volatile int16_t x63 = INT16_MIN;

	t11 = ((x61^(x62^x63))*x64);

	if (t11 != 8353395LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 6233219U;
	volatile uint8_t x66 = UINT8_MAX;
	static int64_t x68 = -1LL;

	t12 = ((x65^(x66^x67))*x68);

	if (t12 != -6284163LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x73 = 2LLU;
	uint16_t x74 = UINT16_MAX;
	uint64_t t13 = 78576034215100LLU;

	t13 = ((x73^(x74^x75))*x76);

	if (t13 != 18446744071562199038LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = 1;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t14 = 1065129557LLU;

	t14 = ((x77^(x78^x79))*x80);

	if (t14 != 18446744069414584327LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	volatile int16_t x82 = INT16_MIN;
	int32_t x84 = -1;
	volatile int32_t t15 = 2009;

	t15 = ((x81^(x82^x83))*x84);

	if (t15 != -65535) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = INT32_MIN;
	static uint64_t x86 = UINT64_MAX;
	uint8_t x87 = 3U;
	static uint16_t x88 = 6U;
	volatile uint64_t t16 = 242962627072827LLU;

	t16 = ((x85^(x86^x87))*x88);

	if (t16 != 12884901864LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x89 = 5;
	int64_t x91 = 0LL;
	int64_t x92 = -3LL;
	int64_t t17 = 0LL;

	t17 = ((x89^(x90^x91))*x92);

	if (t17 != 18LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x93 = INT32_MIN;
	static volatile uint32_t x94 = 531765U;
	int32_t x95 = INT32_MAX;
	static int8_t x96 = -29;
	static uint32_t t18 = 12225U;

	t18 = ((x93^(x94^x95))*x96);

	if (t18 != 15421214U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = 14417U;
	volatile int8_t x98 = -62;
	int64_t x99 = -255803846LL;
	int64_t x100 = -1LL;

	t19 = ((x97^(x98^x99))*x100);

	if (t19 != -255818153LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	int8_t x107 = INT8_MAX;
	uint16_t x108 = 5U;
	int32_t t20 = 26004392;

	t20 = ((x105^(x106^x107))*x108);

	if (t20 != -327045) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = UINT64_MAX;
	uint8_t x110 = 31U;
	volatile int16_t x111 = INT16_MIN;
	static int16_t x112 = 1;
	uint64_t t21 = 41550820LLU;

	t21 = ((x109^(x110^x111))*x112);

	if (t21 != 32736LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = 264264636101831819LL;
	static int8_t x127 = 60;
	static volatile int64_t x128 = -1LL;
	volatile int64_t t22 = -8030781124751LL;

	t22 = ((x125^(x126^x127))*x128);

	if (t22 != 264264636101828077LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int8_t x130 = INT8_MIN;
	volatile int8_t x131 = -24;
	volatile int64_t t23 = -368422824LL;

	t23 = ((x129^(x130^x131))*x132);

	if (t23 != 390970147814028798LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x133 = 7495175319523160LLU;
	static uint64_t x134 = 3LLU;
	uint32_t x135 = UINT32_MAX;
	static uint16_t x136 = UINT16_MAX;
	uint64_t t24 = 1892714078LLU;

	t24 = ((x133^(x134^x135))*x136);

	if (t24 != 11580972058138840924LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x138 = 1254060LLU;
	int16_t x139 = -1;
	int64_t x140 = INT64_MAX;

	t25 = ((x137^(x138^x139))*x140);

	if (t25 != 1254061LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x141 = -13368;
	volatile uint16_t x142 = 0U;
	uint8_t x143 = UINT8_MAX;
	volatile uint8_t x144 = UINT8_MAX;
	volatile int32_t t26 = -1;

	t26 = ((x141^(x142^x143))*x144);

	if (t26 != -3445815) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x145 = 0U;
	volatile int16_t x146 = -1;
	uint16_t x147 = 223U;
	static int16_t x148 = -50;
	int32_t t27 = 2;

	t27 = ((x145^(x146^x147))*x148);

	if (t27 != 11200) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = -1LL;
	int16_t x151 = INT16_MIN;
	uint8_t x152 = 15U;
	volatile int64_t t28 = -121037517787018160LL;

	t28 = ((x149^(x150^x151))*x152);

	if (t28 != 491475LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x157 = 33;
	uint8_t x158 = UINT8_MAX;
	int64_t x160 = 10LL;
	int64_t t29 = 11LL;

	t29 = ((x157^(x158^x159))*x160);

	if (t29 != 21474834250LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = 0;
	int16_t x163 = INT16_MAX;
	static int64_t t30 = 3253448LL;

	t30 = ((x161^(x162^x163))*x164);

	if (t30 != -120534503984468LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x165 = INT32_MIN;
	volatile int32_t x167 = INT32_MIN;
	uint8_t x168 = 45U;
	volatile int32_t t31 = -66;

	t31 = ((x165^(x166^x167))*x168);

	if (t31 != 1474515) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	int32_t x171 = 10449;
	int16_t x172 = -1;
	static volatile int64_t t32 = -39955329362LL;

	t32 = ((x169^(x170^x171))*x172);

	if (t32 != -9223372036854765393LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x173 = INT32_MAX;
	int16_t x174 = INT16_MIN;
	uint64_t x175 = 77966316844727LLU;
	volatile int64_t x176 = 15739712032349490LL;
	volatile uint64_t t33 = 2LLU;

	t33 = ((x173^(x174^x175))*x176);

	if (t33 != 5155521478766131216LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = -1;
	volatile uint8_t x182 = 1U;
	int32_t x184 = 310347;

	t34 = ((x181^(x182^x183))*x184);

	if (t34 != 231208515LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = -1;
	volatile uint8_t x187 = 1U;
	static uint32_t x188 = 11442U;
	uint32_t t35 = 20U;

	t35 = ((x185^(x186^x187))*x188);

	if (t35 != 374908572U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = INT64_MIN;
	static uint64_t x190 = 1670600632LLU;
	volatile int32_t x191 = INT32_MAX;
	int8_t x192 = INT8_MIN;

	t36 = ((x189^(x190^x191))*x192);

	if (t36 != 18446744012668525696LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = INT64_MAX;
	int64_t x194 = INT64_MIN;
	int32_t x195 = 22;
	int32_t x196 = INT32_MIN;
	volatile int64_t t37 = -2797061935070525906LL;

	t37 = ((x193^(x194^x195))*x196);

	if (t37 != 49392123904LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x197 = INT64_MAX;
	static uint64_t x198 = 116113187015028LLU;
	int16_t x199 = -1177;
	volatile uint64_t x200 = UINT64_MAX;

	t38 = ((x197^(x198^x199))*x200);

	if (t38 != 9223255923667759636LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = 20;
	int16_t x206 = INT16_MIN;
	static int8_t x207 = INT8_MIN;
	volatile int64_t t39 = 5959296488LL;

	t39 = ((x205^(x206^x207))*x208);

	if (t39 != -32660LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x209 = 15977712LLU;
	uint16_t x211 = UINT16_MAX;
	volatile int64_t x212 = INT64_MIN;
	volatile uint64_t t40 = 9LLU;

	t40 = ((x209^(x210^x211))*x212);

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x215 = 1595;
	static volatile int16_t x216 = INT16_MIN;

	t41 = ((x213^(x214^x215))*x216);

	if (t41 != 53116928U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = INT8_MAX;
	int64_t x218 = INT64_MIN;
	uint16_t x220 = UINT16_MAX;
	int64_t t42 = -20669058019LL;

	t42 = ((x217^(x218^x219))*x220);

	if (t42 != 8322945LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t t43 = 173752LLU;

	t43 = ((x225^(x226^x227))*x228);

	if (t43 != 832LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x229 = UINT16_MAX;
	uint8_t x230 = 5U;
	uint8_t x231 = UINT8_MAX;

	t44 = ((x229^(x230^x231))*x232);

	if (t44 != -8356480) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x237 = -1;
	static int32_t x238 = INT32_MIN;
	static int16_t x239 = -2;
	uint64_t x240 = 3569702144437513731LLU;
	volatile uint64_t t45 = 30210935LLU;

	t45 = ((x237^(x238^x239))*x240);

	if (t45 != 4104795964326669827LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x242 = 28601421LLU;
	int8_t x244 = INT8_MIN;
	uint64_t t46 = 2381239667509677613LLU;

	t46 = ((x241^(x242^x243))*x244);

	if (t46 != 18446738473443526400LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x246 = INT16_MIN;
	uint64_t x248 = UINT64_MAX;
	uint64_t t47 = 37LLU;

	t47 = ((x245^(x246^x247))*x248);

	if (t47 != 18446744073696823734LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	uint32_t x251 = 24U;
	int8_t x252 = INT8_MIN;

	t48 = ((x249^(x250^x251))*x252);

	if (t48 != 4294964224U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x253 = -237416715LL;
	int8_t x254 = -1;
	volatile int16_t x255 = INT16_MIN;
	uint16_t x256 = 6U;
	static int64_t t49 = -7965875LL;

	t49 = ((x253^(x254^x255))*x256);

	if (t49 != -1424546244LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x265 = INT32_MAX;
	uint8_t x266 = 0U;
	static uint64_t x267 = 1593053860731LLU;
	volatile uint64_t x268 = 3866314955772004202LLU;
	uint64_t t50 = 5098773LLU;

	t50 = ((x265^(x266^x267))*x268);

	if (t50 != 15704290643915836072LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x269 = UINT8_MAX;
	uint32_t x270 = 44418U;
	int16_t x271 = -1;
	static volatile int8_t x272 = INT8_MIN;
	volatile uint32_t t51 = 423614U;

	t51 = ((x269^(x270^x271))*x272);

	if (t51 != 5684992U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x273 = 50336693LLU;
	int64_t x274 = -1LL;
	uint8_t x275 = 98U;
	volatile uint64_t x276 = 1916926171539899185LLU;
	uint64_t t52 = 8289425994230015993LLU;

	t52 = ((x273^(x274^x275))*x276);

	if (t52 != 9456940961166306216LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x277 = 5632681852LL;
	uint16_t x278 = 6U;
	static int16_t x279 = -25;
	volatile int8_t x280 = -1;

	t53 = ((x277^(x278^x279))*x280);

	if (t53 != 5632681827LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x285 = -13288;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = -1;
	uint8_t x288 = 3U;
	volatile int32_t t54 = 1;

	t54 = ((x285^(x286^x287))*x288);

	if (t54 != 39240) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x289 = -1;
	static int32_t x290 = -1;
	static volatile int64_t x291 = -1LL;
	int64_t x292 = -1LL;
	volatile int64_t t55 = 4533711088882493LL;

	t55 = ((x289^(x290^x291))*x292);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x294 = 775321774;
	int32_t x295 = -36;
	uint32_t x296 = 1U;
	uint32_t t56 = 57170141U;

	t56 = ((x293^(x294^x295))*x296);

	if (t56 != 775321741U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x297 = 7152;
	int8_t x298 = -7;
	uint16_t x300 = 449U;

	t57 = ((x297^(x298^x299))*x300);

	if (t57 != 3213942LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x302 = 50U;
	int8_t x303 = INT8_MIN;
	int32_t x304 = 852;
	volatile int32_t t58 = -1221349;

	t58 = ((x301^(x302^x303))*x304);

	if (t58 != -152508) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x311 = INT32_MAX;
	int32_t x312 = 0;
	uint64_t t59 = 73271079LLU;

	t59 = ((x309^(x310^x311))*x312);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x317 = 245988;
	static uint16_t x318 = UINT16_MAX;
	uint8_t x319 = 42U;
	volatile int32_t t60 = -255950;

	t60 = ((x317^(x318^x319))*x320);

	if (t60 != -212785) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x325 = 42267U;
	uint32_t x326 = 29367U;
	volatile int64_t x327 = 19258546899406LL;
	uint64_t x328 = 2524247254904738680LLU;
	static uint64_t t61 = 5603840LLU;

	t61 = ((x325^(x326^x327))*x328);

	if (t61 != 9578525146294223856LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x329 = UINT32_MAX;
	static int8_t x330 = INT8_MAX;
	static volatile int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MIN;
	uint32_t t62 = 15077313U;

	t62 = ((x329^(x330^x331))*x332);

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x337 = INT16_MIN;
	uint64_t x338 = 127343LLU;
	int8_t x339 = -17;
	int64_t x340 = -1LL;

	t63 = ((x337^(x338^x339))*x340);

	if (t63 != 18446744073709449600LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x341 = UINT64_MAX;
	volatile uint8_t x342 = 0U;
	volatile uint64_t t64 = 26021891420649LLU;

	t64 = ((x341^(x342^x343))*x344);

	if (t64 != 18446744073695221184LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x357 = 20U;
	int8_t x358 = -1;
	static int16_t x359 = INT16_MAX;
	int32_t t65 = -159;

	t65 = ((x357^(x358^x359))*x360);

	if (t65 != -3700524) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x361 = 2U;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = INT32_MIN;
	int8_t x364 = -1;
	static volatile int32_t t66 = -1593159;

	t66 = ((x361^(x362^x363))*x364);

	if (t66 != 2147418115) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x365 = 15799723LL;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = -1;
	static volatile uint64_t t67 = 10003950318LLU;

	t67 = ((x365^(x366^x367))*x368);

	if (t67 != 18446744073469295967LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x369 = INT8_MIN;
	int16_t x370 = -1;
	int16_t x371 = INT16_MAX;
	int32_t x372 = 5;
	static volatile int32_t t68 = 36870865;

	t68 = ((x369^(x370^x371))*x372);

	if (t68 != 163200) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x373 = 31;
	int64_t x375 = -329437795291LL;
	uint16_t x376 = 2U;

	t69 = ((x373^(x374^x375))*x376);

	if (t69 != 658875590516LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MIN;
	volatile int16_t x387 = INT16_MAX;
	static volatile uint32_t x388 = UINT32_MAX;

	t70 = ((x385^(x386^x387))*x388);

	if (t70 != 4294934529U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x389 = 1907154829LLU;
	volatile int8_t x390 = INT8_MIN;
	uint16_t x391 = UINT16_MAX;
	static int8_t x392 = 11;
	volatile uint64_t t71 = 69915593920LLU;

	t71 = ((x389^(x390^x391))*x392);

	if (t71 != 18446744052731387750LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x393 = INT16_MIN;
	uint32_t x394 = 2U;
	int32_t x395 = INT32_MAX;
	int64_t t72 = 428854686186867LL;

	t72 = ((x393^(x394^x395))*x396);

	if (t72 != -2147516413LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x397 = 3;
	int8_t x398 = 32;
	static int8_t x400 = INT8_MIN;
	static volatile int32_t t73 = -15;

	t73 = ((x397^(x398^x399))*x400);

	if (t73 != -75008) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x413 = 14;
	uint64_t x414 = 4043684677582213LLU;
	int64_t x415 = -397LL;
	static volatile uint16_t x416 = 3U;
	volatile uint64_t t74 = 0LLU;

	t74 = ((x413^(x414^x415))*x416);

	if (t74 != 18434613019676806120LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x417 = 1U;
	int8_t x418 = INT8_MIN;
	volatile int64_t x419 = INT64_MAX;
	volatile int8_t x420 = -1;
	static int64_t t75 = 212LL;

	t75 = ((x417^(x418^x419))*x420);

	if (t75 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x425 = 14LLU;
	static uint32_t x426 = 507016137U;
	uint64_t x427 = UINT64_MAX;
	int64_t x428 = INT64_MAX;
	uint64_t t76 = 67454123933243844LLU;

	t76 = ((x425^(x426^x427))*x428);

	if (t76 != 507016136LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x429 = INT64_MIN;
	static volatile int16_t x430 = -3;
	uint64_t t77 = 14333802977842LLU;

	t77 = ((x429^(x430^x431))*x432);

	if (t77 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x433 = 1;
	int16_t x435 = 28;
	static volatile uint32_t t78 = 200U;

	t78 = ((x433^(x434^x435))*x436);

	if (t78 != 4285129636U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x437 = 106LLU;
	int64_t x438 = INT64_MIN;
	int8_t x440 = INT8_MAX;
	volatile uint64_t t79 = 6793879247989LLU;

	t79 = ((x437^(x438^x439))*x440);

	if (t79 != 9223372036925270714LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x442 = INT16_MIN;
	int32_t x443 = INT32_MAX;
	static volatile int16_t x444 = 428;
	int64_t t80 = 22962461LL;

	t80 = ((x441^(x442^x443))*x444);

	if (t80 != 919108976640LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x449 = UINT32_MAX;
	int16_t x451 = INT16_MIN;
	int32_t x452 = INT32_MIN;
	static uint32_t t81 = 75U;

	t81 = ((x449^(x450^x451))*x452);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x453 = INT16_MIN;
	static uint32_t x454 = 620410U;
	int8_t x455 = INT8_MIN;
	static uint16_t x456 = 5U;
	static volatile uint32_t t82 = 2U;

	t82 = ((x453^(x454^x455))*x456);

	if (t82 != 2960610U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x457 = INT16_MIN;
	volatile uint64_t x459 = 555401LLU;
	volatile int64_t x460 = INT64_MIN;

	t83 = ((x457^(x458^x459))*x460);

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x466 = INT32_MAX;
	static int8_t x467 = -31;
	volatile uint32_t t84 = 0U;

	t84 = ((x465^(x466^x467))*x468);

	if (t84 != 2147487585U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x471 = UINT16_MAX;
	static uint32_t t85 = 196544154U;

	t85 = ((x469^(x470^x471))*x472);

	if (t85 != 4294901888U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x473 = 2;
	int64_t x474 = -21LL;
	volatile int16_t x475 = INT16_MIN;
	volatile int64_t t86 = -242418LL;

	t86 = ((x473^(x474^x475))*x476);

	if (t86 != -70319352053760LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x477 = UINT64_MAX;
	volatile uint16_t x478 = UINT16_MAX;
	uint16_t x479 = UINT16_MAX;

	t87 = ((x477^(x478^x479))*x480);

	if (t87 != 128LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x485 = INT32_MIN;
	uint64_t x487 = 12043573947939LLU;
	volatile int64_t x488 = INT64_MIN;
	static volatile uint64_t t88 = 52672657675LLU;

	t88 = ((x485^(x486^x487))*x488);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x497 = INT64_MIN;
	static int64_t x500 = -1LL;

	t89 = ((x497^(x498^x499))*x500);

	if (t89 != 24362020LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x505 = 1U;
	volatile uint64_t x506 = UINT64_MAX;
	uint64_t x507 = 152LLU;
	volatile int16_t x508 = 16172;
	uint64_t t90 = 413739649039440LLU;

	t90 = ((x505^(x506^x507))*x508);

	if (t90 != 18446744073707061128LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x518 = 5U;
	static int64_t x519 = -4589279021LL;
	uint64_t x520 = 2885696803122166456LLU;
	volatile uint64_t t91 = 71LLU;

	t91 = ((x517^(x518^x519))*x520);

	if (t91 != 9520835147449161168LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x521 = 3995U;
	int64_t x522 = -1LL;
	volatile int16_t x523 = INT16_MAX;
	uint32_t x524 = UINT32_MAX;
	int64_t t92 = -548800LL;

	t92 = ((x521^(x522^x523))*x524);

	if (t92 != -123579093979035LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x525 = -1;
	static int16_t x526 = -1;
	static uint8_t x527 = 58U;
	int32_t x528 = 117;
	int32_t t93 = 9645156;

	t93 = ((x525^(x526^x527))*x528);

	if (t93 != 6786) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x529 = UINT64_MAX;
	int8_t x530 = 59;
	volatile uint64_t t94 = 48LLU;

	t94 = ((x529^(x530^x531))*x532);

	if (t94 != 18446744071562068028LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x533 = 16U;
	volatile int32_t x535 = 6860;
	uint64_t x536 = UINT64_MAX;

	t95 = ((x533^(x534^x535))*x536);

	if (t95 != 1436026847156960LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x537 = 2863796487559314LLU;
	static int16_t x538 = INT16_MIN;
	int64_t x539 = INT64_MAX;
	int64_t x540 = -53118507LL;

	t96 = ((x537^(x538^x539))*x540);

	if (t96 != 481231778680476337LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x545 = 2U;
	static int32_t x546 = -1;
	uint16_t x547 = 1479U;
	volatile int32_t x548 = 6;
	volatile uint32_t t97 = 30162016U;

	t97 = ((x545^(x546^x547))*x548);

	if (t97 != 4294958428U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x557 = 7;
	int32_t x558 = 8270;
	uint32_t x559 = UINT32_MAX;
	int8_t x560 = -1;
	uint32_t t98 = 47530999U;

	t98 = ((x557^(x558^x559))*x560);

	if (t98 != 8266U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x569 = 10LLU;
	volatile int64_t x570 = INT64_MAX;
	int64_t x571 = 118915102303LL;
	volatile uint64_t x572 = 6573965LLU;
	uint64_t t99 = 16024LLU;

	t99 = ((x569^(x570^x571))*x572);

	if (t99 != 8441628316402600098LLU) { NG(); } else { ; }
	
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

