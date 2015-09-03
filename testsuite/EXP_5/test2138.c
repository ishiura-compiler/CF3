#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
uint32_t t1 = UINT32_MAX;
int8_t x10 = -5;
int32_t x27 = INT32_MAX;
volatile uint32_t x28 = 248905U;
int32_t t4 = 423098;
uint64_t t5 = 1845934LLU;
volatile int64_t t6 = INT64_MAX;
volatile int8_t x51 = INT8_MIN;
int32_t x54 = -6964;
int64_t x75 = -979054LL;
volatile uint64_t x78 = UINT64_MAX;
int16_t x86 = 28;
uint8_t x90 = 15U;
uint64_t x103 = 54LLU;
volatile int32_t t18 = 481044;
volatile int32_t x114 = INT32_MAX;
uint32_t x121 = 140829U;
volatile int64_t x123 = -1LL;
volatile uint64_t x131 = 12LLU;
int8_t x132 = -1;
int64_t x139 = 395477468517261LL;
volatile int64_t x141 = 30147026754432LL;
int32_t x142 = INT32_MAX;
static uint8_t x157 = UINT8_MAX;
uint16_t x161 = UINT16_MAX;
static int64_t x164 = -191020LL;
uint16_t x165 = 515U;
int8_t x168 = INT8_MIN;
int8_t x169 = 1;
int64_t x171 = INT64_MAX;
static volatile int32_t t29 = -42702;
static uint16_t x173 = 7442U;
volatile int8_t x174 = INT8_MIN;
static int16_t x185 = 1625;
uint32_t x213 = 129U;
int16_t x214 = -3;
uint32_t x216 = 7975U;
volatile int16_t x231 = INT16_MIN;
static int64_t x262 = -1LL;
int64_t x264 = -1LL;
int16_t x271 = INT16_MIN;
static volatile int16_t x282 = -12;
uint16_t x296 = 726U;
volatile int32_t t43 = -19;
static int16_t x303 = INT16_MIN;
static volatile int32_t t46 = 468;
volatile int64_t x311 = -1LL;
uint16_t x317 = 113U;
static volatile uint32_t x325 = UINT32_MAX;
uint16_t x341 = 11882U;
static int32_t t52 = 30433486;
int16_t x357 = 307;
volatile int16_t x360 = -215;
int8_t x361 = 2;
volatile uint8_t x362 = 7U;
static uint16_t x380 = 3U;
static int32_t t56 = 714771990;
volatile uint64_t t57 = 9482LLU;
int8_t x387 = -3;
uint16_t x388 = 99U;
int8_t x391 = INT8_MAX;
int64_t x411 = INT64_MAX;
int16_t x419 = -5;
int64_t x420 = INT64_MIN;
static uint16_t x425 = 1074U;
volatile int32_t t62 = -644;
static uint32_t x437 = UINT32_MAX;
int8_t x448 = INT8_MAX;
volatile uint32_t x453 = 11657U;
static uint8_t x454 = UINT8_MAX;
int32_t x471 = INT32_MIN;
int16_t x474 = INT16_MAX;
int8_t x475 = -1;
int16_t x489 = INT16_MAX;
uint16_t x490 = 269U;
int64_t x492 = -379367214587LL;
volatile int32_t t70 = 42479203;
volatile uint64_t t71 = 973358368472641872LLU;
int64_t x504 = -20153LL;
uint16_t x513 = 52U;
static volatile int16_t x515 = INT16_MAX;
int8_t x570 = INT8_MIN;
uint16_t x601 = 6670U;
int32_t t85 = 0;
uint8_t x609 = 34U;
uint8_t x610 = UINT8_MAX;
uint64_t x619 = 466320LLU;
int32_t x620 = -1;
int32_t t87 = 3305302;
volatile int64_t x628 = INT64_MIN;
volatile int32_t t89 = 4151;
uint16_t x629 = UINT16_MAX;
volatile int32_t t90 = 685;
uint8_t x639 = UINT8_MAX;
static int32_t x642 = INT32_MIN;
int32_t t92 = -3;
volatile uint64_t x645 = UINT64_MAX;
static int64_t x646 = INT64_MIN;
volatile uint64_t t93 = UINT64_MAX;
uint8_t x658 = 16U;
int16_t x660 = INT16_MIN;
uint8_t x662 = 62U;
uint32_t x664 = UINT32_MAX;
volatile uint64_t t95 = 94440620LLU;
int64_t x676 = INT64_MIN;
int8_t x685 = INT8_MAX;
int8_t x687 = -1;
int8_t x688 = INT8_MIN;


