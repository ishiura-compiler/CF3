#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = 495489875398LL;
static int64_t x6 = INT64_MIN;
volatile uint64_t t1 = 1224676868LLU;
int8_t x10 = INT8_MAX;
static int64_t x14 = INT64_MAX;
int64_t t3 = 35985LL;
uint16_t x19 = UINT16_MAX;
int16_t x25 = INT16_MIN;
volatile uint16_t x26 = UINT16_MAX;
int32_t t7 = 76;
volatile int16_t x41 = INT16_MAX;
volatile int64_t x42 = -18939450082LL;
int64_t x44 = INT64_MAX;
int32_t x48 = INT32_MIN;
int8_t x53 = 33;
int64_t x58 = INT64_MIN;
uint64_t x71 = 654262155872LLU;
uint8_t x73 = UINT8_MAX;
static uint64_t x77 = 292123131LLU;
static int64_t x87 = -1LL;
uint32_t x96 = 508155827U;
int8_t x97 = -25;
static int64_t x102 = 1049698591299LL;
volatile int32_t x104 = INT32_MAX;
volatile int32_t t24 = 93931;
int8_t x107 = -1;
static volatile int32_t t25 = -303471311;
volatile int64_t x110 = INT64_MIN;
int8_t x111 = -1;
int64_t t27 = -186514LL;
static int8_t x117 = 53;
int32_t x123 = 1018277;
static uint8_t x127 = 11U;
int8_t x130 = -1;
static int8_t x131 = INT8_MIN;
int8_t x138 = 1;
int16_t x143 = -1;
volatile int8_t x148 = INT8_MIN;
uint32_t x155 = 12333881U;
int16_t x162 = INT16_MIN;
static volatile int32_t t40 = 1563;
volatile int16_t x173 = -12;
uint32_t x179 = UINT32_MAX;
int16_t x190 = INT16_MIN;
int64_t x199 = -6044235414124LL;
uint64_t x201 = 0LLU;
static int8_t x203 = 1;
volatile int16_t x205 = INT16_MIN;
volatile uint64_t t49 = 8349310466915393418LLU;
int16_t x209 = 650;
uint16_t x211 = 1459U;
int32_t x240 = INT32_MAX;
uint8_t x245 = 15U;
volatile int8_t x246 = INT8_MIN;
volatile int32_t t59 = -967;
volatile int64_t x262 = -1LL;
uint32_t t62 = UINT32_MAX;
volatile int32_t t64 = 457778;
static uint32_t x279 = UINT32_MAX;
int16_t x287 = 0;
int64_t x289 = INT64_MIN;
int64_t x292 = -72424128921LL;
int8_t x294 = INT8_MIN;
volatile uint16_t x304 = UINT16_MAX;
uint64_t t74 = 1106425423619LLU;
int64_t x317 = 839294704550882LL;
int32_t x318 = -7;
uint64_t x321 = UINT64_MAX;
static volatile uint64_t t76 = 107700296102847LLU;
int8_t x335 = INT8_MAX;
int16_t x336 = 11133;
int8_t x347 = 2;
int32_t x357 = -108;
int32_t x359 = -3;
int32_t x369 = INT32_MIN;
volatile uint32_t x371 = 16679588U;
int32_t x377 = -6;
static int32_t x383 = INT32_MIN;
int32_t t91 = 831;
static uint8_t x385 = 31U;
int16_t x400 = INT16_MAX;
int64_t x406 = INT64_MAX;
static uint64_t x412 = 39256518911122065LLU;
int64_t t99 = 51760788288258LL;


