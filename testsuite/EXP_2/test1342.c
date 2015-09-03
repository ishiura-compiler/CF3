#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -824;
static uint64_t x9 = UINT64_MAX;
static int64_t x24 = -1LL;
uint32_t x37 = 232495U;
volatile uint32_t t8 = 36006U;
int8_t x48 = 2;
static int8_t x55 = 2;
static int64_t t10 = -113LL;
uint64_t x58 = 705LLU;
int32_t x70 = -1;
int32_t x72 = INT32_MIN;
uint64_t x73 = 850526432761LLU;
int32_t t17 = 46;
int16_t x88 = INT16_MIN;
volatile uint32_t x91 = 196711U;
static int8_t x94 = 8;
int32_t x95 = 1604;
static volatile int32_t t20 = -2460;
volatile int8_t x105 = -1;
uint8_t x115 = 3U;
static volatile int32_t x117 = INT32_MAX;
static int16_t x125 = INT16_MAX;
volatile uint8_t x126 = 4U;
volatile uint32_t t28 = 27784U;
int64_t x129 = 152543367866571488LL;
volatile uint64_t t30 = 7628LLU;
int32_t x155 = INT32_MIN;
int8_t x157 = INT8_MIN;
int64_t x159 = -1LL;
int32_t t33 = 21212810;
uint16_t x177 = 13546U;
volatile int16_t x179 = 3;
int64_t x187 = -979689LL;
int16_t x195 = -1;
static int8_t x196 = INT8_MIN;
uint64_t x204 = UINT64_MAX;
volatile int8_t x219 = INT8_MIN;
int16_t x237 = 0;
uint8_t x244 = 99U;
uint16_t x245 = 338U;
int8_t x249 = -3;
uint8_t x250 = UINT8_MAX;
int32_t t47 = 283;
static volatile uint64_t t48 = 329LLU;
int32_t x270 = INT32_MAX;
int16_t x273 = INT16_MIN;
int16_t x281 = 1932;
int32_t t54 = -30065042;
int16_t x305 = INT16_MIN;
uint64_t x306 = 34284324LLU;
int8_t x308 = -2;
int8_t x317 = INT8_MIN;
static int8_t x320 = INT8_MIN;
int32_t x321 = 294;
volatile int32_t t63 = 5834;
int8_t x326 = INT8_MAX;
volatile int64_t t64 = INT64_MAX;
int8_t x332 = INT8_MIN;
int32_t t65 = -1;
uint32_t x334 = 28418U;
volatile int64_t t66 = -11488310347LL;
static int64_t x342 = -1LL;
uint64_t x351 = 143425209101075585LLU;
volatile int64_t t70 = -197937683771LL;
uint32_t x357 = 1075105U;
volatile uint32_t t71 = 11021U;
static int64_t x363 = 126LL;
int8_t x365 = -5;
uint16_t x367 = 15599U;
int8_t x369 = -13;
static int64_t x370 = INT64_MIN;
static int8_t x377 = -1;
uint32_t x379 = UINT32_MAX;
volatile uint32_t x386 = 613U;
uint16_t x387 = 29614U;
volatile int32_t t77 = 4781;
uint64_t x393 = 1LLU;
int16_t x394 = -60;
int8_t x403 = -1;
static volatile int64_t x405 = -787922LL;
int64_t t81 = -17678898413971LL;
int8_t x413 = -20;
volatile int32_t t83 = 189725;
int64_t x418 = INT64_MIN;
static volatile int64_t x431 = INT64_MIN;
int16_t x439 = INT16_MIN;
uint64_t x441 = UINT64_MAX;
static int8_t x448 = 7;
int64_t x458 = INT64_MAX;
int8_t x461 = -1;
int64_t x466 = INT64_MIN;
int8_t x467 = -3;
static int32_t x470 = INT32_MAX;
uint8_t x475 = UINT8_MAX;
volatile int32_t t96 = 138;
static int32_t t97 = 5583468;


