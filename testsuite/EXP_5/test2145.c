#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -194172;
static volatile int64_t t2 = 33139225LL;
uint64_t x19 = 151501700176LLU;
volatile int16_t x21 = -1;
int32_t x24 = INT32_MIN;
volatile int32_t t5 = -936;
uint16_t x27 = 18U;
static volatile int16_t x34 = INT16_MAX;
int64_t x46 = INT64_MIN;
int32_t x50 = INT32_MIN;
static uint16_t x54 = UINT16_MAX;
int64_t x55 = -1LL;
int64_t x56 = INT64_MIN;
int64_t x58 = -1LL;
int16_t x60 = INT16_MIN;
volatile int64_t x72 = INT64_MIN;
int8_t x76 = INT8_MIN;
static uint64_t t18 = 78077982406483LLU;
int32_t t22 = -58371235;
uint64_t x96 = 32096649LLU;
uint16_t x113 = UINT16_MAX;
static int64_t x114 = INT64_MIN;
int64_t x120 = -1LL;
static int8_t x122 = INT8_MAX;
static int8_t x123 = INT8_MAX;
int32_t t31 = -1;
volatile uint64_t t33 = 68024624082LLU;
int8_t x137 = INT8_MIN;
volatile int16_t x143 = INT16_MAX;
volatile int32_t t38 = 44790;
int32_t x158 = INT32_MIN;
static uint32_t x160 = UINT32_MAX;
static int32_t x163 = 29549;
int32_t x168 = INT32_MAX;
int32_t t41 = -4984380;
volatile uint64_t x171 = UINT64_MAX;
static int8_t x174 = INT8_MIN;
static uint32_t x178 = 34183U;
static int16_t x185 = -40;
uint64_t x191 = 217112LLU;
uint8_t x197 = UINT8_MAX;
int32_t t49 = -4948;
int16_t x204 = INT16_MAX;
volatile uint8_t x209 = 0U;
volatile uint64_t x211 = UINT64_MAX;
int16_t x217 = INT16_MIN;
int8_t x218 = -22;
static int16_t x221 = INT16_MIN;
int16_t x222 = 4;
volatile uint16_t x223 = 43U;
volatile int64_t x226 = INT64_MAX;
int8_t x234 = -27;
volatile uint32_t t60 = 5461U;
uint16_t x246 = 13897U;
volatile int64_t x248 = 14032LL;
int32_t x254 = -1;
volatile int64_t t63 = 7538LL;
uint64_t x258 = UINT64_MAX;
volatile int32_t t67 = 3;
uint64_t t68 = 2110160369996546831LLU;
int64_t t69 = -356473152LL;
volatile uint64_t x281 = 209386254LLU;
volatile uint64_t t71 = 482940641108964LLU;
static uint64_t x289 = 4638274LLU;
uint32_t x295 = UINT32_MAX;
int8_t x303 = -63;
uint8_t x305 = 2U;
static uint16_t x307 = 39U;
volatile int32_t t76 = 73715931;
int32_t x319 = INT32_MIN;
int32_t x322 = INT32_MAX;
static int64_t x328 = INT64_MIN;
int64_t x329 = INT64_MIN;
volatile int16_t x333 = INT16_MIN;
int64_t x334 = -1LL;
uint8_t x340 = 2U;
static int8_t x344 = INT8_MIN;
int8_t x345 = INT8_MIN;
uint16_t x346 = 89U;
static uint32_t x349 = UINT32_MAX;
volatile int16_t x352 = -825;
int16_t x354 = INT16_MIN;
int8_t x356 = INT8_MIN;
int64_t x358 = INT64_MIN;
uint16_t x359 = 373U;
int8_t x362 = -1;
int64_t x374 = -1LL;
static uint32_t x375 = 69U;
volatile uint32_t x376 = UINT32_MAX;
int32_t x380 = INT32_MIN;
static volatile int32_t t94 = -883;
volatile uint64_t x391 = 23LLU;