void f0(void) {
	static uint16_t x2 = 0U;
	volatile int16_t x3 = 4;
	int16_t x4 = 1149;
	static volatile int32_t t0 = 3;

	t0 = (x1<<((x2^x3)<x4));

	if (t0 != 131070) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint8_t x6 = 71U;
	volatile int64_t x7 = INT64_MAX;
	int8_t x8 = 1;

	t1 = (x5<<((x6^x7)<x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int8_t x11 = INT8_MIN;
	int64_t x12 = -1LL;
	static uint32_t t2 = UINT32_MAX;

	t2 = (x9<<((x10^x11)<x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = UINT32_MAX;
	static int16_t x26 = -1;
	uint32_t t3 = UINT32_MAX;

	t3 = (x25<<((x26^x27)<x28));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = INT8_MAX;
	int8_t x34 = INT8_MIN;
	volatile int32_t x35 = INT32_MIN;
	static int16_t x36 = INT16_MIN;

	t4 = (x33<<((x34^x35)<x36));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 4115101LLU;
	int32_t x38 = -1;
	int64_t x39 = -1LL;
	int32_t x40 = 28706480;

	t5 = (x37<<((x38^x39)<x40));

	if (t5 != 8230202LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MAX;
	uint64_t x42 = 36641193LLU;
	volatile uint64_t x43 = 36097189606LLU;
	static uint8_t x44 = 1U;

	t6 = (x41<<((x42^x43)<x44));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = INT16_MAX;
	uint16_t x46 = 493U;
	int8_t x47 = INT8_MAX;
	int16_t x48 = 1;
	int32_t t7 = -7684592;

	t7 = (x45<<((x46^x47)<x48));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MAX;
	int16_t x50 = -1;
	int64_t x52 = 0LL;
	volatile int32_t t8 = -145324540;

	t8 = (x49<<((x50^x51)<x52));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 3566LLU;
	volatile uint64_t x55 = UINT64_MAX;
	static int64_t x56 = INT64_MIN;
	volatile uint64_t t9 = 399973898570296LLU;

	t9 = (x53<<((x54^x55)<x56));

	if (t9 != 7132LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = 57;
	int16_t x66 = -234;
	uint64_t x67 = 299470023594LLU;
	int32_t x68 = INT32_MAX;
	volatile int32_t t10 = 1;

	t10 = (x65<<((x66^x67)<x68));

	if (t10 != 57) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x73 = UINT16_MAX;
	uint16_t x74 = UINT16_MAX;
	int64_t x76 = INT64_MAX;
	int32_t t11 = -14;

	t11 = (x73<<((x74^x75)<x76));

	if (t11 != 131070) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x79 = INT8_MIN;
	static int8_t x80 = 28;
	uint32_t t12 = UINT32_MAX;

	t12 = (x77<<((x78^x79)<x80));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x85 = 2U;
	uint8_t x87 = 29U;
	uint16_t x88 = 59U;
	volatile int32_t t13 = 31744132;

	t13 = (x85<<((x86^x87)<x88));

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x89 = 89U;
	int64_t x91 = INT64_MAX;
	int64_t x92 = -1LL;
	volatile int32_t t14 = -4693590;

	t14 = (x89<<((x90^x91)<x92));

	if (t14 != 89) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x93 = INT32_MAX;
	static int16_t x94 = INT16_MIN;
	uint64_t x95 = 65607537LLU;
	uint8_t x96 = 12U;
	int32_t t15 = INT32_MAX;

	t15 = (x93<<((x94^x95)<x96));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x97 = 1235U;
	int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MIN;
	int16_t x100 = 0;
	int32_t t16 = 52666;

	t16 = (x97<<((x98^x99)<x100));

	if (t16 != 2470) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x101 = UINT16_MAX;
	static uint32_t x102 = 284012597U;
	int64_t x104 = -18975LL;
	int32_t t17 = -939;

	t17 = (x101<<((x102^x103)<x104));

	if (t17 != 131070) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x109 = 31U;
	uint8_t x110 = 124U;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = UINT16_MAX;

	t18 = (x109<<((x110^x111)<x112));

	if (t18 != 62) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = INT16_MAX;
	int16_t x115 = -4385;
	int16_t x116 = 206;
	volatile int32_t t19 = 7381;

	t19 = (x113<<((x114^x115)<x116));

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x122 = INT8_MIN;
	int16_t x124 = -73;
	uint32_t t20 = 1U;

	t20 = (x121<<((x122^x123)<x124));

	if (t20 != 140829U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = INT64_MAX;
	int8_t x126 = INT8_MAX;
	uint8_t x127 = UINT8_MAX;
	static int32_t x128 = INT32_MIN;
	int64_t t21 = INT64_MAX;

	t21 = (x125<<((x126^x127)<x128));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int64_t x130 = 97688999353LL;
	int32_t t22 = 40;

	t22 = (x129<<((x130^x131)<x132));

	if (t22 != 510) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x137 = UINT8_MAX;
	static int8_t x138 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;
	static volatile int32_t t23 = 305;

	t23 = (x137<<((x138^x139)<x140));

	if (t23 != 510) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x143 = -1;
	int32_t x144 = 50519179;
	volatile int64_t t24 = 569761243074LL;

	t24 = (x141<<((x142^x143)<x144));

	if (t24 != 60294053508864LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x153 = 533U;
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = 8730221;
	uint16_t x156 = 4U;
	int32_t t25 = 1;

	t25 = (x153<<((x154^x155)<x156));

	if (t25 != 533) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x158 = INT16_MIN;
	int32_t x159 = -1;
	static uint16_t x160 = UINT16_MAX;
	volatile int32_t t26 = -1469;

	t26 = (x157<<((x158^x159)<x160));

	if (t26 != 510) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x162 = INT16_MIN;
	int64_t x163 = -1007508975170179LL;
	volatile int32_t t27 = 112743;

	t27 = (x161<<((x162^x163)<x164));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x166 = 0;
	static volatile int8_t x167 = -18;
	int32_t t28 = -931;

	t28 = (x165<<((x166^x167)<x168));

	if (t28 != 515) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x170 = 0;
	static int8_t x172 = INT8_MAX;

	t29 = (x169<<((x170^x171)<x172));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x175 = UINT16_MAX;
	volatile int16_t x176 = -125;
	static int32_t t30 = 55;

	t30 = (x173<<((x174^x175)<x176));

	if (t30 != 14884) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = -1;
	int64_t x179 = INT64_MAX;
	int16_t x180 = INT16_MIN;
	static volatile int32_t t31 = -1002;

	t31 = (x177<<((x178^x179)<x180));

	if (t31 != 131070) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x181 = UINT32_MAX;
	uint32_t x182 = 492603U;
	int8_t x183 = INT8_MIN;
	int8_t x184 = -23;
	volatile uint32_t t32 = 404U;

	t32 = (x181<<((x182^x183)<x184));

	if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x186 = INT64_MIN;
	volatile uint16_t x187 = UINT16_MAX;
	int32_t x188 = 556495;
	volatile int32_t t33 = -93645098;

	t33 = (x185<<((x186^x187)<x188));

	if (t33 != 3250) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x209 = INT32_MAX;
	volatile uint64_t x210 = 2931186764789486697LLU;
	static uint64_t x211 = 4LLU;
	volatile int8_t x212 = 0;
	static int32_t t34 = INT32_MAX;

	t34 = (x209<<((x210^x211)<x212));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x215 = 1477804867LLU;
	uint32_t t35 = 162448U;

	t35 = (x213<<((x214^x215)<x216));

	if (t35 != 129U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x229 = 9U;
	int16_t x230 = INT16_MIN;
	static int64_t x232 = 54251LL;
	uint32_t t36 = 857010433U;

	t36 = (x229<<((x230^x231)<x232));

	if (t36 != 18U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x233 = 1902;
	int64_t x234 = INT64_MAX;
	uint8_t x235 = 13U;
	int8_t x236 = -1;
	int32_t t37 = 116494;

	t37 = (x233<<((x234^x235)<x236));

	if (t37 != 1902) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x237 = 25;
	static int32_t x238 = -244;
	static volatile int16_t x239 = -3;
	int16_t x240 = INT16_MAX;
	int32_t t38 = 914150;

	t38 = (x237<<((x238^x239)<x240));

	if (t38 != 50) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x261 = UINT8_MAX;
	uint64_t x263 = 689878LLU;
	int32_t t39 = 15949376;

	t39 = (x261<<((x262^x263)<x264));

	if (t39 != 510) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x269 = 7210U;
	static uint32_t x270 = 1858163U;
	uint16_t x272 = 8052U;
	int32_t t40 = 0;

	t40 = (x269<<((x270^x271)<x272));

	if (t40 != 7210) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x277 = UINT16_MAX;
	volatile int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	static volatile uint8_t x280 = UINT8_MAX;
	static int32_t t41 = 3871;

	t41 = (x277<<((x278^x279)<x280));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x281 = UINT16_MAX;
	uint16_t x283 = 0U;
	int32_t x284 = INT32_MAX;
	int32_t t42 = 425;

	t42 = (x281<<((x282^x283)<x284));

	if (t42 != 131070) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x293 = 45869;
	int8_t x294 = 10;
	uint16_t x295 = 169U;

	t43 = (x293<<((x294^x295)<x296));

	if (t43 != 91738) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x297 = UINT16_MAX;
	uint32_t x298 = 1072U;
	static int16_t x299 = 0;
	int16_t x300 = 161;
	int32_t t44 = 1900505;

	t44 = (x297<<((x298^x299)<x300));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x301 = 8U;
	volatile int16_t x302 = 14;
	static int8_t x304 = INT8_MIN;
	int32_t t45 = 6854538;

	t45 = (x301<<((x302^x303)<x304));

	if (t45 != 16) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x305 = 0U;
	uint32_t x306 = 1651566152U;
	volatile int8_t x307 = 42;
	int32_t x308 = INT32_MAX;

	t46 = (x305<<((x306^x307)<x308));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x309 = 78U;
	static int32_t x310 = -167650377;
	int32_t x312 = 0;
	int32_t t47 = 333954440;

	t47 = (x309<<((x310^x311)<x312));

	if (t47 != 78) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x318 = 105739619LLU;
	int8_t x319 = -1;
	uint16_t x320 = 1098U;
	volatile int32_t t48 = -30440;

	t48 = (x317<<((x318^x319)<x320));

	if (t48 != 113) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x326 = 32122U;
	static int32_t x327 = INT32_MIN;
	int8_t x328 = -1;
	volatile uint32_t t49 = 33016U;

	t49 = (x325<<((x326^x327)<x328));

	if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x342 = INT64_MIN;
	uint32_t x343 = 1642258U;
	int16_t x344 = INT16_MIN;
	volatile int32_t t50 = 106999;

	t50 = (x341<<((x342^x343)<x344));

	if (t50 != 23764) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x345 = 3876355582944965317LLU;
	static int8_t x346 = INT8_MIN;
	int16_t x347 = 4725;
	int8_t x348 = INT8_MIN;
	static uint64_t t51 = 3446711LLU;

	t51 = (x345<<((x346^x347)<x348));

	if (t51 != 7752711165889930634LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int16_t x350 = -1;
	static int32_t x351 = -21;
	static int8_t x352 = INT8_MIN;

	t52 = (x349<<((x350^x351)<x352));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x358 = INT8_MIN;
	int64_t x359 = -1LL;
	volatile int32_t t53 = 47024;

	t53 = (x357<<((x358^x359)<x360));

	if (t53 != 307) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x363 = INT64_MIN;
	static uint64_t x364 = UINT64_MAX;
	volatile int32_t t54 = -522120;

	t54 = (x361<<((x362^x363)<x364));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x373 = INT16_MAX;
	uint32_t x374 = UINT32_MAX;
	volatile int32_t x375 = INT32_MIN;
	int16_t x376 = 6201;
	static volatile int32_t t55 = 9944917;

	t55 = (x373<<((x374^x375)<x376));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x377 = 0;
	int64_t x378 = INT64_MIN;
	int32_t x379 = -1;

	t56 = (x377<<((x378^x379)<x380));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x381 = 727712467476LLU;
	static uint16_t x382 = 2U;
	static volatile uint32_t x383 = UINT32_MAX;
	int16_t x384 = INT16_MAX;

	t57 = (x381<<((x382^x383)<x384));

	if (t57 != 727712467476LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x385 = UINT64_MAX;
	static int16_t x386 = 2;
	volatile uint64_t t58 = 6706202498LLU;

	t58 = (x385<<((x386^x387)<x388));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x389 = INT8_MAX;
	volatile uint16_t x390 = 17773U;
	uint16_t x392 = 18643U;
	int32_t t59 = 765031;

	t59 = (x389<<((x390^x391)<x392));

	if (t59 != 254) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x409 = INT16_MAX;
	volatile uint64_t x410 = 96539LLU;
	uint32_t x412 = 0U;
	volatile int32_t t60 = -4116314;

	t60 = (x409<<((x410^x411)<x412));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x417 = INT32_MAX;
	int64_t x418 = INT64_MAX;
	int32_t t61 = INT32_MAX;

	t61 = (x417<<((x418^x419)<x420));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x426 = -257LL;
	int64_t x427 = -1LL;
	uint32_t x428 = 20639504U;

	t62 = (x425<<((x426^x427)<x428));

	if (t62 != 2148) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x438 = UINT16_MAX;
	uint8_t x439 = 46U;
	static int8_t x440 = INT8_MIN;
	uint32_t t63 = UINT32_MAX;

	t63 = (x437<<((x438^x439)<x440));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x445 = 3582U;
	int32_t x446 = -3;
	int8_t x447 = -1;
	static uint32_t t64 = 7385394U;

	t64 = (x445<<((x446^x447)<x448));

	if (t64 != 7164U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x455 = -901;
	int32_t x456 = -5;
	uint32_t t65 = 7567U;

	t65 = (x453<<((x454^x455)<x456));

	if (t65 != 23314U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x461 = 0U;
	int16_t x462 = -5980;
	volatile uint64_t x463 = 340LLU;
	int64_t x464 = 15LL;
	int32_t t66 = 1;

	t66 = (x461<<((x462^x463)<x464));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x465 = INT64_MAX;
	int8_t x466 = -1;
	static int8_t x467 = INT8_MAX;
	int16_t x468 = INT16_MIN;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x465<<((x466^x467)<x468));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x469 = UINT16_MAX;
	static uint16_t x470 = UINT16_MAX;
	int32_t x472 = -1;
	volatile int32_t t68 = 29;

	t68 = (x469<<((x470^x471)<x472));

	if (t68 != 131070) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x473 = 542;
	volatile int32_t x476 = 0;
	volatile int32_t t69 = 2597;

	t69 = (x473<<((x474^x475)<x476));

	if (t69 != 1084) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x491 = -1573;

	t70 = (x489<<((x490^x491)<x492));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x497 = 7LLU;
	volatile int32_t x498 = INT32_MIN;
	uint16_t x499 = UINT16_MAX;
	int32_t x500 = 370426;

	t71 = (x497<<((x498^x499)<x500));

	if (t71 != 14LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x501 = 1U;
	uint32_t x502 = 71539U;
	static int64_t x503 = INT64_MIN;
	static volatile int32_t t72 = -30;

	t72 = (x501<<((x502^x503)<x504));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x514 = INT64_MAX;
	static int16_t x516 = INT16_MIN;
	static int32_t t73 = -389691;

	t73 = (x513<<((x514^x515)<x516));

	if (t73 != 52) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x525 = UINT8_MAX;
	int64_t x526 = -281080643704LL;
	uint16_t x527 = 5U;
	volatile int32_t x528 = INT32_MIN;
	int32_t t74 = 20825889;

	t74 = (x525<<((x526^x527)<x528));

	if (t74 != 510) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x537 = 12493052394859994LL;
	static int64_t x538 = -555242262362299LL;
	uint32_t x539 = 7873465U;
	volatile int32_t x540 = -744618448;
	volatile int64_t t75 = 3453197703385531LL;

	t75 = (x537<<((x538^x539)<x540));

	if (t75 != 24986104789719988LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x549 = 508LLU;
	int32_t x550 = -1;
	uint32_t x551 = UINT32_MAX;
	volatile uint32_t x552 = 54U;
	static volatile uint64_t t76 = 360072710087LLU;

	t76 = (x549<<((x550^x551)<x552));

	if (t76 != 1016LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x553 = UINT16_MAX;
	int64_t x554 = -168LL;
	uint8_t x555 = UINT8_MAX;
	int8_t x556 = -6;
	static int32_t t77 = -6768;

	t77 = (x553<<((x554^x555)<x556));

	if (t77 != 131070) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x561 = 21502U;
	int16_t x562 = -1;
	uint8_t x563 = 127U;
	int16_t x564 = INT16_MIN;
	int32_t t78 = 11477219;

	t78 = (x561<<((x562^x563)<x564));

	if (t78 != 21502) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x565 = INT16_MAX;
	volatile uint8_t x566 = UINT8_MAX;
	uint16_t x567 = UINT16_MAX;
	uint16_t x568 = 185U;
	int32_t t79 = 150194109;

	t79 = (x565<<((x566^x567)<x568));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x569 = 3LLU;
	int32_t x571 = INT32_MAX;
	uint16_t x572 = 1580U;
	uint64_t t80 = 34688410834759408LLU;

	t80 = (x569<<((x570^x571)<x572));

	if (t80 != 6LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x573 = UINT64_MAX;
	uint64_t x574 = UINT64_MAX;
	static int8_t x575 = INT8_MAX;
	int16_t x576 = INT16_MAX;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x573<<((x574^x575)<x576));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x577 = INT8_MAX;
	static int64_t x578 = INT64_MIN;
	static int32_t x579 = -24791;
	int8_t x580 = -1;
	int32_t t82 = -4016402;

	t82 = (x577<<((x578^x579)<x580));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x585 = 40;
	volatile int16_t x586 = 3;
	uint64_t x587 = UINT64_MAX;
	int16_t x588 = -23;
	int32_t t83 = -8138;

	t83 = (x585<<((x586^x587)<x588));

	if (t83 != 40) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x597 = 0LL;
	volatile int32_t x598 = INT32_MIN;
	uint16_t x599 = 20U;
	uint8_t x600 = 92U;
	static int64_t t84 = -7967236801450741LL;

	t84 = (x597<<((x598^x599)<x600));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x602 = 2169263597233LLU;
	uint64_t x603 = UINT64_MAX;
	int32_t x604 = INT32_MIN;

	t85 = (x601<<((x602^x603)<x604));

	if (t85 != 13340) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x611 = INT8_MIN;
	uint8_t x612 = 0U;
	int32_t t86 = -8847;

	t86 = (x609<<((x610^x611)<x612));

	if (t86 != 68) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x617 = INT16_MAX;
	int64_t x618 = -127995415LL;

	t87 = (x617<<((x618^x619)<x620));

	if (t87 != 65534) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x621 = UINT64_MAX;
	int64_t x622 = -1LL;
	int16_t x623 = 1;
	uint8_t x624 = UINT8_MAX;
	uint64_t t88 = 15941567426651LLU;

	t88 = (x621<<((x622^x623)<x624));

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x625 = 42;
	uint8_t x626 = UINT8_MAX;
	int32_t x627 = INT32_MIN;

	t89 = (x625<<((x626^x627)<x628));

	if (t89 != 42) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x630 = INT8_MAX;
	int64_t x631 = INT64_MAX;
	static int64_t x632 = INT64_MAX;

	t90 = (x629<<((x630^x631)<x632));

	if (t90 != 131070) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x637 = INT32_MAX;
	uint8_t x638 = 0U;
	int8_t x640 = INT8_MIN;
	static int32_t t91 = INT32_MAX;

	t91 = (x637<<((x638^x639)<x640));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x641 = INT8_MAX;
	volatile int8_t x643 = -1;
	uint64_t x644 = UINT64_MAX;

	t92 = (x641<<((x642^x643)<x644));

	if (t92 != 254) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x647 = -13915058643331LL;
	uint16_t x648 = 77U;

	t93 = (x645<<((x646^x647)<x648));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x657 = 347095534862785LLU;
	int16_t x659 = INT16_MIN;
	static uint64_t t94 = 58425634872LLU;

	t94 = (x657<<((x658^x659)<x660));

	if (t94 != 347095534862785LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x661 = 1506748496516972418LLU;
	static int32_t x663 = INT32_MIN;

	t95 = (x661<<((x662^x663)<x664));

	if (t95 != 3013496993033944836LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x665 = 8916901U;
	static uint16_t x666 = 6844U;
	static int64_t x667 = -7073149080LL;
	static int8_t x668 = INT8_MIN;
	volatile uint32_t t96 = 3U;

	t96 = (x665<<((x666^x667)<x668));

	if (t96 != 17833802U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x673 = INT8_MAX;
	static int8_t x674 = INT8_MIN;
	uint16_t x675 = UINT16_MAX;
	static volatile int32_t t97 = -14;

	t97 = (x673<<((x674^x675)<x676));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x677 = 1399839433LL;
	int64_t x678 = -1LL;
	static uint16_t x679 = UINT16_MAX;
	int16_t x680 = INT16_MAX;
	volatile int64_t t98 = -454345583754LL;

	t98 = (x677<<((x678^x679)<x680));

	if (t98 != 2799678866LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x686 = UINT32_MAX;
	volatile int32_t t99 = -330461490;

	t99 = (x685<<((x686^x687)<x688));

	if (t99 != 254) { NG(); } else { ; }
	
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

