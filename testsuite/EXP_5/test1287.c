#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x14 = -1;
int16_t x16 = -1;
int16_t x21 = -1;
volatile int16_t x24 = INT16_MIN;
volatile int8_t x32 = -10;
int64_t x33 = -1LL;
int32_t x37 = -17864039;
static volatile int32_t t9 = 1;
static int16_t x52 = INT16_MIN;
volatile int32_t t13 = -556;
volatile int32_t t14 = 32217275;
int16_t x65 = INT16_MIN;
uint16_t x68 = 270U;
volatile int8_t x71 = -56;
int64_t t17 = INT64_MAX;
uint64_t x78 = UINT64_MAX;
static volatile uint64_t t20 = UINT64_MAX;
static int64_t x90 = INT64_MIN;
int32_t x92 = INT32_MIN;
int32_t x94 = -5452;
volatile int16_t x102 = INT16_MIN;
static int32_t t25 = INT32_MAX;
int64_t x105 = -44176168367021598LL;
uint64_t t27 = UINT64_MAX;
int64_t x120 = -46890576800337LL;
uint8_t x122 = 4U;
int64_t t30 = INT64_MAX;
int8_t x128 = INT8_MIN;
volatile int32_t t31 = 435;
static volatile uint32_t x131 = 319443976U;
int32_t t33 = -67897;
int32_t x143 = -10;
int16_t x149 = INT16_MIN;
int8_t x156 = 0;
static uint64_t x160 = 7607723882016240268LLU;
volatile int16_t x162 = -2;
volatile int32_t t40 = 263273426;
int8_t x172 = -1;
static int64_t t43 = 4798049631LL;
int16_t x179 = INT16_MIN;
static int8_t x180 = INT8_MAX;
uint32_t x182 = UINT32_MAX;
static uint16_t x200 = 5U;
static uint8_t x207 = 8U;
volatile int32_t x211 = 1124506;
int8_t x214 = INT8_MAX;
static int64_t x215 = -2LL;
int64_t t53 = 1917475764LL;
static int32_t x225 = -48;
uint32_t x227 = UINT32_MAX;
uint8_t x230 = UINT8_MAX;
uint64_t x233 = 1064004555494260LLU;
static int32_t x234 = 1;
int8_t x236 = -1;
uint64_t t58 = 5LLU;
uint8_t x238 = UINT8_MAX;
uint8_t x240 = 65U;
uint64_t x243 = UINT64_MAX;
int32_t x248 = -158716719;
volatile int32_t t61 = INT32_MIN;
static int64_t x256 = -869210879LL;
int32_t x261 = INT32_MIN;
static int32_t x271 = -110862386;
int32_t x282 = -1;
uint32_t x284 = UINT32_MAX;
uint16_t x285 = 98U;
static int32_t x288 = -1;
int16_t x296 = -1;
volatile int64_t t73 = 23253813798290LL;
int64_t x297 = 58422388584888LL;
volatile int64_t t74 = 112145057844597LL;
int16_t x313 = 15;
int64_t x315 = -1LL;
int8_t x317 = INT8_MAX;
volatile int32_t t79 = 80994669;
uint8_t x326 = 21U;
int8_t x328 = INT8_MIN;
volatile int16_t x339 = -37;
int8_t x348 = 1;
int64_t x353 = INT64_MAX;
int64_t t88 = INT64_MAX;
uint64_t x357 = 80947549347733LLU;
volatile uint64_t x363 = 16719909618LLU;
static int32_t t90 = -10013972;
int64_t x374 = -240767LL;
volatile int64_t x381 = -1LL;
int16_t x383 = INT16_MIN;
uint32_t x388 = 349022U;
static volatile int32_t x393 = -15034;
int16_t x396 = -1;
uint64_t x398 = 2044726174906387213LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int8_t x2 = -21;
	int16_t x3 = INT16_MAX;
	int8_t x4 = -1;
	volatile int32_t t0 = 19557080;

	t0 = (x1^((x2==x3)==x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 38;
	int32_t x6 = INT32_MAX;
	int16_t x7 = -1;
	int64_t x8 = -1LL;
	volatile int32_t t1 = 409964183;

	t1 = (x5^((x6==x7)==x8));

	if (t1 != 38) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 2;
	int64_t x10 = INT64_MIN;
	uint8_t x11 = UINT8_MAX;
	uint8_t x12 = 0U;
	int32_t t2 = -7;

	t2 = (x9^((x10==x11)==x12));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	static int8_t x15 = INT8_MIN;
	int64_t t3 = INT64_MAX;

	t3 = (x13^((x14==x15)==x16));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MAX;
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = -2;
	int8_t x20 = 3;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x17^((x18==x19)==x20));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 98U;
	int16_t x23 = INT16_MIN;
	volatile int32_t t5 = 15;

	t5 = (x21^((x22==x23)==x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -168818LL;
	static int16_t x26 = -1;
	int32_t x27 = -246123292;
	volatile int8_t x28 = -10;
	volatile int64_t t6 = -535018455LL;

	t6 = (x25^((x26==x27)==x28));

	if (t6 != -168818LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 9LLU;
	int64_t x30 = 38346284194058023LL;
	int64_t x31 = INT64_MIN;
	uint64_t t7 = 2791215LLU;

	t7 = (x29^((x30==x31)==x32));

	if (t7 != 9LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	volatile uint16_t x36 = 17U;
	volatile int64_t t8 = 2323090584LL;

	t8 = (x33^((x34==x35)==x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 562U;
	int64_t x39 = 168482317080126548LL;
	uint8_t x40 = UINT8_MAX;

	t9 = (x37^((x38==x39)==x40));

	if (t9 != -17864039) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -3;
	static int64_t x42 = INT64_MIN;
	uint64_t x43 = 2357242619LLU;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 64195;

	t10 = (x41^((x42==x43)==x44));

	if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	uint16_t x46 = 34U;
	volatile int64_t x47 = -1LL;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = -4986;

	t11 = (x45^((x46==x47)==x48));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile int64_t x50 = INT64_MIN;
	uint64_t x51 = 537759136319800LLU;
	volatile int32_t t12 = -608;

	t12 = (x49^((x50==x51)==x52));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 5U;
	int8_t x54 = 0;
	int16_t x55 = -28;
	int64_t x56 = INT64_MIN;

	t13 = (x53^((x54==x55)==x56));

	if (t13 != 5) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -768920980;
	static int8_t x58 = INT8_MIN;
	volatile int64_t x59 = 15LL;
	int64_t x60 = INT64_MIN;

	t14 = (x57^((x58==x59)==x60));

	if (t14 != -768920980) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1181344;
	uint64_t x62 = 719210224966721LLU;
	volatile int32_t x63 = INT32_MAX;
	volatile int8_t x64 = -1;
	static int32_t t15 = 134782565;

	t15 = (x61^((x62==x63)==x64));

	if (t15 != -1181344) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MAX;
	uint64_t x67 = UINT64_MAX;
	int32_t t16 = 1;

	t16 = (x65^((x66==x67)==x68));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int32_t x70 = -327531261;
	static int32_t x72 = -2027346;

	t17 = (x69^((x70==x71)==x72));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 28322U;
	static int64_t x74 = 4995981272LL;
	int64_t x75 = 377712LL;
	int8_t x76 = -1;
	int32_t t18 = -129279;

	t18 = (x73^((x74==x75)==x76));

	if (t18 != 28322) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = UINT32_MAX;
	volatile uint16_t x79 = UINT16_MAX;
	uint32_t x80 = 865556490U;
	static uint32_t t19 = UINT32_MAX;

	t19 = (x77^((x78==x79)==x80));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	int8_t x82 = -1;
	int64_t x83 = INT64_MIN;
	uint16_t x84 = 101U;

	t20 = (x81^((x82==x83)==x84));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 2130LLU;
	static int32_t x86 = -21731;
	static int16_t x87 = INT16_MIN;
	static uint64_t x88 = 7774324251905244LLU;
	uint64_t t21 = 6548LLU;

	t21 = (x85^((x86==x87)==x88));

	if (t21 != 2130LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static int32_t x91 = INT32_MAX;
	int32_t t22 = INT32_MIN;

	t22 = (x89^((x90==x91)==x92));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	static uint16_t x95 = 13U;
	int16_t x96 = 473;
	int32_t t23 = 462;

	t23 = (x93^((x94==x95)==x96));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -1;
	int32_t x98 = INT32_MIN;
	uint32_t x99 = 599582U;
	uint64_t x100 = 0LLU;
	int32_t t24 = -124;

	t24 = (x97^((x98==x99)==x100));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	volatile int64_t x103 = INT64_MIN;
	static int64_t x104 = 1326LL;

	t25 = (x101^((x102==x103)==x104));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x106 = INT64_MAX;
	uint16_t x107 = 461U;
	int64_t x108 = INT64_MAX;
	int64_t t26 = 244658836432906518LL;

	t26 = (x105^((x106==x107)==x108));

	if (t26 != -44176168367021598LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	static int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	static int16_t x112 = INT16_MIN;

	t27 = (x109^((x110==x111)==x112));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	volatile int32_t x114 = INT32_MIN;
	static int32_t x115 = -13;
	int32_t x116 = -1;
	volatile int32_t t28 = -145240;

	t28 = (x113^((x114==x115)==x116));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	static volatile uint16_t x119 = 124U;
	static int32_t t29 = -11025;

	t29 = (x117^((x118==x119)==x120));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	volatile uint32_t x123 = UINT32_MAX;
	int8_t x124 = INT8_MAX;

	t30 = (x121^((x122==x123)==x124));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = 0U;
	uint32_t x127 = 227186U;

	t31 = (x125^((x126==x127)==x128));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -105LL;
	int32_t x130 = INT32_MAX;
	static volatile int8_t x132 = -25;
	int64_t t32 = 23LL;

	t32 = (x129^((x130==x131)==x132));

	if (t32 != -105LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -2;
	int8_t x134 = INT8_MIN;
	uint16_t x135 = 1U;
	int16_t x136 = 0;

	t33 = (x133^((x134==x135)==x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MIN;
	uint32_t x139 = UINT32_MAX;
	uint8_t x140 = 0U;
	volatile int32_t t34 = 1927;

	t34 = (x137^((x138==x139)==x140));

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MIN;
	uint64_t x144 = 16520420878762LLU;
	volatile int32_t t35 = INT32_MIN;

	t35 = (x141^((x142==x143)==x144));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	uint8_t x146 = UINT8_MAX;
	volatile int64_t x147 = INT64_MAX;
	int16_t x148 = INT16_MIN;
	static uint64_t t36 = UINT64_MAX;

	t36 = (x145^((x146==x147)==x148));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = -1;
	volatile uint8_t x152 = UINT8_MAX;
	int32_t t37 = 1603;

	t37 = (x149^((x150==x151)==x152));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	static int64_t x154 = INT64_MAX;
	int64_t x155 = 3138011122314794LL;
	static volatile int32_t t38 = -644673098;

	t38 = (x153^((x154==x155)==x156));

	if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	static int64_t x158 = -1LL;
	int8_t x159 = -1;
	volatile int32_t t39 = -1002561;

	t39 = (x157^((x158==x159)==x160));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	volatile int32_t x163 = INT32_MIN;
	static uint8_t x164 = 47U;

	t40 = (x161^((x162==x163)==x164));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int64_t x166 = INT64_MAX;
	uint32_t x167 = UINT32_MAX;
	uint16_t x168 = 17U;
	volatile int32_t t41 = 142;

	t41 = (x165^((x166==x167)==x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int8_t x170 = INT8_MIN;
	int8_t x171 = 13;
	int32_t t42 = 583458;

	t42 = (x169^((x170==x171)==x172));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	static uint16_t x174 = 24U;
	static int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;

	t43 = (x173^((x174==x175)==x176));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -10185;
	volatile int64_t x178 = INT64_MAX;
	int32_t t44 = 29893471;

	t44 = (x177^((x178==x179)==x180));

	if (t44 != -10185) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -1;
	volatile int64_t x183 = INT64_MAX;
	int16_t x184 = INT16_MAX;
	static volatile int32_t t45 = -524054286;

	t45 = (x181^((x182==x183)==x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = UINT64_MAX;
	int64_t x187 = INT64_MIN;
	volatile int8_t x188 = INT8_MIN;
	int64_t t46 = INT64_MIN;

	t46 = (x185^((x186==x187)==x188));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MAX;
	static int32_t x191 = INT32_MIN;
	uint32_t x192 = 899204U;
	static int64_t t47 = INT64_MAX;

	t47 = (x189^((x190==x191)==x192));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = INT64_MIN;
	static int64_t x196 = -1LL;
	volatile int64_t t48 = 0LL;

	t48 = (x193^((x194==x195)==x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 3U;
	int16_t x198 = INT16_MIN;
	volatile int32_t x199 = 69;
	uint32_t t49 = 2U;

	t49 = (x197^((x198==x199)==x200));

	if (t49 != 3U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = UINT8_MAX;
	static int64_t x202 = -9LL;
	int32_t x203 = INT32_MIN;
	uint8_t x204 = 15U;
	int32_t t50 = -25;

	t50 = (x201^((x202==x203)==x204));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 10;
	volatile int64_t x206 = INT64_MAX;
	int64_t x208 = -1LL;
	volatile int32_t t51 = -270;

	t51 = (x205^((x206==x207)==x208));

	if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x209 = INT32_MAX;
	int16_t x210 = INT16_MAX;
	int32_t x212 = 59018;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x209^((x210==x211)==x212));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	int16_t x216 = -1;

	t53 = (x213^((x214==x215)==x216));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 70U;
	int64_t x218 = INT64_MAX;
	int16_t x219 = INT16_MAX;
	int8_t x220 = INT8_MAX;
	int32_t t54 = -9112281;

	t54 = (x217^((x218==x219)==x220));

	if (t54 != 70) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	volatile int32_t x222 = -1;
	static int8_t x223 = 1;
	uint8_t x224 = UINT8_MAX;
	int32_t t55 = INT32_MIN;

	t55 = (x221^((x222==x223)==x224));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x226 = INT32_MIN;
	int32_t x228 = INT32_MAX;
	int32_t t56 = 55;

	t56 = (x225^((x226==x227)==x228));

	if (t56 != -48) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 208U;
	uint64_t x231 = 1068LLU;
	int32_t x232 = -396;
	int32_t t57 = 25556529;

	t57 = (x229^((x230==x231)==x232));

	if (t57 != 208) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x235 = -9;

	t58 = (x233^((x234==x235)==x236));

	if (t58 != 1064004555494260LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	int8_t x239 = INT8_MAX;
	static int32_t t59 = -221679;

	t59 = (x237^((x238==x239)==x240));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	static int64_t x242 = 762584911080320LL;
	uint64_t x244 = 3171242388372312254LLU;
	int32_t t60 = -44893;

	t60 = (x241^((x242==x243)==x244));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MIN;

	t61 = (x245^((x246==x247)==x248));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -97208LL;
	int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = 1418U;
	int64_t t62 = 14LL;

	t62 = (x249^((x250==x251)==x252));

	if (t62 != -97208LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	volatile int32_t x254 = INT32_MIN;
	uint16_t x255 = 115U;
	int32_t t63 = -274571;

	t63 = (x253^((x254==x255)==x256));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = 74U;
	volatile int32_t x258 = INT32_MAX;
	static volatile int8_t x259 = -12;
	int8_t x260 = INT8_MIN;
	int32_t t64 = 83487130;

	t64 = (x257^((x258==x259)==x260));

	if (t64 != 74) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MIN;
	volatile int16_t x263 = 79;
	int32_t x264 = 1;
	static int32_t t65 = INT32_MIN;

	t65 = (x261^((x262==x263)==x264));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint32_t x266 = UINT32_MAX;
	uint64_t x267 = 786191747LLU;
	int32_t x268 = INT32_MIN;
	int64_t t66 = INT64_MIN;

	t66 = (x265^((x266==x267)==x268));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 1470158263028LLU;
	int32_t x270 = INT32_MIN;
	static int16_t x272 = INT16_MIN;
	static volatile uint64_t t67 = 9000948692309103030LLU;

	t67 = (x269^((x270==x271)==x272));

	if (t67 != 1470158263028LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = -27019070LL;
	static int32_t x274 = INT32_MIN;
	static uint32_t x275 = UINT32_MAX;
	int32_t x276 = INT32_MAX;
	volatile int64_t t68 = -4256396LL;

	t68 = (x273^((x274==x275)==x276));

	if (t68 != -27019070LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MAX;
	uint32_t x278 = UINT32_MAX;
	static int16_t x279 = 1353;
	int16_t x280 = -1;
	int32_t t69 = 61;

	t69 = (x277^((x278==x279)==x280));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 921U;
	int8_t x283 = INT8_MIN;
	uint32_t t70 = 1655390323U;

	t70 = (x281^((x282==x283)==x284));

	if (t70 != 921U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = 1697U;
	int32_t x287 = 1246;
	int32_t t71 = 1740285;

	t71 = (x285^((x286==x287)==x288));

	if (t71 != 98) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 32339U;
	static int8_t x290 = 56;
	int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	static volatile int32_t t72 = 1232565;

	t72 = (x289^((x290==x291)==x292));

	if (t72 != 32339) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -1135273806852LL;
	int8_t x294 = -1;
	int8_t x295 = INT8_MAX;

	t73 = (x293^((x294==x295)==x296));

	if (t73 != -1135273806852LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	static int16_t x300 = INT16_MAX;

	t74 = (x297^((x298==x299)==x300));

	if (t74 != 58422388584888LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile uint8_t x302 = 15U;
	int16_t x303 = INT16_MAX;
	int32_t x304 = INT32_MAX;
	volatile int32_t t75 = INT32_MIN;

	t75 = (x301^((x302==x303)==x304));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int16_t x306 = 8;
	uint64_t x307 = UINT64_MAX;
	int64_t x308 = -585LL;
	int32_t t76 = 671276;

	t76 = (x305^((x306==x307)==x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	static uint64_t x310 = 360311508020879358LLU;
	int8_t x311 = -1;
	volatile int8_t x312 = INT8_MAX;
	int32_t t77 = 16987111;

	t77 = (x309^((x310==x311)==x312));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x314 = 7U;
	volatile int8_t x316 = -1;
	int32_t t78 = -80817362;

	t78 = (x313^((x314==x315)==x316));

	if (t78 != 15) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = UINT16_MAX;
	volatile int64_t x319 = 1LL;
	volatile int8_t x320 = -56;

	t79 = (x317^((x318==x319)==x320));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -4189;
	static uint32_t x322 = UINT32_MAX;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -19;

	t80 = (x321^((x322==x323)==x324));

	if (t80 != -4189) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	int16_t x327 = -1;
	volatile int32_t t81 = 1;

	t81 = (x325^((x326==x327)==x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MAX;
	volatile uint64_t x331 = UINT64_MAX;
	static int64_t x332 = -1LL;
	volatile int32_t t82 = 127727;

	t82 = (x329^((x330==x331)==x332));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	int32_t x334 = 27926;
	static uint32_t x335 = 257U;
	int64_t x336 = INT64_MAX;
	volatile int64_t t83 = -839679803432736150LL;

	t83 = (x333^((x334==x335)==x336));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile int64_t x338 = 167268155LL;
	volatile int16_t x340 = -11506;
	volatile int32_t t84 = 111060;

	t84 = (x337^((x338==x339)==x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = UINT32_MAX;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	uint32_t t85 = UINT32_MAX;

	t85 = (x341^((x342==x343)==x344));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	static int32_t x346 = 1048842;
	int32_t x347 = INT32_MIN;
	int64_t t86 = -52964779938LL;

	t86 = (x345^((x346==x347)==x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = -17;
	int8_t x350 = INT8_MAX;
	static int8_t x351 = INT8_MIN;
	int16_t x352 = 16101;
	volatile int32_t t87 = 1;

	t87 = (x349^((x350==x351)==x352));

	if (t87 != -17) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x354 = -8;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MAX;

	t88 = (x353^((x354==x355)==x356));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x358 = 28U;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MIN;
	uint64_t t89 = 2184LLU;

	t89 = (x357^((x358==x359)==x360));

	if (t89 != 80947549347733LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	uint32_t x362 = 4700439U;
	int64_t x364 = INT64_MAX;

	t90 = (x361^((x362==x363)==x364));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 0U;
	volatile int32_t x366 = INT32_MIN;
	static uint8_t x367 = 1U;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = -29297;

	t91 = (x365^((x366==x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = INT8_MIN;
	uint32_t x370 = 5U;
	uint32_t x371 = UINT32_MAX;
	volatile int64_t x372 = -1LL;
	static volatile int32_t t92 = -39;

	t92 = (x369^((x370==x371)==x372));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static int32_t x375 = INT32_MIN;
	static int16_t x376 = INT16_MIN;
	int32_t t93 = 174;

	t93 = (x373^((x374==x375)==x376));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = -16174;
	volatile int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	volatile uint64_t x380 = 3929652245570LLU;
	volatile int32_t t94 = 7;

	t94 = (x377^((x378==x379)==x380));

	if (t94 != -16174) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x382 = INT32_MAX;
	int16_t x384 = 6668;
	int64_t t95 = -210LL;

	t95 = (x381^((x382==x383)==x384));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = -17427LL;
	static int32_t x386 = INT32_MIN;
	static int8_t x387 = INT8_MIN;
	int64_t t96 = 129394317106204LL;

	t96 = (x385^((x386==x387)==x388));

	if (t96 != -17427LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	int32_t x390 = 30159352;
	int8_t x391 = INT8_MIN;
	int32_t x392 = 2634890;
	volatile int32_t t97 = 36670;

	t97 = (x389^((x390==x391)==x392));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x394 = -1LL;
	int32_t x395 = -209228;
	static int32_t t98 = -12;

	t98 = (x393^((x394==x395)==x396));

	if (t98 != -15034) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = 48;
	static int32_t x399 = INT32_MAX;
	int8_t x400 = -3;
	int32_t t99 = -1;

	t99 = (x397^((x398==x399)==x400));

	if (t99 != 48) { NG(); } else { ; }
	
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