void f0(void) {
	uint16_t x1 = 92U;
	uint32_t x2 = UINT32_MAX;
	static volatile uint16_t x3 = 23645U;
	static int32_t x4 = INT32_MIN;
	int32_t t0 = -1;

	t0 = (x1^((x2^x3)<x4));

	if (t0 != 92) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MAX;
	int16_t x7 = 1;
	static volatile int8_t x8 = INT8_MIN;

	t1 = (x5^((x6^x7)<x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = -1LL;
	uint16_t x10 = 645U;
	volatile int16_t x11 = -1;
	int32_t x12 = -1;

	t2 = (x9^((x10^x11)<x12));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = -2769990470079LL;
	static int8_t x14 = -12;
	int64_t x15 = -1088653LL;
	static int64_t x16 = -5149494LL;
	int64_t t3 = 29851LL;

	t3 = (x13^((x14^x15)<x16));

	if (t3 != -2769990470079LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = -1;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 22950595;

	t4 = (x17^((x18^x19)<x20));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = 9;
	int8_t x23 = INT8_MAX;

	t5 = (x21^((x22^x23)<x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 13784U;
	static volatile uint32_t x26 = 6248202U;
	volatile uint32_t x28 = 3U;
	int32_t t6 = 6;

	t6 = (x25^((x26^x27)<x28));

	if (t6 != 13784) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 205725481U;
	volatile uint32_t x30 = 61U;
	int16_t x31 = 55;
	static int64_t x32 = INT64_MIN;
	uint32_t t7 = 366099U;

	t7 = (x29^((x30^x31)<x32));

	if (t7 != 205725481U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int8_t x35 = 1;
	int32_t x36 = INT32_MAX;
	int64_t t8 = -1LL;

	t8 = (x33^((x34^x35)<x36));

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	volatile int32_t x38 = -262341;
	volatile int64_t x39 = INT64_MAX;
	static int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 244;

	t9 = (x37^((x38^x39)<x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 5LLU;
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = INT32_MAX;
	volatile uint16_t x44 = UINT16_MAX;
	uint64_t t10 = 7586926222321938844LLU;

	t10 = (x41^((x42^x43)<x44));

	if (t10 != 5LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int64_t x47 = -367170031LL;
	volatile int8_t x48 = INT8_MIN;
	int32_t t11 = -1;

	t11 = (x45^((x46^x47)<x48));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 797565337680506118LLU;
	int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	uint64_t t12 = 43718391798LLU;

	t12 = (x49^((x50^x51)<x52));

	if (t12 != 797565337680506118LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 1031270191U;
	volatile uint32_t t13 = 59U;

	t13 = (x53^((x54^x55)<x56));

	if (t13 != 1031270191U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -59;
	uint8_t x59 = UINT8_MAX;
	volatile int32_t t14 = 32;

	t14 = (x57^((x58^x59)<x60));

	if (t14 != -59) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 4129U;
	static uint32_t x62 = 13203258U;
	int32_t x63 = INT32_MAX;
	static int8_t x64 = -1;
	int32_t t15 = 13687454;

	t15 = (x61^((x62^x63)<x64));

	if (t15 != 4128) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	static int32_t x66 = -182934157;
	volatile int64_t x67 = INT64_MIN;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x65^((x66^x67)<x68));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = INT32_MIN;
	static int32_t x70 = 11790474;
	static int32_t x71 = INT32_MIN;
	int32_t t17 = INT32_MIN;

	t17 = (x69^((x70^x71)<x72));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	static uint16_t x74 = 634U;
	int16_t x75 = -1;

	t18 = (x73^((x74^x75)<x76));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	uint32_t x78 = 14471U;
	int16_t x79 = INT16_MIN;
	uint16_t x80 = 1U;
	volatile int32_t t19 = -872;

	t19 = (x77^((x78^x79)<x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	volatile int8_t x82 = -19;
	uint16_t x83 = UINT16_MAX;
	volatile int16_t x84 = INT16_MAX;
	int64_t t20 = 10411059609301879LL;

	t20 = (x81^((x82^x83)<x84));

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = UINT16_MAX;
	uint64_t x86 = 934411968909LLU;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = 315U;
	volatile int32_t t21 = -1;

	t21 = (x85^((x86^x87)<x88));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int32_t x90 = INT32_MAX;
	uint64_t x91 = UINT64_MAX;
	static int32_t x92 = 15386176;

	t22 = (x89^((x90^x91)<x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = 46;
	int32_t x94 = -1;
	volatile int16_t x95 = -165;
	static volatile int32_t t23 = -106;

	t23 = (x93^((x94^x95)<x96));

	if (t23 != 47) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 0;
	int8_t x98 = -1;
	static uint32_t x99 = 30381640U;
	int64_t x100 = INT64_MIN;
	static int32_t t24 = 4247;

	t24 = (x97^((x98^x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	uint64_t x102 = UINT64_MAX;
	volatile int64_t x103 = 8588212LL;
	int16_t x104 = 60;
	volatile int64_t t25 = 721270LL;

	t25 = (x101^((x102^x103)<x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	volatile int32_t x106 = INT32_MIN;
	uint32_t x107 = 20522650U;
	volatile int32_t x108 = -1;
	volatile int32_t t26 = 126;

	t26 = (x105^((x106^x107)<x108));

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MIN;
	static int32_t x112 = -3926;
	volatile int32_t t27 = 19;

	t27 = (x109^((x110^x111)<x112));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x115 = UINT32_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t28 = 41;

	t28 = (x113^((x114^x115)<x116));

	if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	static int64_t x118 = INT64_MIN;
	int8_t x119 = -1;
	volatile int32_t t29 = -448877;

	t29 = (x117^((x118^x119)<x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 8361LLU;
	int8_t x124 = -1;
	static volatile uint64_t t30 = 2LLU;

	t30 = (x121^((x122^x123)<x124));

	if (t30 != 8361LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 28U;
	uint8_t x126 = 10U;
	int64_t x127 = -1LL;
	uint16_t x128 = 735U;

	t31 = (x125^((x126^x127)<x128));

	if (t31 != 29) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -21754378;
	int16_t x130 = INT16_MIN;
	static uint64_t x131 = 3403984LLU;
	static int8_t x132 = -1;
	volatile int32_t t32 = 31370;

	t32 = (x129^((x130^x131)<x132));

	if (t32 != -21754377) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 105168723235504LLU;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = 14U;
	int8_t x136 = INT8_MAX;

	t33 = (x133^((x134^x135)<x136));

	if (t33 != 105168723235505LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = 1045;
	volatile int32_t x139 = -244191;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 224665689;

	t34 = (x137^((x138^x139)<x140));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 2714295LLU;
	int8_t x142 = INT8_MAX;
	volatile uint8_t x144 = 1U;
	volatile uint64_t t35 = 508833325LLU;

	t35 = (x141^((x142^x143)<x144));

	if (t35 != 2714295LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -9;
	int64_t x146 = 473975447905415LL;
	int8_t x147 = -2;
	uint8_t x148 = UINT8_MAX;
	int32_t t36 = 2;

	t36 = (x145^((x146^x147)<x148));

	if (t36 != -10) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MAX;
	volatile int32_t t37 = 432452;

	t37 = (x149^((x150^x151)<x152));

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	uint64_t x154 = 407052447214LLU;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MIN;

	t38 = (x153^((x154^x155)<x156));

	if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	volatile int32_t x159 = INT32_MIN;
	int32_t t39 = 4291;

	t39 = (x157^((x158^x159)<x160));

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile int32_t x162 = INT32_MIN;
	static uint16_t x164 = 3U;
	static volatile int32_t t40 = 13900300;

	t40 = (x161^((x162^x163)<x164));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 1218;
	volatile uint64_t x166 = 543220811258LLU;
	uint64_t x167 = 3LLU;

	t41 = (x165^((x166^x167)<x168));

	if (t41 != 1218) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 355U;
	static volatile int16_t x170 = -1;
	uint16_t x172 = UINT16_MAX;
	volatile uint32_t t42 = 3816179U;

	t42 = (x169^((x170^x171)<x172));

	if (t42 != 354U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	uint64_t x175 = UINT64_MAX;
	volatile int8_t x176 = -2;
	int32_t t43 = -131587325;

	t43 = (x173^((x174^x175)<x176));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x179 = 1U;
	int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 459050439;

	t44 = (x177^((x178^x179)<x180));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = UINT32_MAX;
	uint8_t x182 = 2U;
	uint32_t x183 = 21056645U;
	int64_t x184 = -8577LL;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (x181^((x182^x183)<x184));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MAX;
	static int32_t x187 = INT32_MIN;
	int8_t x188 = 39;
	int32_t t46 = 59;

	t46 = (x185^((x186^x187)<x188));

	if (t46 != -39) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	uint32_t x190 = UINT32_MAX;
	static int8_t x192 = INT8_MIN;
	int64_t t47 = 434199429253LL;

	t47 = (x189^((x190^x191)<x192));

	if (t47 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 0U;
	volatile int32_t x194 = -4060;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 9U;
	uint32_t t48 = 67638U;

	t48 = (x193^((x194^x195)<x196));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = 189773LL;
	static volatile int16_t x199 = INT16_MAX;
	static int64_t x200 = INT64_MIN;

	t49 = (x197^((x198^x199)<x200));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	uint8_t x202 = 6U;
	int64_t x203 = -241778591479493044LL;
	int32_t t50 = 0;

	t50 = (x201^((x202^x203)<x204));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 4U;
	uint8_t x206 = UINT8_MAX;
	static int64_t x207 = 3090366959528257666LL;
	int32_t x208 = INT32_MIN;
	uint32_t t51 = 147674U;

	t51 = (x205^((x206^x207)<x208));

	if (t51 != 4U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MAX;
	int64_t x212 = -1LL;
	int32_t t52 = 126;

	t52 = (x209^((x210^x211)<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MIN;
	uint32_t x214 = 31450716U;
	volatile uint16_t x215 = 905U;
	int64_t x216 = -255427731518122LL;
	int32_t t53 = INT32_MIN;

	t53 = (x213^((x214^x215)<x216));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x219 = 211;
	uint32_t x220 = 6261494U;
	volatile int32_t t54 = -1;

	t54 = (x217^((x218^x219)<x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x224 = 7725U;
	static volatile int32_t t55 = 1;

	t55 = (x221^((x222^x223)<x224));

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int32_t x227 = -1;
	int32_t x228 = INT32_MIN;
	volatile int64_t t56 = 90668LL;

	t56 = (x225^((x226^x227)<x228));

	if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = 10;
	int8_t x230 = -1;
	uint8_t x231 = UINT8_MAX;
	int8_t x232 = -1;
	int32_t t57 = 13468;

	t57 = (x229^((x230^x231)<x232));

	if (t57 != 11) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 32109U;
	volatile int32_t x235 = INT32_MAX;
	uint8_t x236 = 45U;
	volatile int32_t t58 = 3087924;

	t58 = (x233^((x234^x235)<x236));

	if (t58 != 32108) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 1699;
	static int8_t x238 = -3;
	int8_t x239 = -1;
	volatile int8_t x240 = -6;
	static volatile int32_t t59 = -239096026;

	t59 = (x237^((x238^x239)<x240));

	if (t59 != 1699) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 1874970942U;
	int8_t x242 = INT8_MAX;
	int8_t x243 = -1;
	int32_t x244 = INT32_MIN;

	t60 = (x241^((x242^x243)<x244));

	if (t60 != 1874970942U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	uint32_t x247 = 735605U;
	volatile int32_t t61 = -536844;

	t61 = (x245^((x246^x247)<x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 7U;
	volatile uint8_t x250 = 0U;
	uint32_t x251 = UINT32_MAX;
	static volatile int32_t x252 = -1;
	int32_t t62 = 2971018;

	t62 = (x249^((x250^x251)<x252));

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MIN;

	t63 = (x253^((x254^x255)<x256));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int8_t x259 = INT8_MIN;
	uint16_t x260 = 1636U;
	volatile uint64_t t64 = 121323778LLU;

	t64 = (x257^((x258^x259)<x260));

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 133740621666633LL;
	int32_t x262 = -5450836;
	int32_t x263 = INT32_MIN;
	volatile int8_t x264 = INT8_MIN;
	volatile int64_t t65 = -3822145826236741LL;

	t65 = (x261^((x262^x263)<x264));

	if (t65 != 133740621666633LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 13861736702578LLU;
	uint32_t x266 = UINT32_MAX;
	volatile int64_t x267 = INT64_MIN;
	int8_t x268 = 1;
	volatile uint64_t t66 = 2604393692345269246LLU;

	t66 = (x265^((x266^x267)<x268));

	if (t66 != 13861736702579LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = -1;
	static int32_t x270 = INT32_MAX;
	static uint16_t x271 = 3U;
	volatile uint32_t x272 = 1U;

	t67 = (x269^((x270^x271)<x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 1043594650LLU;
	int16_t x274 = INT16_MIN;
	uint32_t x275 = 67649U;
	static uint8_t x276 = 55U;

	t68 = (x273^((x274^x275)<x276));

	if (t68 != 1043594650LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	volatile uint8_t x278 = 2U;
	static int8_t x279 = 19;
	int64_t x280 = INT64_MIN;

	t69 = (x277^((x278^x279)<x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = -47;
	static int64_t x283 = INT64_MIN;
	int8_t x284 = 20;
	volatile uint64_t t70 = 44684834658957832LLU;

	t70 = (x281^((x282^x283)<x284));

	if (t70 != 209386254LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x285 = 258734191091LLU;
	uint32_t x286 = 2823612U;
	int64_t x287 = INT64_MAX;
	static int32_t x288 = INT32_MAX;

	t71 = (x285^((x286^x287)<x288));

	if (t71 != 258734191091LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x290 = UINT64_MAX;
	int8_t x291 = INT8_MIN;
	int64_t x292 = 89LL;
	uint64_t t72 = 49898LLU;

	t72 = (x289^((x290^x291)<x292));

	if (t72 != 4638274LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -9988655LL;
	uint8_t x294 = 0U;
	int8_t x296 = INT8_MIN;
	int64_t t73 = -2153674360533LL;

	t73 = (x293^((x294^x295)<x296));

	if (t73 != -9988655LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 29U;
	static volatile int16_t x298 = INT16_MIN;
	static int8_t x299 = INT8_MIN;
	static uint64_t x300 = 96549720965925367LLU;
	volatile uint32_t t74 = 5734287U;

	t74 = (x297^((x298^x299)<x300));

	if (t74 != 28U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 0;
	volatile int32_t x302 = 6127854;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = -561226;

	t75 = (x301^((x302^x303)<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x306 = 18503152U;
	int16_t x308 = -15191;

	t76 = (x305^((x306^x307)<x308));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x309 = 1U;
	int32_t x310 = INT32_MIN;
	int32_t x311 = 3953398;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -1;

	t77 = (x309^((x310^x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 395;
	int8_t x314 = INT8_MIN;
	volatile uint32_t x315 = 242U;
	uint32_t x316 = UINT32_MAX;
	int32_t t78 = 816044;

	t78 = (x313^((x314^x315)<x316));

	if (t78 != 394) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -1;
	static uint8_t x318 = UINT8_MAX;
	static uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = -247879395;

	t79 = (x317^((x318^x319)<x320));

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 373U;
	volatile int8_t x323 = 2;
	int64_t x324 = -7647786LL;
	uint32_t t80 = 83030793U;

	t80 = (x321^((x322^x323)<x324));

	if (t80 != 373U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 14729580832LL;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = 2171549280960944987LLU;
	int64_t t81 = -31892756839LL;

	t81 = (x325^((x326^x327)<x328));

	if (t81 != 14729580832LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x330 = 16245U;
	int8_t x331 = INT8_MIN;
	static volatile int8_t x332 = 0;
	int64_t t82 = 2082151572600LL;

	t82 = (x329^((x330^x331)<x332));

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = -2;
	int16_t x336 = INT16_MAX;
	int32_t t83 = 3;

	t83 = (x333^((x334^x335)<x336));

	if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int64_t x338 = INT64_MAX;
	uint64_t x339 = UINT64_MAX;
	static volatile int64_t t84 = INT64_MIN;

	t84 = (x337^((x338^x339)<x340));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	int8_t x342 = 3;
	static uint64_t x343 = UINT64_MAX;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x341^((x342^x343)<x344));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x347 = INT8_MIN;
	uint8_t x348 = 112U;
	int32_t t86 = -11977;

	t86 = (x345^((x346^x347)<x348));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -1;
	int8_t x351 = 0;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (x349^((x350^x351)<x352));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 13497U;
	uint64_t x355 = 591020695704LLU;
	int32_t t88 = 4;

	t88 = (x353^((x354^x355)<x356));

	if (t88 != 13496) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x357 = 7U;
	uint8_t x360 = 122U;
	static uint32_t t89 = 51U;

	t89 = (x357^((x358^x359)<x360));

	if (t89 != 6U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 3U;
	int8_t x363 = -35;
	int32_t x364 = -1;
	static volatile int32_t t90 = -8597143;

	t90 = (x361^((x362^x363)<x364));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = 1809795482LLU;
	int8_t x366 = -1;
	int32_t x367 = 859617862;
	int8_t x368 = INT8_MAX;
	volatile uint64_t t91 = 1LLU;

	t91 = (x365^((x366^x367)<x368));

	if (t91 != 1809795483LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = 1U;
	int32_t x370 = INT32_MIN;
	uint8_t x371 = 5U;
	volatile int64_t x372 = INT64_MIN;
	static volatile int32_t t92 = -1;

	t92 = (x369^((x370^x371)<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -1LL;
	volatile int64_t t93 = -114186874874457794LL;

	t93 = (x373^((x374^x375)<x376));

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 1996U;
	volatile int64_t x378 = INT64_MAX;
	int64_t x379 = INT64_MIN;

	t94 = (x377^((x378^x379)<x380));

	if (t94 != 1996) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	static volatile int8_t x382 = 8;
	static uint16_t x383 = 123U;
	uint16_t x384 = 12U;
	volatile int32_t t95 = 82478189;

	t95 = (x381^((x382^x383)<x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = -1;
	volatile uint32_t x386 = 11858174U;
	int32_t x387 = -934275;
	int8_t x388 = -1;
	volatile int32_t t96 = -329575;

	t96 = (x385^((x386^x387)<x388));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	int8_t x390 = INT8_MIN;
	int32_t x392 = 446210792;
	static volatile uint32_t t97 = UINT32_MAX;

	t97 = (x389^((x390^x391)<x392));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	volatile uint64_t x394 = 437LLU;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = UINT32_MAX;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x393^((x394^x395)<x396));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	int64_t x400 = -1LL;
	static int64_t t99 = -47744785239LL;

	t99 = (x397^((x398^x399)<x400));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

