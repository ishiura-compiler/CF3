#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = 1;
static uint16_t x8 = 75U;
int8_t x10 = INT8_MIN;
static int64_t x18 = -1LL;
uint32_t x22 = 6475814U;
volatile uint64_t t3 = 3674002LLU;
int8_t x26 = INT8_MIN;
uint64_t x35 = UINT64_MAX;
uint16_t x43 = UINT16_MAX;
int64_t x44 = -157128LL;
int16_t x45 = INT16_MIN;
static uint8_t x46 = UINT8_MAX;
static uint16_t x52 = 12U;
volatile uint8_t x57 = 44U;
uint16_t x59 = UINT16_MAX;
static int16_t x61 = INT16_MIN;
int32_t x63 = 1;
static uint32_t x67 = 743821U;
int8_t x80 = -1;
int16_t x84 = -1;
int64_t x91 = INT64_MIN;
volatile int64_t t19 = -189454LL;
uint32_t x108 = UINT32_MAX;
int32_t t21 = 67296865;
int64_t x117 = -340593296LL;
int16_t x123 = -4;
uint16_t x125 = UINT16_MAX;
volatile uint16_t x128 = 3U;
volatile int32_t t25 = 205127068;
int32_t x130 = -95831836;
int8_t x132 = INT8_MIN;
uint32_t x133 = UINT32_MAX;
uint32_t t27 = 11826U;
uint16_t x139 = 2046U;
volatile uint32_t x146 = 124U;
uint64_t t30 = 10819396893713998LLU;
int32_t x150 = INT32_MIN;
volatile int64_t x152 = -1LL;
volatile uint64_t x170 = 507061055684219923LLU;
volatile uint64_t t36 = 14079613099LLU;
volatile uint8_t x192 = UINT8_MAX;
volatile int64_t t38 = 425478833343LL;
uint64_t t39 = 136430LLU;
volatile int16_t x217 = -632;
uint64_t t43 = 2530751431810LLU;
int16_t x221 = INT16_MIN;
int16_t x222 = INT16_MIN;
volatile uint64_t x226 = UINT64_MAX;
uint8_t x227 = UINT8_MAX;
int16_t x228 = INT16_MIN;
int16_t x229 = INT16_MIN;
int64_t x232 = -4251LL;
int64_t x233 = -1LL;
int16_t x234 = -1;
uint64_t x240 = UINT64_MAX;
volatile int8_t x246 = INT8_MIN;
static uint64_t x249 = UINT64_MAX;
int32_t x250 = INT32_MIN;
volatile int64_t x254 = -1346596881LL;
int32_t x266 = -1;
uint64_t t54 = 6046677632324796LLU;
static volatile int32_t x269 = -1;
volatile uint32_t x272 = 6U;
uint32_t t55 = 1904U;
volatile int16_t x274 = 18;
int8_t x279 = INT8_MIN;
volatile int32_t t59 = 14983122;
int8_t x294 = INT8_MIN;
uint64_t x302 = UINT64_MAX;
int8_t x304 = INT8_MAX;
volatile uint64_t t62 = 21699LLU;
int64_t x312 = INT64_MIN;
static int64_t x325 = INT64_MIN;
static int32_t x331 = INT32_MIN;
uint16_t x335 = 13U;
uint64_t t72 = 51809826758527167LLU;
static int64_t x349 = INT64_MIN;
uint64_t x350 = UINT64_MAX;
uint32_t x352 = UINT32_MAX;
int8_t x359 = 3;
static int16_t x361 = INT16_MIN;
int8_t x362 = 60;
int32_t x365 = INT32_MIN;
static uint8_t x383 = 50U;
volatile int32_t x386 = 1;
uint64_t x388 = 6593126213511980620LLU;
uint8_t x389 = 4U;
int32_t x401 = -39;
volatile int64_t x403 = INT64_MIN;
static int64_t t86 = -2LL;
static int64_t x413 = INT64_MIN;
static uint64_t t88 = 15756012062LLU;
int8_t x421 = 1;
uint8_t x422 = 0U;
uint8_t x424 = 7U;
uint64_t x429 = 5721863970629023LLU;
int32_t x434 = 1383640;
static volatile int32_t t93 = -403;
uint8_t x445 = 3U;
int32_t x447 = INT32_MIN;
int16_t x448 = INT16_MAX;
uint32_t x451 = 1U;
uint16_t x452 = 1099U;
int16_t x462 = INT16_MAX;
int64_t x464 = 9476LL;
int16_t x471 = 20;
volatile uint64_t t99 = 25014LLU;


