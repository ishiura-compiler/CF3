#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MIN;
uint8_t x9 = 107U;
uint8_t x11 = 7U;
uint16_t x17 = 6U;
uint8_t x22 = UINT8_MAX;
int64_t x26 = -1461531246092372692LL;
uint8_t x30 = UINT8_MAX;
static int8_t x48 = -1;
int64_t x49 = INT64_MAX;
static int64_t x54 = INT64_MIN;
int32_t t15 = -104303945;
uint64_t x65 = UINT64_MAX;
static uint32_t x66 = 7U;
static volatile uint64_t t16 = UINT64_MAX;
static int32_t x70 = -1;
int32_t x77 = -1;
static volatile uint64_t x78 = UINT64_MAX;
int64_t x79 = INT64_MIN;
volatile int32_t t19 = 34948;
int32_t x87 = INT32_MAX;
int32_t t21 = -2;
volatile int16_t x100 = INT16_MIN;
static uint64_t x104 = 14446561LLU;
int32_t t25 = 3489;
static int32_t t26 = 1;
int64_t x112 = INT64_MIN;
static uint8_t x114 = 38U;
static uint8_t x116 = 2U;
int32_t x119 = INT32_MIN;
int32_t x121 = -24542;
static int16_t x126 = -117;
int64_t t31 = INT64_MIN;
uint64_t x129 = 33880950294LLU;
static int8_t x134 = 0;
int8_t x136 = INT8_MAX;
uint32_t x139 = 147U;
volatile int32_t t34 = 592959683;
volatile int8_t x142 = -1;
int16_t x150 = INT16_MIN;
uint32_t x152 = 161645005U;
uint64_t x155 = 1528654981094LLU;
int64_t x160 = 94794421344496LL;
int32_t x174 = INT32_MIN;
uint8_t x175 = 13U;
volatile int32_t x177 = INT32_MAX;
int32_t x178 = INT32_MAX;
static uint8_t x179 = 4U;
volatile int32_t t44 = -9;
int16_t x188 = INT16_MIN;
int64_t x190 = INT64_MIN;
int64_t x192 = -14528949021LL;
int64_t x193 = -1LL;
int64_t t48 = 9237676671702299LL;
uint8_t x208 = 2U;
int64_t t51 = -8501016LL;
uint32_t x211 = 4U;
uint32_t x215 = UINT32_MAX;
uint32_t x220 = 11U;
int8_t x223 = INT8_MIN;
volatile int16_t x228 = INT16_MIN;
volatile int64_t x232 = INT64_MAX;
int64_t t59 = INT64_MIN;
static uint32_t x243 = 2090666U;
int32_t x253 = INT32_MIN;
static uint16_t x256 = UINT16_MAX;
volatile int32_t t63 = 4998583;
int64_t x260 = -1LL;
volatile int32_t t65 = 28341;
static volatile int32_t t66 = 25934687;
static int16_t x270 = INT16_MIN;
volatile int32_t t67 = 128697580;
static int32_t x274 = -824958;
int16_t x275 = -1;
uint8_t x281 = 0U;
int32_t t70 = -2703368;
int8_t x289 = 39;
uint16_t x290 = UINT16_MAX;
static int32_t x293 = INT32_MIN;
int32_t x296 = INT32_MAX;
int16_t x307 = INT16_MAX;
uint16_t x308 = 25U;
volatile int32_t t76 = -3;
int32_t t78 = 10;
volatile uint16_t x319 = 25904U;
volatile int32_t t79 = -1;
uint16_t x329 = UINT16_MAX;
int8_t x333 = -63;
int32_t x336 = 0;
int64_t x339 = INT64_MIN;
int16_t x342 = -11134;
uint16_t x348 = 25U;
volatile int32_t x349 = -1;
int32_t x350 = -43;
uint16_t x351 = UINT16_MAX;
volatile int32_t t87 = 167229649;
volatile uint8_t x353 = 0U;
static volatile int16_t x358 = 0;
uint32_t t89 = 1U;
int32_t x364 = 138;
int8_t x368 = 1;
uint16_t x371 = UINT16_MAX;
uint32_t x373 = 1650442880U;
int16_t x375 = INT16_MAX;
int64_t x379 = INT64_MIN;
int32_t t98 = -1;
int8_t x399 = INT8_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x2 = UINT32_MAX;
	int16_t x3 = 151;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 28507195;

	t0 = (x1^((x2==x3)<=x4));

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	static volatile int64_t x6 = 906089146330347LL;
	int64_t x8 = -1LL;
	int32_t t1 = -1707199;

	t1 = (x5^((x6==x7)<=x8));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = UINT16_MAX;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 487895;

	t2 = (x9^((x10==x11)<=x12));

	if (t2 != 106) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1726809;
	uint32_t x14 = 155U;
	uint16_t x15 = UINT16_MAX;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 25517168;

	t3 = (x13^((x14==x15)<=x16));

	if (t3 != 1726809) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x18 = 2U;
	int16_t x19 = INT16_MIN;
	uint64_t x20 = 3341083611047675170LLU;
	static int32_t t4 = -25;

	t4 = (x17^((x18==x19)<=x20));

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	volatile int64_t x23 = INT64_MAX;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1730;

	t5 = (x21^((x22==x23)<=x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	volatile int32_t x27 = INT32_MAX;
	volatile int64_t x28 = -1LL;
	volatile int32_t t6 = INT32_MAX;

	t6 = (x25^((x26==x27)<=x28));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	static int8_t x31 = -22;
	int16_t x32 = INT16_MAX;
	volatile int64_t t7 = 22928570545LL;

	t7 = (x29^((x30==x31)<=x32));

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	uint32_t x34 = 193365061U;
	int64_t x35 = INT64_MIN;
	int8_t x36 = INT8_MIN;
	volatile int64_t t8 = -647995184363LL;

	t8 = (x33^((x34==x35)<=x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	static int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MIN;
	int8_t x40 = -1;
	int32_t t9 = INT32_MIN;

	t9 = (x37^((x38==x39)<=x40));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 142U;
	int64_t x43 = INT64_MIN;
	uint32_t x44 = 28U;
	int32_t t10 = 6961412;

	t10 = (x41^((x42==x43)<=x44));

	if (t10 != 65534) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	volatile uint64_t x46 = UINT64_MAX;
	int32_t x47 = 62;
	int64_t t11 = -232602271LL;

	t11 = (x45^((x46==x47)<=x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = 2938357749LL;
	volatile int16_t x51 = 165;
	static int64_t x52 = -1LL;
	static int64_t t12 = INT64_MAX;

	t12 = (x49^((x50==x51)<=x52));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	volatile uint16_t x55 = 12U;
	uint64_t x56 = 3509986966887085LLU;
	static int32_t t13 = -359291216;

	t13 = (x53^((x54==x55)<=x56));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	static int32_t x58 = INT32_MIN;
	volatile uint64_t x59 = UINT64_MAX;
	static int32_t x60 = INT32_MAX;
	int64_t t14 = 13LL;

	t14 = (x57^((x58==x59)<=x60));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int64_t x62 = INT64_MAX;
	int64_t x63 = -32306244290983LL;
	int32_t x64 = INT32_MIN;

	t15 = (x61^((x62==x63)<=x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x67 = INT16_MAX;
	volatile int16_t x68 = -316;

	t16 = (x65^((x66==x67)<=x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 58U;
	uint16_t x71 = UINT16_MAX;
	static int64_t x72 = 964874LL;
	uint32_t t17 = 615200U;

	t17 = (x69^((x70==x71)<=x72));

	if (t17 != 59U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -8801;
	uint32_t x74 = 743U;
	int8_t x75 = -55;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -543;

	t18 = (x73^((x74==x75)<=x76));

	if (t18 != -8801) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x80 = 6U;

	t19 = (x77^((x78==x79)<=x80));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	int16_t x82 = -1;
	int32_t x83 = INT32_MAX;
	static volatile int32_t x84 = INT32_MAX;
	int32_t t20 = -1;

	t20 = (x81^((x82==x83)<=x84));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -3;
	uint16_t x86 = 78U;
	static volatile uint64_t x88 = UINT64_MAX;

	t21 = (x85^((x86==x87)<=x88));

	if (t21 != -4) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	static int64_t x91 = -1LL;
	static int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 0;

	t22 = (x89^((x90==x91)<=x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 222U;
	int8_t x94 = INT8_MAX;
	int32_t x95 = -1;
	uint8_t x96 = 32U;
	int32_t t23 = -3589;

	t23 = (x93^((x94==x95)<=x96));

	if (t23 != 223) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 2U;
	int8_t x98 = -1;
	int64_t x99 = INT64_MIN;
	volatile uint32_t t24 = 88340293U;

	t24 = (x97^((x98==x99)<=x100));

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	uint16_t x102 = 35U;
	int16_t x103 = INT16_MIN;

	t25 = (x101^((x102==x103)<=x104));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 252U;
	uint32_t x106 = 49335U;
	int8_t x107 = INT8_MAX;
	volatile int8_t x108 = INT8_MIN;

	t26 = (x105^((x106==x107)<=x108));

	if (t26 != 252) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	static int8_t x110 = -1;
	volatile int64_t x111 = 3204997744752555LL;
	int32_t t27 = -907754713;

	t27 = (x109^((x110==x111)<=x112));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 19898112LLU;
	static int64_t x115 = INT64_MIN;
	static uint64_t t28 = 2LLU;

	t28 = (x113^((x114==x115)<=x116));

	if (t28 != 19898113LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int32_t x118 = INT32_MAX;
	static int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -126162;

	t29 = (x117^((x118==x119)<=x120));

	if (t29 != 126) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x122 = -1LL;
	volatile int64_t x123 = -1LL;
	int8_t x124 = INT8_MIN;
	int32_t t30 = -35218023;

	t30 = (x121^((x122==x123)<=x124));

	if (t30 != -24542) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	int16_t x127 = INT16_MAX;
	int8_t x128 = -20;

	t31 = (x125^((x126==x127)<=x128));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = 461467620233816LLU;
	volatile int16_t x131 = -1;
	static int64_t x132 = -1LL;
	volatile uint64_t t32 = 3161699664360131LLU;

	t32 = (x129^((x130==x131)<=x132));

	if (t32 != 33880950294LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = -1;
	volatile uint64_t x135 = 7654295483871684807LLU;
	volatile int32_t t33 = 85;

	t33 = (x133^((x134==x135)<=x136));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	static volatile int8_t x138 = -1;
	static uint32_t x140 = UINT32_MAX;

	t34 = (x137^((x138==x139)<=x140));

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	static uint8_t x143 = UINT8_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t35 = -25773;

	t35 = (x141^((x142==x143)<=x144));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int16_t x146 = INT16_MIN;
	static volatile int32_t x147 = INT32_MIN;
	int64_t x148 = -1LL;
	volatile int32_t t36 = 19375;

	t36 = (x145^((x146==x147)<=x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	uint32_t x151 = UINT32_MAX;
	volatile uint32_t t37 = 781U;

	t37 = (x149^((x150==x151)<=x152));

	if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	uint8_t x154 = 31U;
	int16_t x156 = -1;
	int32_t t38 = -29497226;

	t38 = (x153^((x154==x155)<=x156));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 22U;
	static int32_t x158 = 8279591;
	volatile int32_t x159 = INT32_MAX;
	static uint32_t t39 = 2U;

	t39 = (x157^((x158==x159)<=x160));

	if (t39 != 23U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -17;
	static int8_t x162 = -11;
	int16_t x163 = 1;
	uint16_t x164 = 0U;
	static volatile int32_t t40 = -14;

	t40 = (x161^((x162==x163)<=x164));

	if (t40 != -18) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -2270;
	static volatile int64_t x166 = -49LL;
	static int64_t x167 = INT64_MAX;
	int16_t x168 = -25;
	int32_t t41 = 1;

	t41 = (x165^((x166==x167)<=x168));

	if (t41 != -2270) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 21U;
	static volatile uint16_t x170 = 14U;
	volatile uint8_t x171 = 0U;
	volatile int16_t x172 = 78;
	static volatile int32_t t42 = -71;

	t42 = (x169^((x170==x171)<=x172));

	if (t42 != 20) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 410595U;
	int8_t x176 = INT8_MIN;
	volatile uint32_t t43 = 50111177U;

	t43 = (x173^((x174==x175)<=x176));

	if (t43 != 410595U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x180 = UINT16_MAX;

	t44 = (x177^((x178==x179)<=x180));

	if (t44 != 2147483646) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -2425;
	int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MIN;
	int32_t x184 = 10425;
	int32_t t45 = -13;

	t45 = (x181^((x182==x183)<=x184));

	if (t45 != -2426) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -5920995721144511LL;
	int8_t x186 = -3;
	uint8_t x187 = 1U;
	int64_t t46 = 1110535495094521LL;

	t46 = (x185^((x186==x187)<=x188));

	if (t46 != -5920995721144511LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 2875;
	uint64_t x191 = 7249049151698528LLU;
	volatile int32_t t47 = -3176225;

	t47 = (x189^((x190==x191)<=x192));

	if (t47 != 2875) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x194 = 2332;
	int64_t x195 = 61092710LL;
	int8_t x196 = INT8_MAX;

	t48 = (x193^((x194==x195)<=x196));

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 462U;
	static int32_t x198 = INT32_MIN;
	static int8_t x199 = INT8_MIN;
	volatile int16_t x200 = -1;
	volatile int32_t t49 = -155128686;

	t49 = (x197^((x198==x199)<=x200));

	if (t49 != 462) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int8_t x202 = 19;
	int32_t x203 = 11314608;
	uint16_t x204 = 24U;
	volatile uint32_t t50 = 588130U;

	t50 = (x201^((x202==x203)<=x204));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 1003LL;
	volatile int16_t x206 = -1;
	int16_t x207 = INT16_MIN;

	t51 = (x205^((x206==x207)<=x208));

	if (t51 != 1002LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = UINT64_MAX;
	volatile int32_t x210 = 6934;
	static int32_t x212 = 393714340;
	volatile uint64_t t52 = 5441279528278460LLU;

	t52 = (x209^((x210==x211)<=x212));

	if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = 3653;
	int32_t x214 = -668;
	uint32_t x216 = 45128U;
	int32_t t53 = 7983;

	t53 = (x213^((x214==x215)<=x216));

	if (t53 != 3652) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -5;
	int32_t x218 = INT32_MIN;
	int16_t x219 = INT16_MIN;
	int32_t t54 = -58;

	t54 = (x217^((x218==x219)<=x220));

	if (t54 != -6) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	static uint16_t x222 = 174U;
	static volatile int64_t x224 = 203486038913337180LL;
	volatile int32_t t55 = 654689984;

	t55 = (x221^((x222==x223)<=x224));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -234622LL;
	static int32_t x226 = INT32_MAX;
	static int32_t x227 = 562946574;
	int64_t t56 = 176272277LL;

	t56 = (x225^((x226==x227)<=x228));

	if (t56 != -234622LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MAX;
	static int64_t x231 = INT64_MIN;
	volatile int32_t t57 = 3332;

	t57 = (x229^((x230==x231)<=x232));

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MAX;
	volatile uint64_t x234 = 13LLU;
	int64_t x235 = -58577280LL;
	static int8_t x236 = INT8_MAX;
	int32_t t58 = 807268790;

	t58 = (x233^((x234==x235)<=x236));

	if (t58 != 2147483646) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	static uint64_t x238 = UINT64_MAX;
	volatile int16_t x239 = -1;
	int64_t x240 = INT64_MIN;

	t59 = (x237^((x238==x239)<=x240));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int16_t x242 = INT16_MIN;
	static uint64_t x244 = 31203214911760743LLU;
	int32_t t60 = 10104861;

	t60 = (x241^((x242==x243)<=x244));

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 2874889LLU;
	uint64_t x246 = 1011589527LLU;
	uint64_t x247 = UINT64_MAX;
	int8_t x248 = INT8_MIN;
	uint64_t t61 = 8358LLU;

	t61 = (x245^((x246==x247)<=x248));

	if (t61 != 2874889LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	volatile int16_t x250 = 1;
	uint64_t x251 = UINT64_MAX;
	uint16_t x252 = 8842U;
	static volatile int32_t t62 = 18;

	t62 = (x249^((x250==x251)<=x252));

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x254 = UINT8_MAX;
	int16_t x255 = INT16_MIN;

	t63 = (x253^((x254==x255)<=x256));

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 1LLU;
	static int16_t x258 = 389;
	int64_t x259 = -261185878190375417LL;
	volatile uint64_t t64 = 1222547LLU;

	t64 = (x257^((x258==x259)<=x260));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = -1;
	uint8_t x263 = UINT8_MAX;
	static int32_t x264 = INT32_MIN;

	t65 = (x261^((x262==x263)<=x264));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static uint64_t x266 = 13880051679226447LLU;
	int16_t x267 = 1914;
	volatile int8_t x268 = 17;

	t66 = (x265^((x266==x267)<=x268));

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;

	t67 = (x269^((x270==x271)<=x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 45U;
	uint64_t x276 = UINT64_MAX;
	static uint32_t t68 = 1371U;

	t68 = (x273^((x274==x275)<=x276));

	if (t68 != 44U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	static volatile int16_t x278 = INT16_MIN;
	volatile int32_t x279 = -1;
	uint8_t x280 = 1U;
	volatile int32_t t69 = -2126748;

	t69 = (x277^((x278==x279)<=x280));

	if (t69 != 2147483646) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = 17820;
	uint32_t x283 = 178314149U;
	volatile uint16_t x284 = UINT16_MAX;

	t70 = (x281^((x282==x283)<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 105427183;
	int32_t x286 = INT32_MIN;
	static int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t71 = 3993444;

	t71 = (x285^((x286==x287)<=x288));

	if (t71 != 105427183) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x291 = 75280195694LL;
	uint16_t x292 = UINT16_MAX;
	int32_t t72 = 41168;

	t72 = (x289^((x290==x291)<=x292));

	if (t72 != 38) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = 19;
	uint8_t x295 = 21U;
	int32_t t73 = 1;

	t73 = (x293^((x294==x295)<=x296));

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x297 = -1LL;
	int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	static int32_t x300 = -189;
	volatile int64_t t74 = -809495210542569LL;

	t74 = (x297^((x298==x299)<=x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 42U;
	static int32_t x302 = -1;
	int16_t x303 = -2;
	uint16_t x304 = 6U;
	volatile int32_t t75 = -11;

	t75 = (x301^((x302==x303)<=x304));

	if (t75 != 43) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int16_t x306 = 3658;

	t76 = (x305^((x306==x307)<=x308));

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 10U;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = -1LL;
	uint64_t x312 = UINT64_MAX;
	int32_t t77 = 18762;

	t77 = (x309^((x310==x311)<=x312));

	if (t77 != 11) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 0;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	static int64_t x316 = INT64_MIN;

	t78 = (x313^((x314==x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 1U;
	uint64_t x318 = 22LLU;
	int64_t x320 = -164LL;

	t79 = (x317^((x318==x319)<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = INT16_MIN;
	static int32_t x322 = INT32_MIN;
	uint8_t x323 = 0U;
	int16_t x324 = INT16_MAX;
	volatile int32_t t80 = -121227928;

	t80 = (x321^((x322==x323)<=x324));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = 48845;
	static int8_t x326 = INT8_MIN;
	uint16_t x327 = 492U;
	int16_t x328 = INT16_MIN;
	int32_t t81 = -380228;

	t81 = (x325^((x326==x327)<=x328));

	if (t81 != 48845) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x330 = INT16_MIN;
	int32_t x331 = 135810;
	static int16_t x332 = 1;
	volatile int32_t t82 = 137;

	t82 = (x329^((x330==x331)<=x332));

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = INT8_MIN;
	uint64_t x335 = 25370519LLU;
	int32_t t83 = 1779227;

	t83 = (x333^((x334==x335)<=x336));

	if (t83 != -64) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MAX;
	uint32_t x338 = 7U;
	uint64_t x340 = 107640720LLU;
	volatile int64_t t84 = 1LL;

	t84 = (x337^((x338==x339)<=x340));

	if (t84 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	int16_t x343 = 476;
	int16_t x344 = -1;
	volatile int32_t t85 = 6963705;

	t85 = (x341^((x342==x343)<=x344));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	volatile int64_t x346 = 0LL;
	int32_t x347 = INT32_MAX;
	volatile int32_t t86 = 6570;

	t86 = (x345^((x346==x347)<=x348));

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x352 = 49;

	t87 = (x349^((x350==x351)<=x352));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 101364U;
	int16_t x355 = INT16_MIN;
	int64_t x356 = 63LL;
	volatile int32_t t88 = -2131;

	t88 = (x353^((x354==x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 2U;
	uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 18417U;

	t89 = (x357^((x358==x359)<=x360));

	if (t89 != 3U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	volatile int32_t x362 = 4359;
	int16_t x363 = INT16_MAX;
	volatile int64_t t90 = -53LL;

	t90 = (x361^((x362==x363)<=x364));

	if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = UINT16_MAX;
	volatile int64_t x366 = INT64_MAX;
	static int8_t x367 = INT8_MIN;
	static volatile int32_t t91 = -46;

	t91 = (x365^((x366==x367)<=x368));

	if (t91 != 65534) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 2U;
	uint8_t x370 = 15U;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t92 = -37190;

	t92 = (x369^((x370==x371)<=x372));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x374 = -1;
	uint16_t x376 = 3U;
	uint32_t t93 = 720002231U;

	t93 = (x373^((x374==x375)<=x376));

	if (t93 != 1650442881U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	static uint32_t x378 = 24U;
	int8_t x380 = INT8_MAX;
	static volatile uint64_t t94 = 2357713664480488622LLU;

	t94 = (x377^((x378==x379)<=x380));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 58U;
	static int16_t x382 = INT16_MAX;
	static volatile int32_t x383 = INT32_MIN;
	volatile uint64_t x384 = UINT64_MAX;
	volatile int32_t t95 = 0;

	t95 = (x381^((x382==x383)<=x384));

	if (t95 != 59) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	static volatile int16_t x386 = INT16_MAX;
	int8_t x387 = 14;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t96 = -1300;

	t96 = (x385^((x386==x387)<=x388));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 89U;
	static int16_t x390 = INT16_MIN;
	static int16_t x391 = -146;
	static int32_t x392 = -1;
	uint32_t t97 = 1237973824U;

	t97 = (x389^((x390==x391)<=x392));

	if (t97 != 89U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = -121;
	uint16_t x395 = UINT16_MAX;
	uint16_t x396 = 2U;

	t98 = (x393^((x394==x395)<=x396));

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = 9U;
	volatile int8_t x398 = INT8_MIN;
	uint16_t x400 = 195U;
	volatile int32_t t99 = -230864;

	t99 = (x397^((x398==x399)<=x400));

	if (t99 != 8) { NG(); } else { ; }
	
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