void f0(void) {
	static int8_t x1 = 0;
	static uint16_t x2 = 371U;
	volatile int8_t x3 = INT8_MIN;
	int32_t x4 = 203630;

	t0 = ((x1^(x2==x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 344040LL;
	static int16_t x6 = INT16_MAX;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MAX;
	int64_t t1 = 683LL;

	t1 = ((x5^(x6==x7))*x8);

	if (t1 != 738820273913880LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	uint8_t x11 = UINT8_MAX;
	int32_t x12 = INT32_MIN;
	volatile uint64_t t2 = 5843520554407759LLU;

	t2 = ((x9^(x10==x11))*x12);

	if (t2 != 2147483648LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static volatile int8_t x14 = -1;
	int16_t x15 = 7;
	int64_t x16 = INT64_MAX;
	static volatile int64_t t3 = 9LL;

	t3 = ((x13^(x14==x15))*x16);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 13707076943116LLU;
	uint8_t x18 = 15U;
	static uint32_t x19 = 84639U;
	static int64_t x20 = 7389549LL;
	uint64_t t4 = 74094301701177LLU;

	t4 = ((x17^(x18==x19))*x20);

	if (t4 != 9055396349378136604LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x22 = UINT16_MAX;
	int8_t x23 = 25;
	int64_t t5 = 2289987LL;

	t5 = ((x21^(x22==x23))*x24);

	if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 0;
	int64_t x30 = INT64_MAX;
	static uint16_t x31 = UINT16_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	static volatile uint64_t t6 = 1589490830LLU;

	t6 = ((x29^(x30==x31))*x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 0U;
	uint32_t x34 = 2075338924U;
	static volatile int32_t x35 = -333368;
	int16_t x36 = -32;
	static volatile int32_t t7 = -1097;

	t7 = ((x33^(x34==x35))*x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = -2;
	static int8_t x39 = INT8_MIN;
	uint32_t x40 = UINT32_MAX;

	t8 = ((x37^(x38==x39))*x40);

	if (t8 != 4294734801U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	volatile int16_t x46 = INT16_MIN;
	volatile int32_t x47 = INT32_MIN;
	volatile int32_t t9 = -385425;

	t9 = ((x45^(x46==x47))*x48);

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = -1LL;
	int64_t x54 = INT64_MAX;
	volatile int16_t x56 = INT16_MIN;

	t10 = ((x53^(x54==x55))*x56);

	if (t10 != 32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x57 = 1;
	int64_t x59 = -1LL;
	static uint16_t x60 = 185U;
	int32_t t11 = 6;

	t11 = ((x57^(x58==x59))*x60);

	if (t11 != 185) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = 7;
	static int64_t x62 = 310742LL;
	int32_t x63 = -5882;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t12 = -166440;

	t12 = ((x61^(x62==x63))*x64);

	if (t12 != -229376) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	int64_t x66 = INT64_MIN;
	int64_t x67 = -1LL;
	uint16_t x68 = 12970U;
	volatile uint32_t t13 = 25296842U;

	t13 = ((x65^(x66==x67))*x68);

	if (t13 != 4294954326U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -1LL;
	uint64_t x71 = UINT64_MAX;
	volatile int64_t t14 = -15950100LL;

	t14 = ((x69^(x70==x71))*x72);

	if (t14 != 4294967296LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x74 = 59353508765LLU;
	uint16_t x75 = 47U;
	int64_t x76 = 18197199170777LL;
	uint64_t t15 = 2248533656475LLU;

	t15 = ((x73^(x74==x75))*x76);

	if (t15 != 11684238601049768977LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 561841LLU;
	static int64_t x78 = INT64_MIN;
	volatile int64_t x79 = INT64_MAX;
	volatile uint16_t x80 = UINT16_MAX;
	static uint64_t t16 = 7499922627108750823LLU;

	t16 = ((x77^(x78==x79))*x80);

	if (t16 != 36820249935LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = -26541;
	uint32_t x83 = 1490U;
	static int8_t x84 = INT8_MIN;

	t17 = ((x81^(x82==x83))*x84);

	if (t17 != 4194304) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	static uint32_t x86 = 3902U;
	uint8_t x87 = 1U;
	int32_t t18 = 6;

	t18 = ((x85^(x86==x87))*x88);

	if (t18 != 1073741824) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	volatile int64_t x90 = INT64_MIN;
	volatile uint64_t x92 = 7970874562066829425LLU;
	uint64_t t19 = 6LLU;

	t19 = ((x89^(x90==x91))*x92);

	if (t19 != 12644179663967989647LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x93 = 3076U;
	static volatile int8_t x96 = INT8_MAX;

	t20 = ((x93^(x94==x95))*x96);

	if (t20 != 390652) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = 8627888312403429LL;
	volatile int64_t x98 = 11LL;
	int8_t x99 = INT8_MAX;
	int8_t x100 = INT8_MIN;
	volatile int64_t t21 = 2409003LL;

	t21 = ((x97^(x98==x99))*x100);

	if (t21 != -1104369703987638912LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = -1;
	int64_t x102 = INT64_MIN;
	uint32_t x103 = 28005U;
	int32_t x104 = -1641;
	static int32_t t22 = 8092;

	t22 = ((x101^(x102==x103))*x104);

	if (t22 != 1641) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x106 = -1;
	uint16_t x107 = UINT16_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t23 = -3;

	t23 = ((x105^(x106==x107))*x108);

	if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	uint64_t x110 = UINT64_MAX;
	static volatile uint8_t x111 = 1U;
	int16_t x112 = INT16_MIN;
	volatile int32_t t24 = -446462266;

	t24 = ((x109^(x110==x111))*x112);

	if (t24 != -1073709056) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -12;
	uint32_t x114 = 9U;
	int16_t x116 = -1370;
	static int32_t t25 = -21;

	t25 = ((x113^(x114==x115))*x116);

	if (t25 != 16440) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t26 = 649U;

	t26 = ((x117^(x118==x119))*x120);

	if (t26 != 2147483650U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x121 = -1;
	uint16_t x122 = 9U;
	uint8_t x123 = 3U;
	uint16_t x124 = UINT16_MAX;
	int32_t t27 = -238589;

	t27 = ((x121^(x122==x123))*x124);

	if (t27 != -65535) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x127 = 1809327LL;
	uint32_t x128 = 1U;

	t28 = ((x125^(x126==x127))*x128);

	if (t28 != 32767U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x130 = 53U;
	uint64_t x131 = 78475923278573017LLU;
	uint64_t x132 = 5297187901847942006LLU;
	static uint64_t t29 = 7748221LLU;

	t29 = ((x129^(x130==x131))*x132);

	if (t29 != 6904538803196560192LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = INT32_MAX;
	int16_t x138 = -1;
	volatile uint16_t x139 = 828U;
	static uint64_t x140 = 9920192841894LLU;

	t30 = ((x137^(x138==x139))*x140);

	if (t30 != 15909241992998942554LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x145 = INT64_MAX;
	volatile uint64_t x146 = UINT64_MAX;
	uint64_t x147 = 84209484297LLU;
	volatile int64_t x148 = -1LL;
	static volatile int64_t t31 = -3826LL;

	t31 = ((x145^(x146==x147))*x148);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = -1;
	volatile int16_t x154 = INT16_MIN;
	volatile int16_t x156 = INT16_MAX;
	static volatile int32_t t32 = 0;

	t32 = ((x153^(x154==x155))*x156);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x158 = 1;
	int8_t x160 = INT8_MAX;

	t33 = ((x157^(x158==x159))*x160);

	if (t33 != -16256) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x165 = UINT64_MAX;
	int32_t x166 = -807479;
	static int64_t x167 = -18LL;
	uint16_t x168 = 6102U;
	volatile uint64_t t34 = 6155659853551593LLU;

	t34 = ((x165^(x166==x167))*x168);

	if (t34 != 18446744073709545514LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x178 = 29U;
	uint8_t x180 = UINT8_MAX;
	static volatile int32_t t35 = 4068593;

	t35 = ((x177^(x178==x179))*x180);

	if (t35 != 3454230) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x186 = INT8_MIN;
	int64_t x188 = -1LL;
	volatile uint64_t t36 = 7218981110277LLU;

	t36 = ((x185^(x186==x187))*x188);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = -3928;
	static int16_t x194 = INT16_MIN;
	volatile int32_t t37 = 6;

	t37 = ((x193^(x194==x195))*x196);

	if (t37 != 502784) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = INT16_MAX;
	int64_t x202 = 17967556238736LL;
	int16_t x203 = INT16_MIN;
	uint64_t t38 = 261168606809293LLU;

	t38 = ((x201^(x202==x203))*x204);

	if (t38 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x205 = 55U;
	int8_t x206 = INT8_MIN;
	int64_t x207 = -4323LL;
	int8_t x208 = INT8_MIN;
	volatile int32_t t39 = 0;

	t39 = ((x205^(x206==x207))*x208);

	if (t39 != -7040) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x213 = UINT64_MAX;
	uint16_t x214 = UINT16_MAX;
	volatile int16_t x215 = 1;
	uint16_t x216 = UINT16_MAX;
	uint64_t t40 = 709495026539LLU;

	t40 = ((x213^(x214==x215))*x216);

	if (t40 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x217 = UINT32_MAX;
	int64_t x218 = INT64_MAX;
	int32_t x220 = INT32_MAX;
	volatile uint32_t t41 = 2042089U;

	t41 = ((x217^(x218==x219))*x220);

	if (t41 != 2147483649U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x229 = INT32_MIN;
	static volatile int16_t x230 = -1;
	int64_t x231 = INT64_MIN;
	volatile int8_t x232 = 1;
	int32_t t42 = INT32_MIN;

	t42 = ((x229^(x230==x231))*x232);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = 42;
	int64_t x234 = INT64_MIN;
	uint32_t x235 = 71849U;
	int64_t x236 = -1LL;
	int64_t t43 = -20499LL;

	t43 = ((x233^(x234==x235))*x236);

	if (t43 != -42LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x238 = UINT64_MAX;
	volatile uint32_t x239 = 121378087U;
	static uint32_t x240 = UINT32_MAX;
	uint32_t t44 = 920U;

	t44 = ((x237^(x238==x239))*x240);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x241 = 1U;
	volatile uint8_t x242 = 0U;
	int8_t x243 = INT8_MIN;
	volatile uint32_t t45 = 185U;

	t45 = ((x241^(x242==x243))*x244);

	if (t45 != 99U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x246 = -5;
	static uint16_t x247 = 3U;
	int64_t x248 = -965787002986LL;
	int64_t t46 = 6902339LL;

	t46 = ((x245^(x246==x247))*x248);

	if (t46 != -326436007009268LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x251 = -5;
	static int8_t x252 = INT8_MAX;

	t47 = ((x249^(x250==x251))*x252);

	if (t47 != -381) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x253 = 328521638858LLU;
	static volatile uint8_t x254 = UINT8_MAX;
	uint8_t x255 = 95U;
	uint64_t x256 = 8173733LLU;

	t48 = ((x253^(x254==x255))*x256);

	if (t48 != 2685248160747716914LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = -1LL;
	int8_t x258 = 12;
	static int64_t x259 = 702LL;
	int16_t x260 = INT16_MAX;
	int64_t t49 = 43596593376871LL;

	t49 = ((x257^(x258==x259))*x260);

	if (t49 != -32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x261 = UINT32_MAX;
	int8_t x262 = INT8_MAX;
	volatile int64_t x263 = INT64_MIN;
	static int16_t x264 = INT16_MAX;
	uint32_t t50 = 148788U;

	t50 = ((x261^(x262==x263))*x264);

	if (t50 != 4294934529U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x269 = 141130;
	int32_t x271 = 1678;
	uint16_t x272 = 3U;
	volatile int32_t t51 = 5683;

	t51 = ((x269^(x270==x271))*x272);

	if (t51 != 423390) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x274 = -3;
	int16_t x275 = -8;
	volatile uint8_t x276 = 9U;
	int32_t t52 = 0;

	t52 = ((x273^(x274==x275))*x276);

	if (t52 != -294912) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MAX;
	int64_t x279 = INT64_MIN;
	uint16_t x280 = 3458U;
	static int32_t t53 = 1;

	t53 = ((x277^(x278==x279))*x280);

	if (t53 != -113311744) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x282 = 0;
	volatile int64_t x283 = INT64_MAX;
	volatile uint8_t x284 = 0U;

	t54 = ((x281^(x282==x283))*x284);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	int64_t x287 = -1LL;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t55 = 1;

	t55 = ((x285^(x286==x287))*x288);

	if (t55 != 4194304) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x289 = INT32_MIN;
	uint32_t x290 = 19U;
	volatile uint64_t x291 = 7903LLU;
	uint64_t x292 = 12438731LLU;
	uint64_t t56 = 32079LLU;

	t56 = ((x289^(x290==x291))*x292);

	if (t56 != 18420032102285180928LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x293 = UINT8_MAX;
	int32_t x294 = INT32_MIN;
	uint8_t x295 = 1U;
	int32_t x296 = -669646;
	static int32_t t57 = 851868139;

	t57 = ((x293^(x294==x295))*x296);

	if (t57 != -170759730) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = -10LL;
	uint8_t x298 = UINT8_MAX;
	int32_t x299 = -1299;
	uint8_t x300 = 20U;
	static volatile int64_t t58 = 277834770605LL;

	t58 = ((x297^(x298==x299))*x300);

	if (t58 != -200LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x301 = 2519834623LL;
	volatile int32_t x302 = -177127;
	static int8_t x303 = -1;
	volatile uint16_t x304 = UINT16_MAX;
	volatile int64_t t59 = 0LL;

	t59 = ((x301^(x302==x303))*x304);

	if (t59 != 165137362018305LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x307 = 52U;
	static int32_t t60 = 8752;

	t60 = ((x305^(x306==x307))*x308);

	if (t60 != 65536) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x309 = 10U;
	int64_t x310 = -1LL;
	int8_t x311 = -53;
	volatile uint8_t x312 = 3U;
	static int32_t t61 = -1;

	t61 = ((x309^(x310==x311))*x312);

	if (t61 != 30) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MAX;
	volatile int32_t t62 = -38432;

	t62 = ((x317^(x318==x319))*x320);

	if (t62 != 16384) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x322 = 1478479925273040LLU;
	static int64_t x323 = INT64_MIN;
	uint8_t x324 = UINT8_MAX;

	t63 = ((x321^(x322==x323))*x324);

	if (t63 != 74970) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x325 = 1U;
	static uint32_t x327 = 82832U;
	int64_t x328 = INT64_MAX;

	t64 = ((x325^(x326==x327))*x328);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x329 = 42U;
	int8_t x330 = INT8_MAX;
	int32_t x331 = INT32_MIN;

	t65 = ((x329^(x330==x331))*x332);

	if (t65 != -5376) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x333 = -1LL;
	volatile int8_t x335 = -1;
	int16_t x336 = INT16_MIN;

	t66 = ((x333^(x334==x335))*x336);

	if (t66 != 32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = -3266;
	uint64_t x343 = 312306087457929929LLU;
	static int16_t x344 = -1;
	int32_t t67 = -31216031;

	t67 = ((x341^(x342==x343))*x344);

	if (t67 != 3266) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x345 = 5U;
	int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	uint64_t x348 = 63LLU;
	volatile uint64_t t68 = 76893652LLU;

	t68 = ((x345^(x346==x347))*x348);

	if (t68 != 252LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x349 = INT32_MIN;
	int64_t x350 = INT64_MAX;
	uint32_t x352 = 71808U;
	volatile uint32_t t69 = 5406U;

	t69 = ((x349^(x350==x351))*x352);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x353 = 99526LL;
	uint32_t x354 = 48U;
	static int32_t x355 = 4234;
	static volatile int32_t x356 = -1;

	t70 = ((x353^(x354==x355))*x356);

	if (t70 != -99526LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x358 = 3U;
	int16_t x359 = INT16_MIN;
	int16_t x360 = -166;

	t71 = ((x357^(x358==x359))*x360);

	if (t71 != 4116499866U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x361 = 7498LLU;
	int8_t x362 = 6;
	uint32_t x364 = UINT32_MAX;
	uint64_t t72 = 448175101LLU;

	t72 = ((x361^(x362==x363))*x364);

	if (t72 != 32203664777910LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x366 = INT64_MAX;
	int32_t x368 = -931;
	volatile int32_t t73 = 35231;

	t73 = ((x365^(x366==x367))*x368);

	if (t73 != 4655) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x371 = INT64_MAX;
	int8_t x372 = -1;
	int32_t t74 = -17;

	t74 = ((x369^(x370==x371))*x372);

	if (t74 != 13) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x378 = 28647623363LLU;
	int8_t x380 = -1;
	static int32_t t75 = -15;

	t75 = ((x377^(x378==x379))*x380);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x381 = 329637454U;
	static int16_t x382 = -1;
	int8_t x383 = INT8_MIN;
	int16_t x384 = -7826;
	volatile uint32_t t76 = 162481U;

	t76 = ((x381^(x382==x383))*x384);

	if (t76 != 1532629892U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = INT16_MAX;
	volatile int16_t x388 = -146;

	t77 = ((x385^(x386==x387))*x388);

	if (t77 != -4783982) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x395 = INT8_MIN;
	int16_t x396 = -1;
	uint64_t t78 = UINT64_MAX;

	t78 = ((x393^(x394==x395))*x396);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MAX;
	int16_t x399 = 83;
	uint64_t x400 = 537325332LLU;
	uint64_t t79 = 37500970LLU;

	t79 = ((x397^(x398==x399))*x400);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x401 = INT16_MAX;
	int32_t x402 = -388538;
	int32_t x404 = 18;
	volatile int32_t t80 = 9360335;

	t80 = ((x401^(x402==x403))*x404);

	if (t80 != 589806) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x406 = INT8_MIN;
	static int16_t x407 = INT16_MAX;
	int16_t x408 = -1;

	t81 = ((x405^(x406==x407))*x408);

	if (t81 != 787922LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x409 = 1U;
	uint16_t x410 = UINT16_MAX;
	uint8_t x411 = 12U;
	volatile uint8_t x412 = 64U;
	uint32_t t82 = 2919U;

	t82 = ((x409^(x410==x411))*x412);

	if (t82 != 64U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x414 = 11U;
	int16_t x415 = -1;
	static volatile uint8_t x416 = 0U;

	t83 = ((x413^(x414==x415))*x416);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x417 = -1;
	volatile uint8_t x419 = 19U;
	int64_t x420 = 235174716285LL;
	static int64_t t84 = -125LL;

	t84 = ((x417^(x418==x419))*x420);

	if (t84 != -235174716285LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x421 = UINT8_MAX;
	static uint32_t x422 = UINT32_MAX;
	volatile int8_t x423 = -1;
	volatile int16_t x424 = -13;
	int32_t t85 = 45;

	t85 = ((x421^(x422==x423))*x424);

	if (t85 != -3302) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x425 = INT8_MIN;
	volatile int8_t x426 = INT8_MAX;
	volatile uint64_t x427 = 16017303026LLU;
	static volatile int16_t x428 = INT16_MIN;
	int32_t t86 = 52;

	t86 = ((x425^(x426==x427))*x428);

	if (t86 != 4194304) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x429 = INT32_MAX;
	int8_t x430 = INT8_MIN;
	int8_t x432 = 0;
	int32_t t87 = -2;

	t87 = ((x429^(x430==x431))*x432);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x433 = INT8_MIN;
	int16_t x434 = -1;
	int64_t x435 = -1LL;
	int16_t x436 = -1;
	int32_t t88 = -3777002;

	t88 = ((x433^(x434==x435))*x436);

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = INT16_MAX;
	int64_t x438 = INT64_MIN;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t89 = -184982703;

	t89 = ((x437^(x438==x439))*x440);

	if (t89 != 8355585) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x442 = 99LLU;
	static int32_t x443 = INT32_MIN;
	volatile int8_t x444 = INT8_MAX;
	static uint64_t t90 = 1396813120LLU;

	t90 = ((x441^(x442==x443))*x444);

	if (t90 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x445 = 1U;
	int32_t x446 = INT32_MIN;
	int16_t x447 = -1;
	volatile uint32_t t91 = 948U;

	t91 = ((x445^(x446==x447))*x448);

	if (t91 != 7U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x457 = 52044;
	int8_t x459 = -1;
	volatile int8_t x460 = INT8_MAX;
	int32_t t92 = -4;

	t92 = ((x457^(x458==x459))*x460);

	if (t92 != 6609588) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x462 = 6U;
	int16_t x463 = 210;
	volatile uint8_t x464 = 122U;
	volatile int32_t t93 = -325301000;

	t93 = ((x461^(x462==x463))*x464);

	if (t93 != -122) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x465 = UINT16_MAX;
	static int8_t x468 = INT8_MIN;
	static volatile int32_t t94 = 48814;

	t94 = ((x465^(x466==x467))*x468);

	if (t94 != -8388480) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x469 = -1;
	static volatile int16_t x471 = INT16_MIN;
	uint8_t x472 = 3U;
	int32_t t95 = 1;

	t95 = ((x469^(x470==x471))*x472);

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x473 = 7178U;
	static volatile int16_t x474 = -1;
	int16_t x476 = -1;

	t96 = ((x473^(x474==x475))*x476);

	if (t96 != -7178) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x477 = INT16_MIN;
	volatile int64_t x478 = -1LL;
	int16_t x479 = -1;
	static int16_t x480 = INT16_MIN;

	t97 = ((x477^(x478==x479))*x480);

	if (t97 != 1073709056) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x481 = 434U;
	int8_t x482 = -1;
	uint64_t x483 = 30183LLU;
	static volatile uint8_t x484 = 1U;
	volatile uint32_t t98 = 91U;

	t98 = ((x481^(x482==x483))*x484);

	if (t98 != 434U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x485 = -127LL;
	static int16_t x486 = -1;
	int8_t x487 = -3;
	int16_t x488 = INT16_MAX;
	int64_t t99 = -19971603LL;

	t99 = ((x485^(x486==x487))*x488);

	if (t99 != -4161409LL) { NG(); } else { ; }
	
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