void f0(void) {
	static volatile int32_t x1 = INT32_MIN;
	uint16_t x2 = 30922U;
	uint32_t x3 = 348457U;
	int64_t t0 = -22854552882375LL;

	t0 = ((x1<=x2)-(x3%x4));

	if (t0 != -348456LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 67806891;
	int8_t x7 = -1;
	uint64_t x8 = 10383863566LLU;

	t1 = ((x5<=x6)-(x7%x8));

	if (t1 != 18446744067569602671LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int64_t x11 = INT64_MAX;
	static int16_t x12 = INT16_MAX;
	int64_t t2 = 94410LL;

	t2 = ((x9<=x10)-(x11%x12));

	if (t2 != -6LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int64_t x15 = 365521193838854LL;
	uint8_t x16 = 13U;

	t3 = ((x13<=x14)-(x15%x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -72414;
	int8_t x18 = INT8_MIN;
	int8_t x20 = 8;
	int32_t t4 = 386929110;

	t4 = ((x17<=x18)-(x19%x20));

	if (t4 != -6) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x27 = INT32_MIN;
	uint64_t x28 = UINT64_MAX;
	static uint64_t t5 = 4269300246LLU;

	t5 = ((x25<=x26)-(x27%x28));

	if (t5 != 2147483649LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = INT32_MIN;
	uint64_t x30 = UINT64_MAX;
	static uint16_t x31 = 6U;
	int8_t x32 = INT8_MAX;
	int32_t t6 = 331814;

	t6 = ((x29<=x30)-(x31%x32));

	if (t6 != -5) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -50970890;
	volatile int16_t x34 = INT16_MIN;
	static uint16_t x35 = UINT16_MAX;
	volatile int32_t x36 = INT32_MIN;

	t7 = ((x33<=x34)-(x35%x36));

	if (t7 != -65534) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static int32_t x38 = -1;
	int8_t x39 = INT8_MAX;
	static int32_t x40 = INT32_MIN;
	int32_t t8 = 67854;

	t8 = ((x37<=x38)-(x39%x40));

	if (t8 != -126) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x43 = 1U;
	static volatile int64_t t9 = -7830526667546LL;

	t9 = ((x41<=x42)-(x43%x44));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MAX;
	volatile uint8_t x46 = 0U;
	int32_t x47 = INT32_MIN;
	static volatile int32_t t10 = -88004705;

	t10 = ((x45<=x46)-(x47%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 346010U;
	uint8_t x50 = 18U;
	int32_t x51 = INT32_MIN;
	volatile int64_t x52 = INT64_MIN;
	int64_t t11 = 82LL;

	t11 = ((x49<=x50)-(x51%x52));

	if (t11 != 2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = INT8_MAX;
	static uint16_t x55 = UINT16_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t12 = -5882;

	t12 = ((x53<=x54)-(x55%x56));

	if (t12 != -32766) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MIN;
	int16_t x59 = INT16_MAX;
	int8_t x60 = -1;
	volatile int32_t t13 = 3;

	t13 = ((x57<=x58)-(x59%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = 2U;
	uint8_t x62 = 12U;
	int64_t x63 = -1LL;
	int16_t x64 = -1;
	int64_t t14 = 1232431547LL;

	t14 = ((x61<=x62)-(x63%x64));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = 760U;
	volatile int32_t x66 = -1;
	uint32_t x67 = 42053130U;
	int8_t x68 = INT8_MIN;
	volatile uint32_t t15 = 481799836U;

	t15 = ((x65<=x66)-(x67%x68));

	if (t15 != 4252914166U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x69 = -1;
	int64_t x70 = -1LL;
	static int8_t x72 = -1;
	volatile uint64_t t16 = 554280078368LLU;

	t16 = ((x69<=x70)-(x71%x72));

	if (t16 != 18446743419447395745LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = 31U;
	int32_t x75 = -306;
	uint8_t x76 = 12U;
	volatile int32_t t17 = -3572;

	t17 = ((x73<=x74)-(x75%x76));

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x78 = INT8_MIN;
	volatile int64_t x79 = -1LL;
	volatile int64_t x80 = 157437312630LL;
	int64_t t18 = -2718374705LL;

	t18 = ((x77<=x78)-(x79%x80));

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = -1;
	uint16_t x82 = 1833U;
	volatile int32_t x83 = INT32_MIN;
	volatile int32_t x84 = INT32_MAX;
	int32_t t19 = 0;

	t19 = ((x81<=x82)-(x83%x84));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = -1235;
	volatile uint8_t x86 = 45U;
	int64_t x88 = -3827184LL;
	int64_t t20 = -81961LL;

	t20 = ((x85<=x86)-(x87%x88));

	if (t20 != 2LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 5099U;
	int8_t x90 = INT8_MIN;
	int32_t x91 = -1;
	uint32_t x92 = 693655238U;
	uint32_t t21 = 23U;

	t21 = ((x89<=x90)-(x91%x92));

	if (t21 != 4161931429U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = INT64_MIN;
	volatile int32_t x94 = INT32_MAX;
	static uint8_t x95 = 19U;
	uint32_t t22 = 549433U;

	t22 = ((x93<=x94)-(x95%x96));

	if (t22 != 4294967278U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x98 = INT32_MAX;
	int32_t x99 = -1;
	int64_t x100 = -151143725LL;
	static volatile int64_t t23 = 121356239121LL;

	t23 = ((x97<=x98)-(x99%x100));

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = INT16_MIN;
	volatile int8_t x103 = INT8_MIN;

	t24 = ((x101<=x102)-(x103%x104));

	if (t24 != 129) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = -363LL;
	int32_t x106 = INT32_MIN;
	int8_t x108 = INT8_MIN;

	t25 = ((x105<=x106)-(x107%x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = INT8_MIN;
	static uint32_t x112 = UINT32_MAX;
	uint32_t t26 = 1748386U;

	t26 = ((x109<=x110)-(x111%x112));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 0U;
	int32_t x114 = INT32_MIN;
	static int16_t x115 = INT16_MAX;
	static int64_t x116 = INT64_MIN;

	t27 = ((x113<=x114)-(x115%x116));

	if (t27 != -32767LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x118 = UINT16_MAX;
	int64_t x119 = 12563628875103480LL;
	uint8_t x120 = 3U;
	static volatile int64_t t28 = -10LL;

	t28 = ((x117<=x118)-(x119%x120));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MIN;
	int16_t x124 = -2;
	static int32_t t29 = 9;

	t29 = ((x121<=x122)-(x123%x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x125 = 0U;
	int16_t x126 = 1;
	static int8_t x128 = INT8_MIN;
	int32_t t30 = 6580;

	t30 = ((x125<=x126)-(x127%x128));

	if (t30 != -10) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = INT8_MIN;
	volatile uint64_t x132 = 501857LLU;
	uint64_t t31 = 22LLU;

	t31 = ((x129<=x130)-(x131%x132));

	if (t31 != 18446744073709407040LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = -25;
	volatile int16_t x134 = -10;
	int16_t x135 = INT16_MAX;
	static uint16_t x136 = UINT16_MAX;
	volatile int32_t t32 = 85;

	t32 = ((x133<=x134)-(x135%x136));

	if (t32 != -32766) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 344U;
	int8_t x139 = -1;
	static uint8_t x140 = 1U;
	static volatile int32_t t33 = 0;

	t33 = ((x137<=x138)-(x139%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 66U;
	int8_t x142 = INT8_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t34 = 130743;

	t34 = ((x141<=x142)-(x143%x144));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = -1LL;
	int8_t x146 = 1;
	int64_t x147 = INT64_MIN;
	volatile int64_t t35 = 106LL;

	t35 = ((x145<=x146)-(x147%x148));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -3429417;
	static int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	volatile int32_t x152 = -137797;
	volatile int32_t t36 = -71739701;

	t36 = ((x149<=x150)-(x151%x152));

	if (t36 != 32769) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = 4U;
	static int32_t x154 = INT32_MAX;
	int8_t x156 = -9;
	uint32_t t37 = 106013U;

	t37 = ((x153<=x154)-(x155%x156));

	if (t37 != 4282633416U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = UINT16_MAX;
	uint16_t x158 = UINT16_MAX;
	uint32_t x159 = UINT32_MAX;
	uint32_t x160 = UINT32_MAX;
	static uint32_t t38 = 1658890942U;

	t38 = ((x157<=x158)-(x159%x160));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x161 = UINT64_MAX;
	int8_t x163 = 1;
	int32_t x164 = INT32_MAX;
	static int32_t t39 = 13653791;

	t39 = ((x161<=x162)-(x163%x164));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -1695121LL;
	static int32_t x166 = INT32_MAX;
	int8_t x167 = -1;
	int8_t x168 = -2;

	t40 = ((x165<=x166)-(x167%x168));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x174 = 0U;
	int8_t x175 = -1;
	volatile uint32_t x176 = 682U;
	uint32_t t41 = 93963376U;

	t41 = ((x173<=x174)-(x175%x176));

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = -1;
	static int32_t x178 = -1;
	volatile int32_t x180 = INT32_MAX;
	uint32_t t42 = 2U;

	t42 = ((x177<=x178)-(x179%x180));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 8697U;
	static uint8_t x182 = 3U;
	static int16_t x183 = INT16_MAX;
	int8_t x184 = INT8_MIN;
	int32_t t43 = -12457172;

	t43 = ((x181<=x182)-(x183%x184));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -1;
	static int64_t x186 = 547550880331LL;
	volatile int32_t x187 = -1;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int32_t t44 = 7513923;

	t44 = ((x185<=x186)-(x187%x188));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	int8_t x191 = -33;
	int16_t x192 = INT16_MAX;
	int32_t t45 = -120418;

	t45 = ((x189<=x190)-(x191%x192));

	if (t45 != 33) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = UINT8_MAX;
	int32_t x194 = INT32_MAX;
	int64_t x195 = 1LL;
	int8_t x196 = INT8_MAX;
	volatile int64_t t46 = 577169284LL;

	t46 = ((x193<=x194)-(x195%x196));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 86U;
	uint64_t x198 = 176684375640169LLU;
	uint32_t x200 = UINT32_MAX;
	int64_t t47 = 1013993005LL;

	t47 = ((x197<=x198)-(x199%x200));

	if (t47 != 1216430060LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x202 = 128U;
	volatile uint32_t x204 = 100565U;
	static volatile uint32_t t48 = 0U;

	t48 = ((x201<=x202)-(x203%x204));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x206 = 0LL;
	int32_t x207 = INT32_MIN;
	static volatile uint64_t x208 = UINT64_MAX;

	t49 = ((x205<=x206)-(x207%x208));

	if (t49 != 2147483649LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x210 = INT32_MIN;
	int32_t x212 = -1;
	int32_t t50 = -560;

	t50 = ((x209<=x210)-(x211%x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = 1470149077LL;
	int16_t x214 = 20;
	static uint64_t x215 = 74898852530973737LLU;
	int64_t x216 = INT64_MIN;
	volatile uint64_t t51 = 177LLU;

	t51 = ((x213<=x214)-(x215%x216));

	if (t51 != 18371845221178577879LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = 1LL;
	int16_t x218 = -1956;
	int16_t x219 = 39;
	static volatile uint32_t x220 = UINT32_MAX;
	uint32_t t52 = 39004221U;

	t52 = ((x217<=x218)-(x219%x220));

	if (t52 != 4294967257U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = 6U;
	static volatile int8_t x222 = -8;
	int16_t x223 = -5120;
	volatile int16_t x224 = -4049;
	int32_t t53 = 265;

	t53 = ((x221<=x222)-(x223%x224));

	if (t53 != 1071) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x225 = INT64_MAX;
	volatile uint64_t x226 = 180LLU;
	int8_t x227 = -1;
	volatile uint32_t x228 = 173508811U;
	volatile uint32_t t54 = 1U;

	t54 = ((x225<=x226)-(x227%x228));

	if (t54 != 4164211465U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -1;
	int8_t x230 = -1;
	static int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	volatile int64_t t55 = -1LL;

	t55 = ((x229<=x230)-(x231%x232));

	if (t55 != 32769LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x233 = 1082751466847622099LL;
	int32_t x234 = 30018;
	uint8_t x235 = 65U;
	uint32_t x236 = UINT32_MAX;
	uint32_t t56 = 78719U;

	t56 = ((x233<=x234)-(x235%x236));

	if (t56 != 4294967231U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -3;
	static int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	static volatile int32_t t57 = -89138;

	t57 = ((x237<=x238)-(x239%x240));

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x247 = 29U;
	int8_t x248 = INT8_MIN;
	volatile int32_t t58 = 871409182;

	t58 = ((x245<=x246)-(x247%x248));

	if (t58 != -29) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = 1LL;
	static volatile int8_t x250 = INT8_MIN;
	static int16_t x251 = -1;
	uint16_t x252 = 2258U;

	t59 = ((x249<=x250)-(x251%x252));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = UINT32_MAX;
	uint8_t x254 = 1U;
	int8_t x255 = -25;
	uint16_t x256 = UINT16_MAX;
	int32_t t60 = 366765332;

	t60 = ((x253<=x254)-(x255%x256));

	if (t60 != 25) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x257 = -1;
	static int8_t x258 = INT8_MIN;
	static int64_t x259 = -1LL;
	int8_t x260 = -1;
	volatile int64_t t61 = -7115151484961LL;

	t61 = ((x257<=x258)-(x259%x260));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = 654;
	uint16_t x263 = UINT16_MAX;
	volatile uint32_t x264 = 2U;

	t62 = ((x261<=x262)-(x263%x264));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -1;
	volatile uint64_t x266 = 129495023LLU;
	static int16_t x267 = INT16_MIN;
	int32_t x268 = -1;
	volatile int32_t t63 = 10589010;

	t63 = ((x265<=x266)-(x267%x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MAX;
	uint8_t x270 = 21U;
	static int8_t x271 = INT8_MIN;
	uint16_t x272 = UINT16_MAX;

	t64 = ((x269<=x270)-(x271%x272));

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = -1;
	int16_t x274 = 13310;
	int8_t x275 = INT8_MIN;
	int32_t x276 = -1;
	static int32_t t65 = 129760658;

	t65 = ((x273<=x274)-(x275%x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = -1LL;
	uint16_t x278 = 212U;
	int32_t x280 = 188290;
	volatile uint32_t t66 = 953578U;

	t66 = ((x277<=x278)-(x279%x280));

	if (t66 != 4294894902U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = -1;
	int8_t x284 = -27;
	volatile int32_t t67 = 21498;

	t67 = ((x281<=x282)-(x283%x284));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = -22901833;
	uint32_t x286 = 0U;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t68 = 1467524;

	t68 = ((x285<=x286)-(x287%x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x290 = -1;
	uint16_t x291 = 3U;
	int64_t t69 = 1326LL;

	t69 = ((x289<=x290)-(x291%x292));

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x293 = 2U;
	uint64_t x295 = 165LLU;
	int8_t x296 = -18;
	volatile uint64_t t70 = 6151909248161105206LLU;

	t70 = ((x293<=x294)-(x295%x296));

	if (t70 != 18446744073709551451LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	volatile int8_t x298 = 0;
	volatile uint64_t x299 = 19299020237772676LLU;
	volatile int8_t x300 = INT8_MIN;
	volatile uint64_t t71 = 1304516282LLU;

	t71 = ((x297<=x298)-(x299%x300));

	if (t71 != 18427445053471778941LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x301 = 0U;
	volatile int64_t x302 = -1LL;
	volatile int64_t x303 = -467LL;
	static int64_t t72 = 1115LL;

	t72 = ((x301<=x302)-(x303%x304));

	if (t72 != 467LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x305 = INT16_MIN;
	int64_t x306 = -1947022923817LL;
	int64_t x307 = 1056090782092959020LL;
	int64_t x308 = 115LL;
	int64_t t73 = -27010819559736LL;

	t73 = ((x305<=x306)-(x307%x308));

	if (t73 != -45LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MAX;
	int32_t x315 = INT32_MAX;
	uint64_t x316 = UINT64_MAX;

	t74 = ((x313<=x314)-(x315%x316));

	if (t74 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x319 = INT16_MIN;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t75 = 469834050;

	t75 = ((x317<=x318)-(x319%x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x322 = 28311U;
	uint64_t x323 = 13048LLU;
	static int64_t x324 = 183080855920LL;

	t76 = ((x321<=x322)-(x323%x324));

	if (t76 != 18446744073709538568LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MAX;
	uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 234226985239LLU;
	int8_t x328 = 12;
	volatile uint64_t t77 = 1LLU;

	t77 = ((x325<=x326)-(x327%x328));

	if (t77 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = -672670;
	int8_t x330 = INT8_MIN;
	int32_t x331 = -1;
	int16_t x332 = INT16_MAX;
	int32_t t78 = -334;

	t78 = ((x329<=x330)-(x331%x332));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x333 = INT64_MIN;
	int16_t x334 = 54;
	int32_t t79 = 1961311;

	t79 = ((x333<=x334)-(x335%x336));

	if (t79 != -126) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x337 = 1523U;
	int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MIN;
	static uint32_t x340 = UINT32_MAX;
	uint32_t t80 = 33117U;

	t80 = ((x337<=x338)-(x339%x340));

	if (t80 != 32769U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = -1;
	uint32_t x343 = 333958418U;
	volatile int8_t x344 = INT8_MIN;
	uint32_t t81 = 7U;

	t81 = ((x341<=x342)-(x343%x344));

	if (t81 != 3961008879U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = 174;
	uint8_t x348 = 6U;
	int32_t t82 = -665821827;

	t82 = ((x345<=x346)-(x347%x348));

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 10739U;
	int8_t x350 = -3;
	int8_t x351 = INT8_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t83 = 125;

	t83 = ((x349<=x350)-(x351%x352));

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = 646068;
	uint16_t x354 = UINT16_MAX;
	uint8_t x355 = 28U;
	static int64_t x356 = -1LL;
	int64_t t84 = 245485135766LL;

	t84 = ((x353<=x354)-(x355%x356));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x358 = INT32_MAX;
	uint64_t x360 = 132837634986476627LLU;
	volatile uint64_t t85 = 765LLU;

	t85 = ((x357<=x358)-(x359%x360));

	if (t85 != 18331593628133774530LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = -75;
	int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 130355LLU;
	volatile uint64_t t86 = 369730LLU;

	t86 = ((x361<=x362)-(x363%x364));

	if (t86 != 18446744073709508728LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = 11U;
	int16_t x366 = INT16_MAX;
	uint64_t x367 = 883521953899650LLU;
	int8_t x368 = INT8_MIN;
	uint64_t t87 = 937500161927278LLU;

	t87 = ((x365<=x366)-(x367%x368));

	if (t87 != 18445860551755651967LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x370 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	static uint32_t t88 = 4U;

	t88 = ((x369<=x370)-(x371%x372));

	if (t88 != 4278287709U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = -1LL;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = 91776LLU;
	static uint64_t t89 = 785066070LLU;

	t89 = ((x373<=x374)-(x375%x376));

	if (t89 != 18446744073709508097LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x378 = 1320LLU;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = -46927893748268121LL;
	volatile int64_t t90 = -350007LL;

	t90 = ((x377<=x378)-(x379%x380));

	if (t90 != -4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = 23691123742024841LLU;
	int32_t x382 = 1;
	int16_t x384 = -1;

	t91 = ((x381<=x382)-(x383%x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x386 = 10U;
	int64_t x387 = INT64_MIN;
	volatile int16_t x388 = -1;
	int64_t t92 = -610288216LL;

	t92 = ((x385<=x386)-(x387%x388));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = -1;
	static uint16_t x391 = 1432U;
	int32_t x392 = -1;
	volatile int32_t t93 = -44;

	t93 = ((x389<=x390)-(x391%x392));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MIN;
	static volatile int8_t x394 = INT8_MAX;
	volatile int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t94 = -8032453LL;

	t94 = ((x393<=x394)-(x395%x396));

	if (t94 != 32769LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x397 = UINT16_MAX;
	int32_t x398 = 0;
	uint32_t x399 = 1023769555U;
	uint32_t t95 = 1U;

	t95 = ((x397<=x398)-(x399%x400));

	if (t95 != 4294937122U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x401 = 5030260669854LL;
	static int64_t x402 = -520065721LL;
	int8_t x403 = -60;
	volatile uint8_t x404 = 26U;
	volatile int32_t t96 = -1;

	t96 = ((x401<=x402)-(x403%x404));

	if (t96 != 8) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = 6;
	int16_t x407 = -1;
	int32_t x408 = INT32_MIN;
	int32_t t97 = -163264;

	t97 = ((x405<=x406)-(x407%x408));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 6U;
	uint32_t x410 = 0U;
	volatile int64_t x411 = INT64_MAX;
	uint64_t t98 = 26989LLU;

	t98 = ((x409<=x410)-(x411%x412));

	if (t98 != 18409397462057339019LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = 247U;
	static int64_t x418 = INT64_MAX;
	volatile int8_t x419 = -1;
	int64_t x420 = 246821490988LL;

	t99 = ((x417<=x418)-(x419%x420));

	if (t99 != 2LL) { NG(); } else { ; }
	
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

