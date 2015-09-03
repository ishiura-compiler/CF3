#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = UINT64_MAX;
volatile uint8_t x7 = 5U;
static volatile int8_t x9 = -1;
static int16_t x11 = INT16_MIN;
uint64_t t2 = 440041232753915LLU;
int32_t x19 = INT32_MIN;
uint8_t x24 = 2U;
int64_t x27 = INT64_MIN;
volatile int8_t x31 = INT8_MIN;
int8_t x33 = -1;
volatile int16_t x36 = -1;
int64_t t10 = 0LL;
volatile int8_t x45 = INT8_MIN;
static uint16_t x61 = 3751U;
static volatile uint8_t x65 = 3U;
int32_t x66 = INT32_MAX;
volatile int32_t t16 = -1;
static int16_t x69 = INT16_MAX;
static int16_t x78 = INT16_MIN;
static uint32_t x83 = UINT32_MAX;
static volatile int64_t t20 = -2235003371LL;
uint64_t x85 = 30162818557548126LLU;
int8_t x86 = INT8_MIN;
uint16_t x87 = 81U;
volatile int64_t t22 = 3LL;
uint64_t x97 = 129909869LLU;
int32_t x99 = -1;
int32_t x103 = INT32_MAX;
int64_t x109 = 1791478470LL;
int32_t x120 = INT32_MIN;
int64_t x121 = -4459692439475LL;
volatile int64_t t29 = 593245257238733LL;
int16_t x128 = 12217;
static uint64_t x131 = 419971771590850LLU;
volatile uint64_t t31 = 14LLU;
volatile uint16_t x133 = 58U;
int16_t x136 = INT16_MIN;
uint8_t x139 = UINT8_MAX;
static int64_t t33 = 11014908447LL;
uint16_t x145 = 15070U;
static uint16_t x147 = 20U;
volatile int8_t x150 = INT8_MAX;
int16_t x152 = INT16_MIN;
volatile int64_t x153 = -1130862106203261409LL;
uint8_t x155 = 22U;
uint32_t x158 = 39223667U;
int8_t x173 = -1;
int32_t t42 = 32150915;
int16_t x178 = -1;
static int16_t x180 = INT16_MIN;
uint32_t t43 = 3742038U;
uint16_t x183 = 9865U;
int32_t x187 = INT32_MIN;
int8_t x191 = -1;
int8_t x192 = -1;
volatile uint32_t t46 = 1222U;
volatile int64_t t47 = 3599420975984897LL;
int16_t x202 = -56;
static volatile uint32_t t48 = 3708U;
volatile uint64_t t49 = 6888059928178861603LLU;
int8_t x213 = INT8_MIN;
int8_t x215 = INT8_MIN;
static volatile int64_t x221 = 976922866726257030LL;
static volatile uint64_t x226 = UINT64_MAX;
volatile int32_t x231 = INT32_MIN;
static int64_t x233 = INT64_MAX;
uint32_t x242 = 645U;
int64_t t60 = -39LL;
static int16_t x253 = -1;
uint32_t x259 = UINT32_MAX;
static uint16_t x265 = 2U;
int64_t x266 = INT64_MIN;
int32_t x275 = INT32_MIN;
volatile int64_t t66 = 25426125LL;
static volatile int16_t x280 = INT16_MIN;
int32_t x291 = INT32_MAX;
uint16_t x293 = 90U;
volatile int64_t t72 = -490760229580100LL;
uint16_t x303 = UINT16_MAX;
int16_t x305 = INT16_MIN;
int64_t x306 = -1LL;
int64_t t74 = 15714162842227LL;
volatile uint32_t x320 = UINT32_MAX;
volatile uint64_t t77 = 7990832095002LLU;
static volatile int64_t t79 = -2469026959LL;
volatile uint64_t x337 = 96483LLU;
static int8_t x343 = INT8_MAX;
uint64_t x346 = 532358249056LLU;
int32_t x352 = -17;
static int8_t x354 = 0;
int32_t t85 = -59736;
int32_t x358 = -454;
volatile int8_t x360 = -1;
volatile int64_t t86 = -6386136715LL;
uint8_t x365 = 78U;
int16_t x367 = INT16_MAX;
static int16_t x371 = 523;
uint64_t x375 = UINT64_MAX;
int16_t x377 = INT16_MAX;
volatile uint8_t x378 = 1U;
int32_t x379 = -1;
volatile int32_t x383 = 371;
uint64_t x392 = 77709876190824LLU;
uint8_t x397 = 0U;
int16_t x402 = -1;
int64_t x404 = -1LL;
volatile int64_t t98 = -185LL;
int16_t x409 = INT16_MIN;
int16_t x412 = INT16_MAX;
volatile uint32_t t99 = UINT32_MAX;