void f0(void) {
	static int32_t x6 = -863;
	static uint32_t x7 = 12U;
	uint32_t t0 = 32697582U;

	t0 = (x5-(x6-(x7^x8)));

	if (t0 != 935U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	uint8_t x11 = 7U;
	int8_t x12 = -3;
	volatile int32_t t1 = -1229;

	t1 = (x9-(x10-(x11^x12)));

	if (t1 != -6) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x19 = 1377360729684158974LLU;
	volatile uint16_t x20 = 7748U;
	volatile uint64_t t2 = 199687738LLU;

	t2 = (x17-(x18-(x19^x20)));

	if (t2 != 1377360727536678843LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x21 = -1;
	static uint64_t x23 = UINT64_MAX;
	uint32_t x24 = 14022U;

	t3 = (x21-(x22-(x23^x24)));

	if (t3 != 18446744073703061778LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = UINT8_MAX;
	static uint64_t x27 = UINT64_MAX;
	uint32_t x28 = UINT32_MAX;
	volatile uint64_t t4 = 10579434690491040LLU;

	t4 = (x25-(x26-(x27^x28)));

	if (t4 != 18446744069414584703LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x33 = 30U;
	uint64_t x34 = UINT64_MAX;
	int32_t x36 = -41123791;
	volatile uint64_t t5 = 8645296096124566LLU;

	t5 = (x33-(x34-(x35^x36)));

	if (t5 != 41123821LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = -160;
	volatile int64_t t6 = 3787819LL;

	t6 = (x41-(x42-(x43^x44)));

	if (t6 != -170521LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x47 = 1540;
	volatile uint64_t x48 = 78220321822918LLU;
	uint64_t t7 = 2222112411292338734LLU;

	t7 = (x45-(x46-(x47^x48)));

	if (t7 != 78220321791427LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x49 = INT16_MIN;
	uint64_t x50 = 1485LLU;
	volatile uint8_t x51 = UINT8_MAX;
	volatile uint64_t t8 = 6LLU;

	t8 = (x49-(x50-(x51^x52)));

	if (t8 != 18446744073709517606LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = -1;
	uint32_t x54 = UINT32_MAX;
	volatile int8_t x55 = INT8_MIN;
	static int16_t x56 = -3519;
	volatile uint32_t t9 = 512233890U;

	t9 = (x53-(x54-(x55^x56)));

	if (t9 != 3521U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x58 = -1;
	int32_t x60 = INT32_MIN;
	static int32_t t10 = -2831;

	t10 = (x57-(x58-(x59^x60)));

	if (t10 != -2147418068) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x62 = 0U;
	uint8_t x64 = UINT8_MAX;
	static uint32_t t11 = 6U;

	t11 = (x61-(x62-(x63^x64)));

	if (t11 != 4294934782U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = UINT64_MAX;
	int8_t x66 = INT8_MAX;
	uint64_t x68 = 12809344383082LLU;
	volatile uint64_t t12 = 15432365027LLU;

	t12 = (x65-(x66-(x67^x68)));

	if (t12 != 12809343639911LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MIN;
	static uint64_t x74 = UINT64_MAX;
	volatile uint64_t x75 = 849374992151LLU;
	uint32_t x76 = UINT32_MAX;
	volatile uint64_t t13 = 1847LLU;

	t13 = (x73-(x74-(x75^x76)));

	if (t13 != 9223372883991865577LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x77 = 7;
	static int32_t x78 = INT32_MIN;
	uint16_t x79 = UINT16_MAX;
	int32_t t14 = -35739;

	t14 = (x77-(x78-(x79^x80)));

	if (t14 != 2147418119) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = 47153LL;
	int16_t x82 = INT16_MIN;
	uint8_t x83 = 17U;
	int64_t t15 = -13870443853288LL;

	t15 = (x81-(x82-(x83^x84)));

	if (t15 != 79903LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -4151039819919LL;
	uint64_t x86 = UINT64_MAX;
	int8_t x87 = 1;
	static int64_t x88 = INT64_MAX;
	volatile uint64_t t16 = 4LLU;

	t16 = (x85-(x86-(x87^x88)));

	if (t16 != 9223367885814955888LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = 10;
	int64_t x90 = -558914LL;
	volatile int16_t x92 = 922;
	volatile int64_t t17 = -16614LL;

	t17 = (x89-(x90-(x91^x92)));

	if (t17 != -9223372036854215962LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = -1LL;
	static uint8_t x95 = UINT8_MAX;
	int32_t x96 = -2034;
	volatile int64_t t18 = -114LL;

	t18 = (x93-(x94-(x95^x96)));

	if (t18 != 63729LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 124U;
	int32_t x98 = -1;
	int64_t x99 = INT64_MAX;
	volatile uint32_t x100 = 426636806U;

	t19 = (x97-(x98-(x99^x100)));

	if (t19 != 9223372036428139126LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int16_t x106 = INT16_MAX;
	int32_t x107 = -1;
	uint32_t t20 = 3632926U;

	t20 = (x105-(x106-(x107^x108)));

	if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x109 = -173257361;
	static volatile int8_t x110 = 3;
	int16_t x111 = INT16_MAX;
	static int8_t x112 = -1;

	t21 = (x109-(x110-(x111^x112)));

	if (t21 != -173290132) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x113 = INT64_MAX;
	static uint8_t x114 = UINT8_MAX;
	int64_t x115 = -3930563299475982LL;
	volatile int64_t x116 = 68111216242LL;
	volatile int64_t t22 = -23LL;

	t22 = (x113-(x114-(x115^x116)));

	if (t22 != 9219441436086948480LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x118 = -1;
	int8_t x119 = -1;
	int8_t x120 = INT8_MIN;
	int64_t t23 = 172LL;

	t23 = (x117-(x118-(x119^x120)));

	if (t23 != -340593168LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	volatile uint32_t x122 = UINT32_MAX;
	uint64_t x124 = 713979256927809LLU;
	uint64_t t24 = 6434LLU;

	t24 = (x121-(x122-(x123^x124)));

	if (t24 != 18446030090157623742LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x126 = -21;
	volatile int16_t x127 = INT16_MAX;

	t25 = (x125-(x126-(x127^x128)));

	if (t25 != 98320) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = -1;
	int8_t x131 = -1;
	int32_t t26 = -754510366;

	t26 = (x129-(x130-(x131^x132)));

	if (t26 != 95831962) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x134 = 17U;
	volatile int16_t x135 = -4;
	uint16_t x136 = 997U;

	t27 = (x133-(x134-(x135^x136)));

	if (t27 != 4294966279U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x137 = UINT16_MAX;
	int8_t x138 = INT8_MIN;
	int16_t x140 = -1;
	volatile int32_t t28 = -2;

	t28 = (x137-(x138-(x139^x140)));

	if (t28 != 63616) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x141 = 0;
	volatile int8_t x142 = -16;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = 22U;
	static int32_t t29 = -5;

	t29 = (x141-(x142-(x143^x144)));

	if (t29 != -2147483610) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x145 = 413625585882779LLU;
	volatile uint16_t x147 = UINT16_MAX;
	volatile int8_t x148 = INT8_MIN;

	t30 = (x145-(x146-(x147^x148)));

	if (t30 != 413625585817246LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int16_t x151 = -252;
	uint64_t t31 = 4040LLU;

	t31 = (x149-(x150-(x151^x152)));

	if (t31 != 2147483898LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x161 = 13U;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = UINT32_MAX;
	static volatile int16_t x164 = -1;
	uint32_t t32 = 300295729U;

	t32 = (x161-(x162-(x163^x164)));

	if (t32 != 2147483661U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x169 = 1;
	static int64_t x171 = -1LL;
	static int32_t x172 = INT32_MIN;
	volatile uint64_t t33 = 9LLU;

	t33 = (x169-(x170-(x171^x172)));

	if (t33 != 17939683020172815341LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x173 = -16055;
	uint8_t x174 = UINT8_MAX;
	volatile int16_t x175 = -1;
	static int32_t x176 = INT32_MIN;
	int32_t t34 = 0;

	t34 = (x173-(x174-(x175^x176)));

	if (t34 != 2147467337) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x177 = 414582025LL;
	volatile int16_t x178 = INT16_MAX;
	uint16_t x179 = 19U;
	int32_t x180 = 227;
	static int64_t t35 = 4253617209126LL;

	t35 = (x177-(x178-(x179^x180)));

	if (t35 != 414549498LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x185 = 1771U;
	volatile uint64_t x186 = 0LLU;
	static volatile int16_t x187 = INT16_MIN;
	int8_t x188 = -1;

	t36 = (x185-(x186-(x187^x188)));

	if (t36 != 34538LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = -2;
	volatile int32_t x190 = INT32_MIN;
	uint32_t x191 = 30951158U;
	uint32_t t37 = 321U;

	t37 = (x189-(x190-(x191^x192)));

	if (t37 != 2178434567U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x193 = -1;
	volatile int32_t x194 = INT32_MIN;
	static int64_t x195 = 35508LL;
	static volatile uint8_t x196 = 2U;

	t38 = (x193-(x194-(x195^x196)));

	if (t38 != 2147519157LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x197 = -1LL;
	int32_t x198 = 4;
	uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 32190955LLU;

	t39 = (x197-(x198-(x199^x200)));

	if (t39 != 18446744073677360655LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x201 = 1;
	int32_t x202 = INT32_MIN;
	uint16_t x203 = 261U;
	static uint64_t x204 = UINT64_MAX;
	uint64_t t40 = 0LLU;

	t40 = (x201-(x202-(x203^x204)));

	if (t40 != 2147483387LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = -16792996LL;
	uint16_t x206 = 451U;
	int8_t x207 = -1;
	volatile int8_t x208 = 13;
	volatile int64_t t41 = -861LL;

	t41 = (x205-(x206-(x207^x208)));

	if (t41 != -16793461LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x213 = INT8_MIN;
	uint16_t x214 = UINT16_MAX;
	uint32_t x215 = 809839755U;
	int16_t x216 = INT16_MIN;
	static volatile uint32_t t42 = 15U;

	t42 = (x213-(x214-(x215^x216)));

	if (t42 != 3485051916U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x218 = INT32_MAX;
	uint64_t x219 = 550LLU;
	int64_t x220 = INT64_MAX;

	t43 = (x217-(x218-(x219^x220)));

	if (t43 != 9223372034707290978LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x223 = -1;
	volatile int16_t x224 = 6790;
	static int32_t t44 = -1;

	t44 = (x221-(x222-(x223^x224)));

	if (t44 != -6791) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x225 = -243;
	volatile uint64_t t45 = 121831117159795LLU;

	t45 = (x225-(x226-(x227^x228)));

	if (t45 != 18446744073709518861LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x230 = UINT32_MAX;
	uint64_t x231 = 63766LLU;
	volatile uint64_t t46 = 62523LLU;

	t46 = (x229-(x230-(x231^x232)));

	if (t46 != 18446744069414491764LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x235 = INT32_MIN;
	static volatile uint32_t x236 = 1668U;
	volatile int64_t t47 = 11548646LL;

	t47 = (x233-(x234-(x235^x236)));

	if (t47 != -2147481980LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x238 = -97;
	volatile int16_t x239 = -1;
	uint64_t t48 = 15465786LLU;

	t48 = (x237-(x238-(x239^x240)));

	if (t48 != 96LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = -1LL;
	int8_t x242 = -1;
	int64_t x243 = INT64_MIN;
	volatile int64_t x244 = -500161940111854552LL;
	volatile int64_t t49 = 28371510949588LL;

	t49 = (x241-(x242-(x243^x244)));

	if (t49 != 8723210096742921256LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x245 = 23;
	volatile uint8_t x247 = 15U;
	int8_t x248 = INT8_MAX;
	static int32_t t50 = 796050593;

	t50 = (x245-(x246-(x247^x248)));

	if (t50 != 263) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x251 = 22U;
	int8_t x252 = -1;
	volatile uint64_t t51 = 30518462LLU;

	t51 = (x249-(x250-(x251^x252)));

	if (t51 != 2147483624LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = -13;
	static int64_t x255 = INT64_MIN;
	volatile int32_t x256 = 116735351;
	volatile int64_t t52 = -6120008176433770LL;

	t52 = (x253-(x254-(x255^x256)));

	if (t52 != -9223372035391443589LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x261 = UINT16_MAX;
	volatile uint8_t x262 = UINT8_MAX;
	uint16_t x263 = UINT16_MAX;
	uint8_t x264 = 0U;
	volatile int32_t t53 = -366;

	t53 = (x261-(x262-(x263^x264)));

	if (t53 != 130815) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x265 = UINT64_MAX;
	static int16_t x267 = 0;
	int32_t x268 = INT32_MAX;

	t54 = (x265-(x266-(x267^x268)));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x270 = INT8_MAX;
	volatile uint16_t x271 = 11158U;

	t55 = (x269-(x270-(x271^x272)));

	if (t55 != 11024U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x273 = INT16_MIN;
	volatile uint8_t x275 = 4U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t56 = -1;

	t56 = (x273-(x274-(x275^x276)));

	if (t56 != -32910) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x277 = INT8_MAX;
	uint32_t x278 = UINT32_MAX;
	uint8_t x280 = 77U;
	volatile uint32_t t57 = 21U;

	t57 = (x277-(x278-(x279^x280)));

	if (t57 != 77U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MIN;
	volatile uint16_t x282 = 13024U;
	static int16_t x283 = 72;
	int16_t x284 = INT16_MAX;
	int32_t t58 = 3;

	t58 = (x281-(x282-(x283^x284)));

	if (t58 != 19543) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = 1;
	volatile int16_t x287 = -1;
	volatile uint16_t x288 = UINT16_MAX;

	t59 = (x285-(x286-(x287^x288)));

	if (t59 != -98305) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x293 = -1;
	int8_t x295 = -1;
	int32_t x296 = -9;
	volatile int32_t t60 = 34376993;

	t60 = (x293-(x294-(x295^x296)));

	if (t60 != 135) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x297 = 197LL;
	static volatile int32_t x298 = -1;
	int32_t x299 = INT32_MIN;
	int32_t x300 = -103969235;
	static volatile int64_t t61 = -113LL;

	t61 = (x297-(x298-(x299^x300)));

	if (t61 != 2043514611LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x303 = 23U;

	t62 = (x301-(x302-(x303^x304)));

	if (t62 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x305 = 317881U;
	static int16_t x306 = -1;
	int32_t x307 = -1;
	int16_t x308 = 1;
	uint32_t t63 = 2342464U;

	t63 = (x305-(x306-(x307^x308)));

	if (t63 != 317880U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x309 = 219U;
	static volatile uint64_t x310 = UINT64_MAX;
	int16_t x311 = -1;
	uint64_t t64 = 41287028285238LLU;

	t64 = (x309-(x310-(x311^x312)));

	if (t64 != 9223372036854776027LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = -1;
	uint64_t x314 = 88691961887509LLU;
	int32_t x315 = 451800;
	static int16_t x316 = INT16_MIN;
	static volatile uint64_t t65 = 64591775614003416LLU;

	t65 = (x313-(x314-(x315^x316)));

	if (t65 != 18446655381747231170LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x317 = 18U;
	static int64_t x318 = INT64_MAX;
	uint32_t x319 = 63788U;
	static uint64_t x320 = 994673742405594143LLU;
	uint64_t t66 = 60538643770LLU;

	t66 = (x317-(x318-(x319^x320)));

	if (t66 != 10218045779260380486LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x321 = 17045323973LLU;
	volatile uint8_t x322 = UINT8_MAX;
	static int32_t x323 = INT32_MIN;
	volatile int16_t x324 = -1;
	volatile uint64_t t67 = 897624LLU;

	t67 = (x321-(x322-(x323^x324)));

	if (t67 != 19192807365LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x326 = -1;
	int32_t x327 = -1;
	static int16_t x328 = INT16_MIN;
	int64_t t68 = -2LL;

	t68 = (x325-(x326-(x327^x328)));

	if (t68 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x329 = 82133001LLU;
	static int32_t x330 = INT32_MAX;
	static uint32_t x332 = 41380U;
	volatile uint64_t t69 = 4494125886163501411LLU;

	t69 = (x329-(x330-(x331^x332)));

	if (t69 != 18446744069496758702LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = INT8_MIN;
	static uint64_t x336 = 17056954898612LLU;
	volatile uint64_t t70 = 1LLU;

	t70 = (x333-(x334-(x335^x336)));

	if (t70 != 17061249866040LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = INT32_MIN;
	int32_t x338 = -1;
	uint32_t x339 = UINT32_MAX;
	uint32_t x340 = 2U;
	volatile uint32_t t71 = 26600U;

	t71 = (x337-(x338-(x339^x340)));

	if (t71 != 2147483646U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x341 = UINT16_MAX;
	int32_t x342 = INT32_MIN;
	int8_t x343 = 3;
	uint64_t x344 = UINT64_MAX;

	t72 = (x341-(x342-(x343^x344)));

	if (t72 != 2147549179LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x351 = INT32_MIN;
	uint64_t t73 = 510987279901297LLU;

	t73 = (x349-(x350-(x351^x352)));

	if (t73 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x353 = 15U;
	uint32_t x354 = 179510055U;
	uint32_t x355 = UINT32_MAX;
	volatile int64_t x356 = 546258226507905LL;
	int64_t t74 = -7897282LL;

	t74 = (x353-(x354-(x355^x356)));

	if (t74 != 546256720032870LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x357 = -1;
	volatile int8_t x358 = -1;
	int16_t x360 = INT16_MIN;
	volatile int32_t t75 = 12787;

	t75 = (x357-(x358-(x359^x360)));

	if (t75 != -32765) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x363 = INT32_MIN;
	uint64_t x364 = 2LLU;
	static volatile uint64_t t76 = 548100475036005LLU;

	t76 = (x361-(x362-(x363^x364)));

	if (t76 != 18446744071562035142LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x366 = INT8_MIN;
	int64_t x367 = -1LL;
	uint16_t x368 = 16595U;
	int64_t t77 = -121960470807418290LL;

	t77 = (x365-(x366-(x367^x368)));

	if (t77 != -2147500116LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x369 = INT32_MIN;
	int64_t x370 = INT64_MAX;
	static int64_t x371 = -16608784476595LL;
	int32_t x372 = -202;
	volatile int64_t t78 = 3554092244797608LL;

	t78 = (x369-(x370-(x371^x372)));

	if (t78 != -9223355430217782916LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = 3;
	int8_t x374 = -7;
	uint8_t x375 = 6U;
	static int64_t x376 = -22LL;
	volatile int64_t t79 = 77LL;

	t79 = (x373-(x374-(x375^x376)));

	if (t79 != -10LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = INT16_MIN;
	static volatile uint16_t x378 = 252U;
	volatile int16_t x379 = INT16_MIN;
	static int16_t x380 = 0;
	int32_t t80 = 3952;

	t80 = (x377-(x378-(x379^x380)));

	if (t80 != -65788) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = -1;
	volatile int32_t x382 = INT32_MAX;
	int64_t x384 = -1LL;
	static int64_t t81 = -27182LL;

	t81 = (x381-(x382-(x383^x384)));

	if (t81 != -2147483699LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x385 = UINT32_MAX;
	uint32_t x387 = UINT32_MAX;
	volatile uint64_t t82 = 1789150136166LLU;

	t82 = (x385-(x386-(x387^x388)));

	if (t82 != 6593126213656336817LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x390 = 5486049U;
	static int16_t x391 = -1;
	uint16_t x392 = UINT16_MAX;
	volatile uint32_t t83 = 829234U;

	t83 = (x389-(x390-(x391^x392)));

	if (t83 != 4289415715U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = 894;
	int8_t x394 = INT8_MAX;
	volatile int32_t x395 = 0;
	volatile int64_t x396 = 3978502386LL;
	volatile int64_t t84 = 55964LL;

	t84 = (x393-(x394-(x395^x396)));

	if (t84 != 3978503153LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = -1;
	volatile int64_t x398 = -1LL;
	volatile int32_t x399 = INT32_MIN;
	static uint16_t x400 = 15515U;
	volatile int64_t t85 = -1046304LL;

	t85 = (x397-(x398-(x399^x400)));

	if (t85 != -2147468133LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x402 = INT8_MAX;
	int64_t x404 = -1LL;

	t86 = (x401-(x402-(x403^x404)));

	if (t86 != 9223372036854775641LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MAX;
	int32_t x406 = -1;
	int8_t x407 = INT8_MAX;
	static int16_t x408 = -1;
	static int32_t t87 = 268517;

	t87 = (x405-(x406-(x407^x408)));

	if (t87 != 32640) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x414 = 17;
	uint64_t x415 = 35183715958106439LLU;
	int8_t x416 = -1;

	t88 = (x413-(x414-(x415^x416)));

	if (t88 != 9188188320896669351LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x423 = -1;
	volatile int32_t t89 = -3017;

	t89 = (x421-(x422-(x423^x424)));

	if (t89 != -7) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x425 = 1U;
	static uint16_t x426 = 1012U;
	uint32_t x427 = 2449017U;
	int16_t x428 = 259;
	static uint32_t t90 = 24U;

	t90 = (x425-(x426-(x427^x428)));

	if (t90 != 2448263U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x430 = INT8_MIN;
	static int8_t x431 = 1;
	int32_t x432 = -1;
	uint64_t t91 = 2003LLU;

	t91 = (x429-(x430-(x431^x432)));

	if (t91 != 5721863970629149LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = INT8_MIN;
	uint16_t x435 = 438U;
	int8_t x436 = -1;
	volatile int32_t t92 = -7733;

	t92 = (x433-(x434-(x435^x436)));

	if (t92 != -1384207) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x437 = -1;
	uint8_t x438 = 0U;
	int32_t x439 = INT32_MIN;
	static uint16_t x440 = UINT16_MAX;

	t93 = (x437-(x438-(x439^x440)));

	if (t93 != -2147418114) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x446 = 3LLU;
	static uint64_t t94 = 112430185665LLU;

	t94 = (x445-(x446-(x447^x448)));

	if (t94 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x449 = INT8_MAX;
	int64_t x450 = 7422744037LL;
	volatile int64_t t95 = -1028050820551LL;

	t95 = (x449-(x450-(x451^x452)));

	if (t95 != -7422742812LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x457 = INT64_MAX;
	volatile int8_t x458 = INT8_MIN;
	int16_t x459 = -8;
	volatile uint8_t x460 = UINT8_MAX;
	int64_t t96 = -1627722LL;

	t96 = (x457-(x458-(x459^x460)));

	if (t96 != 9223372036854775686LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x461 = 8168;
	volatile int64_t x463 = 566759LL;
	static volatile int64_t t97 = 2171343266203457085LL;

	t97 = (x461-(x462-(x463^x464)));

	if (t97 != 532684LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x465 = INT64_MAX;
	volatile uint16_t x466 = UINT16_MAX;
	uint16_t x467 = 16966U;
	volatile uint64_t x468 = UINT64_MAX;
	uint64_t t98 = 225646LLU;

	t98 = (x465-(x466-(x467^x468)));

	if (t98 != 9223372036854693305LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x469 = 670597540LLU;
	int8_t x470 = -1;
	uint8_t x472 = 12U;

	t99 = (x469-(x470-(x471^x472)));

	if (t99 != 670597565LLU) { NG(); } else { ; }
	
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

