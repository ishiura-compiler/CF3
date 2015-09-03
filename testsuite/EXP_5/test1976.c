#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = INT64_MIN;
int32_t x8 = 6875;
int32_t x21 = INT32_MIN;
static int64_t x24 = INT64_MIN;
volatile int8_t x28 = INT8_MIN;
int32_t t7 = 912968717;
int8_t x33 = -1;
int32_t x34 = 199;
int16_t x35 = 601;
static int8_t x42 = -24;
volatile int8_t x44 = INT8_MAX;
int32_t t11 = 1;
int32_t x56 = -765204202;
int16_t x59 = INT16_MIN;
static int8_t x60 = -1;
static int32_t x71 = -272236322;
volatile int64_t x81 = -1LL;
static int8_t x82 = INT8_MAX;
static volatile int32_t x85 = INT32_MAX;
int32_t x88 = INT32_MIN;
volatile int32_t t21 = INT32_MAX;
static int32_t x90 = INT32_MIN;
static volatile int16_t x91 = -1;
int64_t t22 = -16016440258357LL;
int32_t x93 = 23831625;
volatile int32_t t24 = -1;
volatile uint32_t x106 = 12212U;
volatile uint64_t x107 = 5100313823LLU;
uint64_t t28 = 22368952LLU;
volatile int64_t x120 = INT64_MIN;
volatile uint64_t x132 = 8LLU;
volatile uint8_t x133 = UINT8_MAX;
int16_t x136 = INT16_MIN;
int16_t x140 = -1;
static int8_t x145 = -3;
uint8_t x152 = UINT8_MAX;
uint16_t x155 = 34U;
int8_t x161 = -25;
uint16_t x162 = 15U;
static int16_t x166 = -1;
int32_t x167 = INT32_MIN;
volatile uint64_t t41 = UINT64_MAX;
uint16_t x170 = 36U;
uint32_t x171 = UINT32_MAX;
int16_t x174 = INT16_MIN;
int32_t t45 = -97918829;
uint16_t x189 = 17753U;
int8_t x190 = INT8_MAX;
int64_t x191 = 27406632LL;
uint64_t x198 = 363465LLU;
uint64_t x201 = 584416233559LLU;
int32_t x202 = INT32_MIN;
int32_t x207 = INT32_MIN;
int16_t x218 = INT16_MIN;
int64_t x223 = INT64_MIN;
static volatile int32_t x238 = INT32_MIN;
uint64_t t59 = 271059445301955175LLU;
uint32_t x242 = 123354197U;
static int32_t x248 = INT32_MAX;
int8_t x252 = -1;
static int64_t x256 = -1LL;
int64_t x257 = -116375821988641LL;
int64_t x265 = 3697054049LL;
int64_t x278 = INT64_MAX;
int64_t x279 = -1LL;
volatile int16_t x282 = INT16_MIN;
int32_t x284 = INT32_MAX;
volatile int32_t t71 = -74;
int8_t x292 = INT8_MAX;
int8_t x293 = INT8_MAX;
int8_t x301 = -29;
int64_t x307 = INT64_MAX;
volatile int32_t t76 = -222598;
static volatile int8_t x310 = -1;
static volatile int64_t x314 = INT64_MIN;
int8_t x315 = -1;
uint16_t x316 = UINT16_MAX;
static int32_t x326 = 16062850;
static int64_t x328 = INT64_MIN;
int64_t x332 = INT64_MIN;
volatile int32_t t83 = -2397;
volatile int16_t x340 = 1591;
int64_t x343 = INT64_MIN;
static uint64_t x345 = 16485LLU;
int8_t x351 = -1;
volatile uint32_t x353 = UINT32_MAX;
uint32_t x357 = 2076U;
static uint32_t x359 = 21881U;
int64_t x363 = -1LL;
int64_t t91 = -966002625LL;
uint32_t x369 = UINT32_MAX;
static int64_t x373 = INT64_MAX;
int64_t x375 = -26752335820570697LL;
int32_t x380 = INT32_MIN;
volatile int8_t x383 = 20;
int64_t x386 = INT64_MIN;
int64_t x388 = INT64_MAX;
uint16_t x391 = 576U;
static uint8_t x392 = 3U;
int64_t x396 = INT64_MIN;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	volatile uint16_t x4 = UINT16_MAX;

	t0 = (x1^((x2|x3)<x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 24U;
	uint64_t x6 = 10455LLU;
	int32_t x7 = -1;
	int32_t t1 = -9;

	t1 = (x5^((x6|x7)<x8));

	if (t1 != 24) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -21;
	int16_t x10 = 13;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = 56U;
	int32_t t2 = 452;

	t2 = (x9^((x10|x11)<x12));

	if (t2 != -22) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int16_t x14 = -1254;
	static int8_t x15 = INT8_MAX;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -6;

	t3 = (x13^((x14|x15)<x16));

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;
	static uint8_t x20 = 13U;
	volatile int32_t t4 = 1;

	t4 = (x17^((x18|x19)<x20));

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -1;
	static int16_t x23 = INT16_MAX;
	static volatile int32_t t5 = INT32_MIN;

	t5 = (x21^((x22|x23)<x24));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	volatile uint32_t x26 = UINT32_MAX;
	int32_t x27 = INT32_MIN;
	volatile int64_t t6 = INT64_MIN;

	t6 = (x25^((x26|x27)<x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	uint16_t x30 = UINT16_MAX;
	uint16_t x31 = 1U;
	uint16_t x32 = 0U;

	t7 = (x29^((x30|x31)<x32));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = -11948;

	t8 = (x33^((x34|x35)<x36));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint8_t x38 = UINT8_MAX;
	static uint64_t x39 = 129929090743039490LLU;
	volatile int8_t x40 = -2;
	volatile int32_t t9 = -21148325;

	t9 = (x37^((x38|x39)<x40));

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 32;
	static volatile int16_t x43 = INT16_MAX;
	volatile int32_t t10 = 22720767;

	t10 = (x41^((x42|x43)<x44));

	if (t10 != 33) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 75U;
	int64_t x46 = INT64_MAX;
	volatile int8_t x47 = 1;
	int32_t x48 = INT32_MIN;

	t11 = (x45^((x46|x47)<x48));

	if (t11 != 75) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint32_t x50 = 95678U;
	static int16_t x51 = INT16_MAX;
	static int16_t x52 = INT16_MIN;
	volatile int64_t t12 = -18941584LL;

	t12 = (x49^((x50|x51)<x52));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 1233U;
	uint8_t x54 = 0U;
	int16_t x55 = 3868;
	int32_t t13 = -76139;

	t13 = (x53^((x54|x55)<x56));

	if (t13 != 1233) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = -1LL;
	int64_t t14 = INT64_MIN;

	t14 = (x57^((x58|x59)<x60));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	int64_t x64 = -26777632285460397LL;
	volatile int32_t t15 = INT32_MIN;

	t15 = (x61^((x62|x63)<x64));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = 216244;
	int64_t x66 = INT64_MIN;
	int32_t x67 = 0;
	static int8_t x68 = INT8_MIN;
	static int32_t t16 = -75;

	t16 = (x65^((x66|x67)<x68));

	if (t16 != 216245) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = -15;
	uint64_t x72 = 41143059375244188LLU;
	int32_t t17 = -1926899;

	t17 = (x69^((x70|x71)<x72));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int32_t x74 = 0;
	int64_t x75 = 89275925892318668LL;
	volatile int8_t x76 = -1;
	int32_t t18 = INT32_MAX;

	t18 = (x73^((x74|x75)<x76));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 0U;
	volatile int16_t x78 = -1;
	int64_t x79 = -1LL;
	int32_t x80 = INT32_MIN;
	static volatile uint32_t t19 = 1423414U;

	t19 = (x77^((x78|x79)<x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x83 = INT32_MIN;
	static int64_t x84 = INT64_MAX;
	volatile int64_t t20 = -382234560567LL;

	t20 = (x81^((x82|x83)<x84));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x86 = -3469388;
	int64_t x87 = INT64_MAX;

	t21 = (x85^((x86|x87)<x88));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	static uint16_t x92 = UINT16_MAX;

	t22 = (x89^((x90|x91)<x92));

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -1;
	int32_t x95 = -1;
	int16_t x96 = -1;
	int32_t t23 = -1;

	t23 = (x93^((x94|x95)<x96));

	if (t23 != 23831625) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	uint32_t x98 = 7330U;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = 85LLU;

	t24 = (x97^((x98|x99)<x100));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 17010871LL;
	uint32_t x102 = UINT32_MAX;
	static int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	static volatile int64_t t25 = -295144726692LL;

	t25 = (x101^((x102|x103)<x104));

	if (t25 != 17010871LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	int64_t x108 = -1LL;
	volatile int32_t t26 = -635;

	t26 = (x105^((x106|x107)<x108));

	if (t26 != 126) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 36997731607226025LL;
	volatile uint32_t x110 = 268U;
	volatile uint32_t x111 = 535U;
	uint8_t x112 = 63U;
	volatile int64_t t27 = 446832173LL;

	t27 = (x109^((x110|x111)<x112));

	if (t27 != 36997731607226025LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 2738711723946LLU;
	static uint8_t x114 = 4U;
	uint8_t x115 = 95U;
	int8_t x116 = -1;

	t28 = (x113^((x114|x115)<x116));

	if (t28 != 2738711723946LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 53778731936295490LL;
	int16_t x118 = -14;
	static volatile int8_t x119 = 19;
	volatile int64_t t29 = 3331519424627236LL;

	t29 = (x117^((x118|x119)<x120));

	if (t29 != 53778731936295490LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 14801U;
	int64_t x122 = -1LL;
	static int32_t x123 = -5;
	int32_t x124 = INT32_MIN;
	volatile uint32_t t30 = 775639U;

	t30 = (x121^((x122|x123)<x124));

	if (t30 != 14801U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int64_t x126 = INT64_MAX;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MAX;
	static volatile int32_t t31 = -375;

	t31 = (x125^((x126|x127)<x128));

	if (t31 != 254) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 119U;
	static int16_t x130 = 26;
	uint16_t x131 = UINT16_MAX;
	static int32_t t32 = -9234;

	t32 = (x129^((x130|x131)<x132));

	if (t32 != 119) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = -1LL;
	volatile int64_t x135 = INT64_MAX;
	static int32_t t33 = 150;

	t33 = (x133^((x134|x135)<x136));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 5;
	static uint32_t x138 = 716021U;
	int16_t x139 = INT16_MAX;
	static volatile int32_t t34 = -426833763;

	t34 = (x137^((x138|x139)<x140));

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x142 = -1;
	int16_t x143 = 1;
	int16_t x144 = -1;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (x141^((x142|x143)<x144));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x146 = UINT32_MAX;
	volatile int64_t x147 = INT64_MAX;
	int64_t x148 = -6758800LL;
	int32_t t36 = -30;

	t36 = (x145^((x146|x147)<x148));

	if (t36 != -3) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	int16_t x150 = 159;
	int64_t x151 = 4315390207440914511LL;
	volatile int64_t t37 = INT64_MAX;

	t37 = (x149^((x150|x151)<x152));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int8_t x154 = INT8_MIN;
	int32_t x156 = -1;
	int32_t t38 = 1572;

	t38 = (x153^((x154|x155)<x156));

	if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int64_t x158 = INT64_MIN;
	static uint16_t x159 = 7314U;
	volatile uint32_t x160 = 94897U;
	int32_t t39 = -822027005;

	t39 = (x157^((x158|x159)<x160));

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = 1670199469168753898LL;
	volatile int32_t t40 = -272998100;

	t40 = (x161^((x162|x163)<x164));

	if (t40 != -26) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint64_t x168 = 62649341351230LLU;

	t41 = (x165^((x166|x167)<x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	int16_t x172 = 78;
	int32_t t42 = 21;

	t42 = (x169^((x170|x171)<x172));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x173 = INT8_MAX;
	volatile uint16_t x175 = 1U;
	int8_t x176 = INT8_MIN;
	int32_t t43 = -14143044;

	t43 = (x173^((x174|x175)<x176));

	if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	int8_t x180 = 1;
	int32_t t44 = -23461;

	t44 = (x177^((x178|x179)<x180));

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 26U;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = -1;
	int8_t x184 = 1;

	t45 = (x181^((x182|x183)<x184));

	if (t45 != 26) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MIN;
	int64_t x187 = -1LL;
	int16_t x188 = -2588;
	volatile int32_t t46 = INT32_MAX;

	t46 = (x185^((x186|x187)<x188));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x192 = INT8_MIN;
	static volatile int32_t t47 = 153;

	t47 = (x189^((x190|x191)<x192));

	if (t47 != 17753) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 31;
	uint32_t x194 = UINT32_MAX;
	uint8_t x195 = 39U;
	int16_t x196 = INT16_MIN;
	volatile int32_t t48 = 368;

	t48 = (x193^((x194|x195)<x196));

	if (t48 != 31) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = 2822;
	uint64_t x199 = 30LLU;
	int16_t x200 = INT16_MAX;
	volatile int32_t t49 = 48354447;

	t49 = (x197^((x198|x199)<x200));

	if (t49 != 2822) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x203 = INT32_MAX;
	int8_t x204 = INT8_MIN;
	static uint64_t t50 = 3LLU;

	t50 = (x201^((x202|x203)<x204));

	if (t50 != 584416233559LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int8_t x206 = INT8_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 6207656;

	t51 = (x205^((x206|x207)<x208));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 12361616LLU;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = -1;
	static uint64_t x212 = UINT64_MAX;
	volatile uint64_t t52 = 4240249285661908225LLU;

	t52 = (x209^((x210|x211)<x212));

	if (t52 != 12361616LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	int32_t x214 = -1;
	uint16_t x215 = UINT16_MAX;
	uint64_t x216 = 3063LLU;
	int32_t t53 = 3911;

	t53 = (x213^((x214|x215)<x216));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	int16_t x219 = -1;
	static volatile int32_t x220 = INT32_MIN;
	volatile int32_t t54 = INT32_MIN;

	t54 = (x217^((x218|x219)<x220));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -1;
	volatile int8_t x222 = -1;
	static uint64_t x224 = UINT64_MAX;
	static int32_t t55 = 22204386;

	t55 = (x221^((x222|x223)<x224));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = 44U;
	volatile int64_t x226 = -1LL;
	uint32_t x227 = 33332963U;
	uint32_t x228 = 1015U;
	volatile uint32_t t56 = 35U;

	t56 = (x225^((x226|x227)<x228));

	if (t56 != 45U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -3;
	static int32_t x230 = INT32_MAX;
	uint8_t x231 = 116U;
	volatile int16_t x232 = -1;
	int32_t t57 = -13512344;

	t57 = (x229^((x230|x231)<x232));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = -2023;
	static uint32_t x235 = 2304U;
	int64_t x236 = INT64_MIN;
	static int32_t t58 = 2387262;

	t58 = (x233^((x234|x235)<x236));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 19LLU;
	volatile uint32_t x239 = 784559514U;
	volatile uint32_t x240 = 596U;

	t59 = (x237^((x238|x239)<x240));

	if (t59 != 19LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	volatile int32_t x243 = -1;
	volatile uint64_t x244 = 28390507756001812LLU;
	volatile int32_t t60 = 18612270;

	t60 = (x241^((x242|x243)<x244));

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	volatile int32_t x246 = INT32_MAX;
	int32_t x247 = INT32_MIN;
	volatile int32_t t61 = 24209753;

	t61 = (x245^((x246|x247)<x248));

	if (t61 != 65534) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = UINT32_MAX;
	volatile int32_t x250 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	static uint32_t t62 = 1U;

	t62 = (x249^((x250|x251)<x252));

	if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = -273119770;
	volatile int32_t x254 = INT32_MIN;
	static uint32_t x255 = 1584U;
	static volatile int32_t t63 = -788;

	t63 = (x253^((x254|x255)<x256));

	if (t63 != -273119770) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = -1;
	int16_t x259 = -19;
	static uint8_t x260 = UINT8_MAX;
	int64_t t64 = 5572070402827LL;

	t64 = (x257^((x258|x259)<x260));

	if (t64 != -116375821988642LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	int16_t x262 = 0;
	static int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MAX;
	int32_t t65 = 10164;

	t65 = (x261^((x262|x263)<x264));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MIN;
	volatile int16_t x267 = INT16_MAX;
	volatile int64_t x268 = INT64_MIN;
	int64_t t66 = -1749LL;

	t66 = (x265^((x266|x267)<x268));

	if (t66 != 3697054049LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int8_t x270 = 0;
	volatile int32_t x271 = -1;
	uint64_t x272 = 613342LLU;
	volatile int32_t t67 = 428533;

	t67 = (x269^((x270|x271)<x272));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x274 = INT8_MIN;
	volatile int64_t x275 = INT64_MIN;
	uint8_t x276 = UINT8_MAX;
	static int32_t t68 = -114;

	t68 = (x273^((x274|x275)<x276));

	if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 11533719LLU;
	static int16_t x280 = INT16_MIN;
	uint64_t t69 = 228994727556LLU;

	t69 = (x277^((x278|x279)<x280));

	if (t69 != 11533719LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MAX;
	int32_t x283 = -1;
	int64_t t70 = 3947988LL;

	t70 = (x281^((x282|x283)<x284));

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -2;
	int8_t x286 = -1;
	int16_t x287 = 5365;
	uint32_t x288 = 548U;

	t71 = (x285^((x286|x287)<x288));

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	uint32_t x290 = 568096488U;
	int32_t x291 = -1;
	volatile int32_t t72 = -186104;

	t72 = (x289^((x290|x291)<x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -266;
	static int32_t x295 = INT32_MAX;
	static int16_t x296 = -1;
	int32_t t73 = -46210;

	t73 = (x293^((x294|x295)<x296));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int16_t x298 = 11;
	static int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MIN;
	int32_t t74 = -3;

	t74 = (x297^((x298|x299)<x300));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MIN;
	uint16_t x303 = UINT16_MAX;
	uint32_t x304 = 16870U;
	volatile int32_t t75 = -18899;

	t75 = (x301^((x302|x303)<x304));

	if (t75 != -29) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 3;
	static uint8_t x306 = UINT8_MAX;
	int64_t x308 = 6LL;

	t76 = (x305^((x306|x307)<x308));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = UINT8_MAX;
	int8_t x311 = -2;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = 29950361;

	t77 = (x309^((x310|x311)<x312));

	if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	volatile int64_t t78 = 46655391103703662LL;

	t78 = (x313^((x314|x315)<x316));

	if (t78 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	static int64_t x318 = 25216418LL;
	int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x317^((x318|x319)<x320));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 174;
	int64_t x322 = INT64_MIN;
	static int8_t x323 = 1;
	uint8_t x324 = 2U;
	int32_t t80 = -830389;

	t80 = (x321^((x322|x323)<x324));

	if (t80 != 175) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = UINT64_MAX;
	static int16_t x327 = INT16_MAX;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x325^((x326|x327)<x328));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MIN;
	int64_t t82 = 11039LL;

	t82 = (x329^((x330|x331)<x332));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -3;
	int32_t x334 = INT32_MIN;
	volatile uint64_t x335 = 110029038909286772LLU;
	volatile int32_t x336 = -51393298;

	t83 = (x333^((x334|x335)<x336));

	if (t83 != -4) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1776LL;
	int64_t x338 = INT64_MIN;
	static uint64_t x339 = UINT64_MAX;
	volatile int64_t t84 = -4LL;

	t84 = (x337^((x338|x339)<x340));

	if (t84 != -1776LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	static uint16_t x342 = 5215U;
	int64_t x344 = INT64_MIN;
	uint32_t t85 = UINT32_MAX;

	t85 = (x341^((x342|x343)<x344));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = 0;
	uint64_t x347 = UINT64_MAX;
	static int8_t x348 = INT8_MIN;
	static uint64_t t86 = 257679LLU;

	t86 = (x345^((x346|x347)<x348));

	if (t86 != 16485LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	static uint64_t x350 = UINT64_MAX;
	volatile int8_t x352 = -1;
	static int32_t t87 = 24339223;

	t87 = (x349^((x350|x351)<x352));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 353U;
	int16_t x355 = -1;
	int32_t x356 = INT32_MAX;
	uint32_t t88 = UINT32_MAX;

	t88 = (x353^((x354|x355)<x356));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -239798338652LL;
	int64_t x360 = INT64_MAX;
	static uint32_t t89 = 454850U;

	t89 = (x357^((x358|x359)<x360));

	if (t89 != 2077U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = -1LL;
	int8_t x364 = -1;
	int32_t t90 = INT32_MIN;

	t90 = (x361^((x362|x363)<x364));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -2043LL;
	uint32_t x366 = UINT32_MAX;
	int32_t x367 = -1;
	static volatile int32_t x368 = 48962569;

	t91 = (x365^((x366|x367)<x368));

	if (t91 != -2043LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = -1LL;
	static uint32_t x371 = 53U;
	int32_t x372 = -1;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x369^((x370|x371)<x372));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MIN;
	int64_t x376 = 390876844142674LL;
	int64_t t93 = -962LL;

	t93 = (x373^((x374|x375)<x376));

	if (t93 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	static int16_t x378 = INT16_MIN;
	volatile int16_t x379 = -1;
	uint32_t t94 = UINT32_MAX;

	t94 = (x377^((x378|x379)<x380));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -245919222914239LL;
	static volatile uint32_t x382 = UINT32_MAX;
	volatile int16_t x384 = 66;
	int64_t t95 = 7LL;

	t95 = (x381^((x382|x383)<x384));

	if (t95 != -245919222914239LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 1011LLU;
	int64_t x387 = -1991181228276198204LL;
	uint64_t t96 = 50667LLU;

	t96 = (x385^((x386|x387)<x388));

	if (t96 != 1010LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = 6389936LLU;
	int16_t x390 = INT16_MAX;
	uint64_t t97 = 5826551421745538LLU;

	t97 = (x389^((x390|x391)<x392));

	if (t97 != 6389936LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	volatile uint32_t x394 = UINT32_MAX;
	volatile int8_t x395 = 28;
	volatile int32_t t98 = -207494334;

	t98 = (x393^((x394|x395)<x396));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = 3254031267950920LLU;
	uint64_t x398 = 16577174518986047LLU;
	uint16_t x399 = 21370U;
	uint32_t x400 = 3095160U;
	uint64_t t99 = 3291870582876078457LLU;

	t99 = (x397^((x398|x399)<x400));

	if (t99 != 3254031267950920LLU) { NG(); } else { ; }
	
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