void f0(void) {
	uint32_t x1 = 371866586U;
	volatile int16_t x2 = INT16_MIN;
	int32_t x3 = -1;
	int8_t x4 = INT8_MIN;
	uint32_t t0 = 1U;

	t0 = (x1^((x2%x3)|x4));

	if (t0 != 3923100762U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -44102299004895273LL;
	int32_t x8 = INT32_MIN;
	uint64_t t1 = 1262263797212LLU;

	t1 = (x5^((x6%x7)|x8));

	if (t1 != 44102299744272343LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	uint64_t x12 = 702437LLU;

	t2 = (x9^((x10%x11)|x12));

	if (t2 != 18446744073708849178LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -8433849;
	static int64_t x14 = -115781638071682LL;
	int32_t x15 = -1;
	int16_t x16 = -1;
	volatile int64_t t3 = -20230464368886759LL;

	t3 = (x13^((x14%x15)|x16));

	if (t3 != 8433848LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint8_t x18 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	int64_t t4 = INT64_MIN;

	t4 = (x17^((x18%x19)|x20));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int32_t x22 = INT32_MIN;
	static uint32_t x23 = UINT32_MAX;
	volatile uint32_t t5 = 17817519U;

	t5 = (x21^((x22%x23)|x24));

	if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int32_t x26 = INT32_MAX;
	static int64_t x28 = 61LL;
	static volatile int64_t t6 = -2305339866996145LL;

	t6 = (x25^((x26%x27)|x28));

	if (t6 != -2147450881LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	uint8_t x30 = UINT8_MAX;
	static volatile uint16_t x32 = UINT16_MAX;
	int32_t t7 = -1;

	t7 = (x29^((x30%x31)|x32));

	if (t7 != -65409) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -1;
	int64_t x35 = INT64_MIN;
	volatile int64_t t8 = -7592612453LL;

	t8 = (x33^((x34%x35)|x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	uint32_t x38 = UINT32_MAX;
	uint8_t x39 = UINT8_MAX;
	int64_t x40 = -1LL;
	volatile int64_t t9 = -489353402LL;

	t9 = (x37^((x38%x39)|x40));

	if (t9 != -65536LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 0;
	static int32_t x42 = 4683987;
	int32_t x43 = INT32_MAX;
	int64_t x44 = -3924201611071517LL;

	t10 = (x41^((x42%x43)|x44));

	if (t10 != -3924201610674189LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MAX;
	uint8_t x47 = UINT8_MAX;
	volatile int32_t x48 = -1;
	static int32_t t11 = -1392718;

	t11 = (x45^((x46%x47)|x48));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint8_t x50 = UINT8_MAX;
	int16_t x51 = -12;
	int8_t x52 = -1;
	volatile int32_t t12 = INT32_MAX;

	t12 = (x49^((x50%x51)|x52));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile uint32_t x54 = 1U;
	uint16_t x55 = UINT16_MAX;
	uint8_t x56 = 8U;
	volatile uint32_t t13 = 326937U;

	t13 = (x53^((x54%x55)|x56));

	if (t13 != 2147483657U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x57 = 7287824560LLU;
	int32_t x58 = -1;
	volatile int8_t x59 = 18;
	int64_t x60 = INT64_MIN;
	volatile uint64_t t14 = 8300495862LLU;

	t14 = (x57^((x58%x59)|x60));

	if (t14 != 18446744066421727055LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x62 = INT8_MIN;
	int32_t x63 = -1;
	int32_t x64 = 199228;
	int32_t t15 = -390;

	t15 = (x61^((x62%x63)|x64));

	if (t15 != 197787) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x67 = INT16_MIN;
	int32_t x68 = 76300;

	t16 = (x65^((x66%x67)|x68));

	if (t16 != 98300) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x70 = UINT64_MAX;
	int8_t x71 = INT8_MIN;
	int8_t x72 = -1;
	uint64_t t17 = 518335699060LLU;

	t17 = (x69^((x70%x71)|x72));

	if (t17 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 0U;
	static int16_t x74 = INT16_MIN;
	volatile int8_t x75 = -46;
	int16_t x76 = -3;
	volatile int32_t t18 = -11462;

	t18 = (x73^((x74%x75)|x76));

	if (t18 != -3) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = 981636640;
	uint32_t t19 = 554986U;

	t19 = (x77^((x78%x79)|x80));

	if (t19 != 2147510751U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint16_t x82 = 91U;
	int16_t x84 = INT16_MIN;

	t20 = (x81^((x82%x83)|x84));

	if (t20 != -4294934620LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x88 = INT16_MIN;
	volatile uint64_t t21 = 3853335783252LLU;

	t21 = (x85^((x86%x87)|x88));

	if (t21 != 18416581255152003471LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = INT32_MAX;
	int64_t x95 = INT64_MIN;
	static volatile uint32_t x96 = UINT32_MAX;

	t22 = (x93^((x94%x95)|x96));

	if (t22 != -2147483649LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x98 = 187328568LL;
	uint64_t x100 = UINT64_MAX;
	uint64_t t23 = 14817151500463LLU;

	t23 = (x97^((x98%x99)|x100));

	if (t23 != 18446744073579641746LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -1;
	int64_t x102 = 2015556019709451583LL;
	static uint16_t x104 = UINT16_MAX;
	int64_t t24 = 17636134869901LL;

	t24 = (x101^((x102%x103)|x104));

	if (t24 != -463536128LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = -3;
	uint64_t x106 = 14867854LLU;
	int64_t x107 = -263LL;
	static int16_t x108 = -736;
	volatile uint64_t t25 = 883869333LLU;

	t25 = (x105^((x106%x107)|x108));

	if (t25 != 595LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	static int16_t x112 = 5008;
	volatile int64_t t26 = 1344594345597407LL;

	t26 = (x109^((x110%x111)|x112));

	if (t26 != 1791472953LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = 0;
	int64_t x115 = INT64_MIN;
	static volatile int64_t x116 = 2040LL;
	volatile int64_t t27 = -446222601512430801LL;

	t27 = (x113^((x114%x115)|x116));

	if (t27 != -2147481608LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 4947939LL;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;
	volatile int64_t t28 = -21452587392767LL;

	t28 = (x117^((x118%x119)|x120));

	if (t28 != -4915229LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x122 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;
	static int32_t x124 = -1;

	t29 = (x121^((x122%x123)|x124));

	if (t29 != 4459692439474LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x125 = 10;
	static int16_t x126 = 0;
	int64_t x127 = 18596878LL;
	volatile int64_t t30 = 99499204435567220LL;

	t30 = (x125^((x126%x127)|x128));

	if (t30 != 12211LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 45397U;
	int32_t x130 = INT32_MAX;
	uint64_t x132 = UINT64_MAX;

	t31 = (x129^((x130%x131)|x132));

	if (t31 != 18446744073709506218LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x134 = UINT16_MAX;
	uint8_t x135 = UINT8_MAX;
	volatile int32_t t32 = 254266974;

	t32 = (x133^((x134%x135)|x136));

	if (t32 != -32710) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	uint32_t x138 = 7384U;
	static volatile int64_t x140 = -327870236194880104LL;

	t33 = (x137^((x138%x139)|x140));

	if (t33 != 8895501800659895804LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x141 = INT32_MIN;
	volatile int8_t x142 = -5;
	uint8_t x143 = 100U;
	static int16_t x144 = 2709;
	int32_t t34 = INT32_MAX;

	t34 = (x141^((x142%x143)|x144));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x146 = INT32_MIN;
	static int64_t x148 = INT64_MAX;
	int64_t t35 = -8587787LL;

	t35 = (x145^((x146%x147)|x148));

	if (t35 != -15071LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 495415U;
	static volatile int32_t x151 = -1;
	static volatile uint32_t t36 = 2021U;

	t36 = (x149^((x150%x151)|x152));

	if (t36 != 4294446903U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = INT16_MIN;
	int32_t x156 = INT32_MIN;
	volatile int64_t t37 = 87193109LL;

	t37 = (x153^((x154%x155)|x156));

	if (t37 != 1130862106203261417LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	volatile uint16_t x159 = UINT16_MAX;
	uint64_t x160 = UINT64_MAX;
	static uint64_t t38 = 60206332LLU;

	t38 = (x157^((x158%x159)|x160));

	if (t38 != 2147483647LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = 0;
	uint16_t x162 = 3U;
	static int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	volatile int64_t t39 = 0LL;

	t39 = (x161^((x162%x163)|x164));

	if (t39 != -2147483645LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = 598;
	int64_t x166 = -654373LL;
	static uint64_t x167 = 21533273274488843LLU;
	int8_t x168 = 8;
	volatile uint64_t t40 = 129528707LLU;

	t40 = (x165^((x166%x167)|x168));

	if (t40 != 14262150746447181LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 154845596U;
	uint32_t x170 = 1385742U;
	int64_t x171 = -13527391726938115LL;
	uint8_t x172 = 86U;
	int64_t t41 = 20274294370980181LL;

	t41 = (x169^((x170%x171)|x172));

	if (t41 != 154133698LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x174 = 32369U;
	int32_t x175 = 47263;
	volatile int16_t x176 = INT16_MIN;

	t42 = (x173^((x174%x175)|x176));

	if (t42 != 398) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 702U;
	volatile uint32_t x179 = 1U;

	t43 = (x177^((x178%x179)|x180));

	if (t43 != 4294935230U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x181 = -1LL;
	uint32_t x182 = 1U;
	uint16_t x184 = 5U;
	int64_t t44 = -1834479929529LL;

	t44 = (x181^((x182%x183)|x184));

	if (t44 != -6LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x185 = -1;
	int8_t x186 = INT8_MIN;
	uint64_t x188 = 115189LLU;
	volatile uint64_t t45 = 2896542835473012211LLU;

	t45 = (x185^((x186%x187)|x188));

	if (t45 != 10LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x189 = 16U;
	uint32_t x190 = 1U;

	t46 = (x189^((x190%x191)|x192));

	if (t46 != 4294967279U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 5752U;
	int16_t x198 = INT16_MIN;
	int64_t x199 = 75269302374650217LL;
	uint8_t x200 = 125U;

	t47 = (x197^((x198%x199)|x200));

	if (t47 != -27131LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x201 = 102355995U;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MIN;

	t48 = (x201^((x202%x203)|x204));

	if (t48 != 4192611283U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	static uint64_t x206 = 2432188795721691LLU;
	int8_t x207 = -1;
	int8_t x208 = INT8_MIN;

	t49 = (x205^((x206%x207)|x208));

	if (t49 != 91LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MAX;
	volatile int32_t x210 = INT32_MAX;
	int16_t x211 = INT16_MIN;
	volatile int8_t x212 = -1;
	static volatile int32_t t50 = -8;

	t50 = (x209^((x210%x211)|x212));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x214 = INT32_MAX;
	int32_t x216 = INT32_MIN;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x213^((x214%x215)|x216));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = 1U;
	uint16_t x218 = 5U;
	int64_t x219 = -2749636LL;
	int64_t x220 = INT64_MIN;
	int64_t t52 = 108947782216221LL;

	t52 = (x217^((x218%x219)|x220));

	if (t52 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x222 = -1;
	int16_t x223 = 110;
	int8_t x224 = INT8_MIN;
	static volatile int64_t t53 = -3015620024LL;

	t53 = (x221^((x222%x223)|x224));

	if (t53 != -976922866726257031LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	volatile int32_t x227 = -135615278;
	volatile int32_t x228 = 1657371;
	volatile uint64_t t54 = 863253LLU;

	t54 = (x225^((x226%x227)|x228));

	if (t54 != 18446744073573423935LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = 166;
	static int32_t x230 = INT32_MAX;
	int16_t x232 = INT16_MIN;
	volatile int32_t t55 = 4144;

	t55 = (x229^((x230%x231)|x232));

	if (t55 != -167) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x234 = INT32_MIN;
	static volatile int32_t x235 = -69;
	static int64_t x236 = INT64_MIN;
	static volatile int64_t t56 = -18674898312925876LL;

	t56 = (x233^((x234%x235)|x236));

	if (t56 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 82U;
	static int16_t x238 = INT16_MIN;
	uint64_t x239 = 2296481778693LLU;
	uint8_t x240 = 3U;
	volatile uint64_t t57 = 0LLU;

	t57 = (x237^((x238%x239)|x240));

	if (t57 != 1573362340165LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	static volatile uint32_t x243 = UINT32_MAX;
	int64_t x244 = INT64_MIN;
	int64_t t58 = 19839008099136037LL;

	t58 = (x241^((x242%x243)|x244));

	if (t58 != 9223372036854775162LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = -213977783;
	int64_t x246 = INT64_MIN;
	volatile int64_t x247 = INT64_MIN;
	int64_t x248 = 365515522944676212LL;
	volatile int64_t t59 = -1551819LL;

	t59 = (x245^((x246%x247)|x248));

	if (t59 != -365515522890218435LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	static uint32_t x251 = 3434U;
	volatile uint8_t x252 = 6U;

	t60 = (x249^((x250%x251)|x252));

	if (t60 != 3158LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x254 = -573;
	volatile int16_t x255 = -1;
	volatile int64_t x256 = -1LL;
	volatile int64_t t61 = -4349236761307LL;

	t61 = (x253^((x254%x255)|x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x257 = INT16_MAX;
	static volatile int32_t x258 = -903359;
	volatile int8_t x260 = 16;
	static uint32_t t62 = 48476717U;

	t62 = (x257^((x258%x259)|x260));

	if (t62 != 4294068398U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MAX;
	int8_t x262 = 30;
	int32_t x263 = INT32_MAX;
	uint16_t x264 = 162U;
	volatile int32_t t63 = 7;

	t63 = (x261^((x262%x263)|x264));

	if (t63 != 193) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x267 = INT16_MIN;
	uint8_t x268 = 105U;
	volatile int64_t t64 = -108215672623745591LL;

	t64 = (x265^((x266%x267)|x268));

	if (t64 != 107LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x269 = UINT64_MAX;
	uint64_t x270 = 8LLU;
	int16_t x271 = INT16_MAX;
	volatile int16_t x272 = 88;
	volatile uint64_t t65 = 5137375411638LLU;

	t65 = (x269^((x270%x271)|x272));

	if (t65 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = INT8_MAX;
	int64_t x274 = INT64_MIN;
	volatile uint32_t x276 = 4034U;

	t66 = (x273^((x274%x275)|x276));

	if (t66 != 4029LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = UINT32_MAX;
	static int8_t x278 = -1;
	int64_t x279 = -5LL;
	static volatile int64_t t67 = -67414825165LL;

	t67 = (x277^((x278%x279)|x280));

	if (t67 != -4294967296LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = 47904LLU;
	volatile uint64_t x282 = UINT64_MAX;
	static int16_t x283 = 445;
	int32_t x284 = INT32_MAX;
	volatile uint64_t t68 = 192299105LLU;

	t68 = (x281^((x282%x283)|x284));

	if (t68 != 2147435743LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = UINT16_MAX;
	uint16_t x286 = 51U;
	uint16_t x287 = UINT16_MAX;
	volatile int8_t x288 = INT8_MAX;
	static int32_t t69 = -418;

	t69 = (x285^((x286%x287)|x288));

	if (t69 != 65408) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	int64_t x292 = INT64_MIN;
	int64_t t70 = -54554123688056LL;

	t70 = (x289^((x290%x291)|x292));

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x294 = 3103800995174LLU;
	static int8_t x295 = INT8_MIN;
	uint16_t x296 = 66U;
	uint64_t t71 = 28110461LLU;

	t71 = (x293^((x294%x295)|x296));

	if (t71 != 3103800995132LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x297 = 193361427267576LL;
	volatile int16_t x298 = -3673;
	int32_t x299 = -28446;
	int32_t x300 = INT32_MIN;

	t72 = (x297^((x298%x299)|x300));

	if (t72 != -193361427263905LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x301 = -1;
	uint8_t x302 = 0U;
	int8_t x304 = INT8_MIN;
	volatile int32_t t73 = -83870;

	t73 = (x301^((x302%x303)|x304));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x307 = -14;
	int16_t x308 = INT16_MIN;

	t74 = (x305^((x306%x307)|x308));

	if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = -1;
	volatile int8_t x315 = -1;
	int32_t x316 = 124148;
	volatile int32_t t75 = -6570;

	t75 = (x313^((x314%x315)|x316));

	if (t75 != -124044) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -7143860118LL;
	int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MIN;
	static volatile int64_t t76 = -596606690LL;

	t76 = (x317^((x318%x319)|x320));

	if (t76 != -5741041771LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MAX;
	static volatile int32_t x322 = -223460;
	volatile int16_t x323 = -1;
	uint64_t x324 = 5370619727813LLU;

	t77 = (x321^((x322%x323)|x324));

	if (t77 != 9223366666235047994LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x325 = -14116;
	volatile int16_t x326 = -14;
	static int16_t x327 = 1;
	volatile int32_t x328 = INT32_MIN;
	volatile int32_t t78 = 39325;

	t78 = (x325^((x326%x327)|x328));

	if (t78 != 2147469532) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x329 = 139286078028246LL;
	volatile int64_t x330 = INT64_MIN;
	int32_t x331 = -10330157;
	int64_t x332 = 1067LL;

	t79 = (x329^((x330%x331)|x332));

	if (t79 != -139286076107075LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x333 = INT32_MIN;
	volatile int8_t x334 = 50;
	int64_t x335 = 995LL;
	int8_t x336 = INT8_MAX;
	static int64_t t80 = 570084394534LL;

	t80 = (x333^((x334%x335)|x336));

	if (t80 != -2147483521LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x338 = 2;
	volatile uint16_t x339 = 5102U;
	volatile int64_t x340 = INT64_MIN;
	uint64_t t81 = 3001LLU;

	t81 = (x337^((x338%x339)|x340));

	if (t81 != 9223372036854872289LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = 3590774U;
	static uint8_t x342 = UINT8_MAX;
	volatile uint16_t x344 = 464U;
	uint32_t t82 = 7U;

	t82 = (x341^((x342%x343)|x344));

	if (t82 != 3591079U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = -1;
	int16_t x347 = -1510;
	int32_t x348 = -110758;
	uint64_t t83 = 14829341098LLU;

	t83 = (x345^((x346%x347)|x348));

	if (t83 != 98437LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = -5;
	int8_t x350 = INT8_MIN;
	uint32_t x351 = 481923150U;
	static uint32_t t84 = 111949U;

	t84 = (x349^((x350%x351)|x352));

	if (t84 != 4U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x353 = 0U;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;

	t85 = (x353^((x354%x355)|x356));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = 0;
	int64_t x359 = 385321367824305LL;

	t86 = (x357^((x358%x359)|x360));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MAX;
	static int16_t x362 = -576;
	static volatile int8_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	static uint64_t t87 = 756830590LLU;

	t87 = (x361^((x362%x363)|x364));

	if (t87 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x366 = 55744314U;
	int16_t x368 = INT16_MIN;
	volatile uint32_t t88 = 1803U;

	t88 = (x365^((x366%x367)|x368));

	if (t88 != 4294942097U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	static uint64_t x370 = UINT64_MAX;
	int32_t x372 = -2;
	uint64_t t89 = 556672823LLU;

	t89 = (x369^((x370%x371)|x372));

	if (t89 != 32766LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x373 = 453251360;
	volatile int16_t x374 = -5;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t90 = 131LLU;

	t90 = (x373^((x374%x375)|x376));

	if (t90 != 18446744073256300251LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x380 = INT16_MAX;
	volatile int32_t t91 = -964864563;

	t91 = (x377^((x378%x379)|x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = INT64_MIN;
	uint32_t x382 = 118830U;
	uint8_t x384 = 11U;
	volatile int64_t t92 = 185211967310558LL;

	t92 = (x381^((x382%x383)|x384));

	if (t92 != -9223372036854775697LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x385 = INT16_MAX;
	uint32_t x386 = UINT32_MAX;
	int64_t x387 = 891267345637LL;
	uint64_t x388 = 442898072LLU;
	uint64_t t93 = 65466344524LLU;

	t93 = (x385^((x386%x387)|x388));

	if (t93 != 4294934528LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x389 = 7U;
	static int8_t x390 = INT8_MIN;
	static int64_t x391 = 680606799LL;
	uint64_t t94 = 65119377LLU;

	t94 = (x389^((x390%x391)|x392));

	if (t94 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = 69U;
	int8_t x394 = INT8_MAX;
	static volatile int16_t x395 = INT16_MAX;
	volatile int16_t x396 = 6;
	static volatile int32_t t95 = 15318239;

	t95 = (x393^((x394%x395)|x396));

	if (t95 != 58) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MIN;
	static int8_t x400 = INT8_MIN;
	uint64_t t96 = UINT64_MAX;

	t96 = (x397^((x398%x399)|x400));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = -8;
	static int8_t x403 = -1;
	int64_t t97 = -15921LL;

	t97 = (x401^((x402%x403)|x404));

	if (t97 != 7LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MAX;
	volatile int8_t x407 = INT8_MAX;
	int32_t x408 = INT32_MIN;

	t98 = (x405^((x406%x407)|x408));

	if (t98 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x410 = 2000U;
	volatile int32_t x411 = -414778;

	t99 = (x409^((x410%x411)|x412));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

