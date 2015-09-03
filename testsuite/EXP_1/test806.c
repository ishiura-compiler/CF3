#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x1 = 1;
int32_t x4 = INT32_MAX;
int32_t x5 = -1;
static volatile int32_t t1 = 80649;
uint64_t x21 = UINT64_MAX;
int32_t t7 = -392178556;
static int64_t x41 = 7LL;
int16_t x52 = -1;
int8_t x62 = -3;
int32_t x66 = -1778760;
static volatile uint64_t t14 = 3247415160978852751LLU;
int64_t x72 = -1LL;
static uint8_t x74 = 9U;
uint64_t x75 = UINT64_MAX;
int64_t x79 = -103392342672792LL;
int32_t x82 = INT32_MIN;
volatile int32_t t21 = -131;
volatile uint64_t x104 = 4235434380162400479LLU;
volatile uint64_t t23 = 0LLU;
int32_t x108 = -27677;
volatile int64_t x109 = -1LL;
int16_t x112 = 1;
uint64_t x124 = UINT64_MAX;
volatile uint64_t t28 = 15636253272504020LLU;
int8_t x127 = INT8_MIN;
int64_t x131 = INT64_MIN;
int64_t x132 = INT64_MAX;
uint64_t x143 = 6587006LLU;
int8_t x144 = -1;
static int64_t x148 = INT64_MIN;
volatile int8_t x149 = INT8_MIN;
int16_t x152 = INT16_MAX;
int32_t x154 = -861;
volatile uint16_t x156 = 5437U;
int16_t x164 = INT16_MIN;
int32_t x170 = -47499;
volatile uint8_t x171 = 31U;
int32_t t41 = 422386657;
uint64_t x181 = 101LLU;
volatile int16_t x184 = INT16_MAX;
static int16_t x185 = INT16_MIN;
static uint32_t x186 = 1119921649U;
uint16_t x188 = UINT16_MAX;
int64_t x189 = INT64_MAX;
volatile int16_t x191 = -1;
static uint32_t x194 = 693849487U;
uint32_t x196 = 157668378U;
static volatile int16_t x199 = -4021;
static int64_t x200 = -1LL;
volatile int32_t t50 = -13540284;
int32_t x222 = INT32_MAX;
uint16_t x225 = UINT16_MAX;
static volatile int64_t t54 = 6688LL;
volatile uint64_t t55 = 206865774LLU;
uint32_t x233 = 3U;
volatile int32_t t56 = -4789;
static volatile uint64_t x238 = UINT64_MAX;
volatile uint64_t x239 = UINT64_MAX;
static volatile int16_t x242 = INT16_MIN;
int32_t x244 = -1;
int16_t x246 = 4629;
int32_t x262 = -1335756;
static volatile int32_t t63 = 1;
static volatile int32_t x267 = 0;
int32_t t64 = 144;
int32_t x269 = 581346;
volatile int32_t x272 = -1;
int64_t x274 = INT64_MIN;
static int32_t x275 = 57556041;
int8_t x276 = -1;
volatile int8_t x279 = 3;
int32_t x285 = INT32_MIN;
int32_t x288 = INT32_MIN;
volatile int32_t t69 = INT32_MIN;
int8_t x302 = INT8_MAX;
int8_t x306 = -1;
uint8_t x312 = 2U;
int16_t x315 = -24;
int64_t x320 = -1LL;
uint32_t x322 = 35494667U;
uint32_t x328 = 252147U;
int8_t x331 = -1;
uint32_t x333 = 327924U;
static int32_t x340 = INT32_MAX;
int32_t x342 = INT32_MIN;
int64_t x343 = -1LL;
uint8_t x346 = 119U;
static uint64_t x348 = 54080929558LLU;
int32_t x350 = -1;
uint32_t x353 = UINT32_MAX;
int64_t x366 = INT64_MAX;
int32_t x368 = INT32_MAX;
int64_t x375 = -1041973286374116LL;
uint8_t x376 = UINT8_MAX;
volatile int64_t t92 = -5521402679LL;
uint32_t x402 = 25864744U;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int8_t x3 = -1;
	static volatile int32_t t0 = INT32_MAX;

	t0 = (((x1%x2)<=x3)^x4);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	int8_t x7 = -1;
	static uint8_t x8 = UINT8_MAX;

	t1 = (((x5%x6)<=x7)^x8);

	if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 4953216711522LLU;
	int8_t x10 = -1;
	static volatile int16_t x11 = -3;
	static uint16_t x12 = 7660U;
	int32_t t2 = 17;

	t2 = (((x9%x10)<=x11)^x12);

	if (t2 != 7661) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int64_t x14 = -15LL;
	uint32_t x15 = 27U;
	uint64_t x16 = 2125197734818160LLU;
	uint64_t t3 = 181657LLU;

	t3 = (((x13%x14)<=x15)^x16);

	if (t3 != 2125197734818161LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x22 = 13046U;
	volatile int8_t x23 = INT8_MIN;
	int64_t x24 = -1LL;
	int64_t t4 = -4LL;

	t4 = (((x21%x22)<=x23)^x24);

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MAX;
	volatile uint64_t x27 = 1109140381LLU;
	int64_t x28 = -1LL;
	volatile int64_t t5 = 38LL;

	t5 = (((x25%x26)<=x27)^x28);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	volatile int64_t x30 = INT64_MAX;
	uint16_t x31 = UINT16_MAX;
	uint16_t x32 = 116U;
	int32_t t6 = 103914069;

	t6 = (((x29%x30)<=x31)^x32);

	if (t6 != 117) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -242436706;
	volatile int8_t x34 = INT8_MIN;
	uint16_t x35 = 232U;
	int16_t x36 = -4;

	t7 = (((x33%x34)<=x35)^x36);

	if (t7 != -3) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	static int32_t x38 = INT32_MIN;
	uint32_t x39 = 44U;
	int8_t x40 = INT8_MAX;
	volatile int32_t t8 = 45;

	t8 = (((x37%x38)<=x39)^x40);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -1LL;
	int32_t x43 = -479681;
	int32_t x44 = INT32_MAX;
	int32_t t9 = INT32_MAX;

	t9 = (((x41%x42)<=x43)^x44);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x49 = UINT64_MAX;
	volatile int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	volatile int32_t t10 = -32319;

	t10 = (((x49%x50)<=x51)^x52);

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = 55149LL;
	uint32_t x54 = UINT32_MAX;
	static int32_t x55 = INT32_MIN;
	int64_t x56 = 960437714LL;
	int64_t t11 = 246472LL;

	t11 = (((x53%x54)<=x55)^x56);

	if (t11 != 960437714LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MIN;
	uint64_t x58 = 24410689787LLU;
	uint16_t x59 = 21920U;
	volatile int8_t x60 = -3;
	int32_t t12 = 0;

	t12 = (((x57%x58)<=x59)^x60);

	if (t12 != -3) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = INT64_MAX;
	int64_t x63 = INT64_MIN;
	volatile int64_t x64 = INT64_MIN;
	volatile int64_t t13 = INT64_MIN;

	t13 = (((x61%x62)<=x63)^x64);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	uint8_t x67 = UINT8_MAX;
	static uint64_t x68 = 2262719186LLU;

	t14 = (((x65%x66)<=x67)^x68);

	if (t14 != 2262719187LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = INT8_MIN;
	int16_t x71 = 2681;
	int64_t t15 = 1165342298838LL;

	t15 = (((x69%x70)<=x71)^x72);

	if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = UINT32_MAX;
	int16_t x76 = INT16_MIN;
	int32_t t16 = -6283;

	t16 = (((x73%x74)<=x75)^x76);

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 33143U;
	int32_t x78 = INT32_MIN;
	int32_t x80 = 104070629;
	int32_t t17 = -808622592;

	t17 = (((x77%x78)<=x79)^x80);

	if (t17 != 104070629) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = 56U;
	int16_t x83 = INT16_MAX;
	int32_t x84 = -1;
	int32_t t18 = -122;

	t18 = (((x81%x82)<=x83)^x84);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x85 = INT16_MIN;
	int16_t x86 = -1;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = 3U;
	volatile int32_t t19 = 1190;

	t19 = (((x85%x86)<=x87)^x88);

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	volatile int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MAX;
	static volatile int64_t x92 = -1LL;
	int64_t t20 = 0LL;

	t20 = (((x89%x90)<=x91)^x92);

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = -890LL;
	uint32_t x94 = 6U;
	int16_t x95 = INT16_MAX;
	volatile uint8_t x96 = UINT8_MAX;

	t21 = (((x93%x94)<=x95)^x96);

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = -1;
	int16_t x98 = -1;
	static volatile int16_t x99 = INT16_MIN;
	int16_t x100 = 1;
	volatile int32_t t22 = 250482852;

	t22 = (((x97%x98)<=x99)^x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = 739;
	volatile int8_t x102 = INT8_MIN;
	int8_t x103 = 0;

	t23 = (((x101%x102)<=x103)^x104);

	if (t23 != 4235434380162400479LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	uint8_t x106 = 11U;
	int16_t x107 = INT16_MIN;
	volatile int32_t t24 = -549445;

	t24 = (((x105%x106)<=x107)^x108);

	if (t24 != -27677) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = 193;
	int8_t x111 = INT8_MIN;
	volatile int32_t t25 = -2600;

	t25 = (((x109%x110)<=x111)^x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	int64_t x114 = -1LL;
	int8_t x115 = INT8_MIN;
	static volatile int64_t x116 = -330454774961846993LL;
	volatile int64_t t26 = -701629247653058LL;

	t26 = (((x113%x114)<=x115)^x116);

	if (t26 != -330454774961846993LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x117 = INT64_MIN;
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	int64_t x120 = -21657041LL;
	int64_t t27 = 29464685872LL;

	t27 = (((x117%x118)<=x119)^x120);

	if (t27 != -21657041LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = -46303444638LL;
	uint16_t x123 = UINT16_MAX;

	t28 = (((x121%x122)<=x123)^x124);

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = 322384599416202594LL;
	uint8_t x126 = 31U;
	int16_t x128 = INT16_MAX;
	static int32_t t29 = -1;

	t29 = (((x125%x126)<=x127)^x128);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = 58319;
	volatile int64_t t30 = INT64_MAX;

	t30 = (((x129%x130)<=x131)^x132);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	volatile int16_t x134 = INT16_MIN;
	int16_t x135 = -1;
	int16_t x136 = -28;
	static volatile int32_t t31 = -3414;

	t31 = (((x133%x134)<=x135)^x136);

	if (t31 != -27) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x138 = 782U;
	volatile int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t32 = 37008201;

	t32 = (((x137%x138)<=x139)^x140);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = UINT64_MAX;
	static int16_t x142 = -5057;
	int32_t t33 = 253;

	t33 = (((x141%x142)<=x143)^x144);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = -1;
	volatile uint32_t x146 = UINT32_MAX;
	volatile int64_t x147 = -1LL;
	int64_t t34 = INT64_MIN;

	t34 = (((x145%x146)<=x147)^x148);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x150 = INT16_MIN;
	int16_t x151 = 13296;
	static int32_t t35 = 4045127;

	t35 = (((x149%x150)<=x151)^x152);

	if (t35 != 32766) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MAX;
	int16_t x155 = INT16_MIN;
	static int32_t t36 = 568753;

	t36 = (((x153%x154)<=x155)^x156);

	if (t36 != 5437) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = UINT8_MAX;
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = -1;
	int32_t x160 = INT32_MIN;
	static int32_t t37 = -54444;

	t37 = (((x157%x158)<=x159)^x160);

	if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 25484064437401091LLU;
	int16_t x162 = 450;
	int16_t x163 = INT16_MIN;
	int32_t t38 = -30336227;

	t38 = (((x161%x162)<=x163)^x164);

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 1638LLU;
	static int32_t x166 = -1;
	uint16_t x167 = 0U;
	volatile int16_t x168 = INT16_MIN;
	int32_t t39 = 4;

	t39 = (((x165%x166)<=x167)^x168);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	uint64_t x172 = UINT64_MAX;
	uint64_t t40 = 1103411LLU;

	t40 = (((x169%x170)<=x171)^x172);

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MIN;
	uint32_t x174 = UINT32_MAX;
	uint8_t x175 = 25U;
	int32_t x176 = -1;

	t41 = (((x173%x174)<=x175)^x176);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 1;
	volatile int64_t x178 = 539778494814974LL;
	int32_t x179 = INT32_MAX;
	int8_t x180 = 21;
	volatile int32_t t42 = -1;

	t42 = (((x177%x178)<=x179)^x180);

	if (t42 != 20) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x182 = -283387939658700221LL;
	static int32_t x183 = INT32_MIN;
	int32_t t43 = -118704841;

	t43 = (((x181%x182)<=x183)^x184);

	if (t43 != 32766) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x187 = INT32_MIN;
	volatile int32_t t44 = 68137756;

	t44 = (((x185%x186)<=x187)^x188);

	if (t44 != 65534) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x190 = 1U;
	uint32_t x192 = 974671787U;
	volatile uint32_t t45 = 12481U;

	t45 = (((x189%x190)<=x191)^x192);

	if (t45 != 974671787U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MAX;
	int16_t x195 = 7;
	static uint32_t t46 = 83U;

	t46 = (((x193%x194)<=x195)^x196);

	if (t46 != 157668378U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	volatile int16_t x198 = -46;
	volatile int64_t t47 = 646505159647LL;

	t47 = (((x197%x198)<=x199)^x200);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = -1LL;
	uint64_t x202 = UINT64_MAX;
	uint16_t x203 = 2498U;
	int8_t x204 = 4;
	volatile int32_t t48 = 2345;

	t48 = (((x201%x202)<=x203)^x204);

	if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x205 = -13445;
	int32_t x206 = INT32_MAX;
	int64_t x207 = INT64_MIN;
	static int64_t x208 = INT64_MIN;
	int64_t t49 = INT64_MIN;

	t49 = (((x205%x206)<=x207)^x208);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile int16_t x210 = 5;
	static uint16_t x211 = 19U;
	volatile int8_t x212 = -3;

	t50 = (((x209%x210)<=x211)^x212);

	if (t50 != -4) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = -15901;
	uint8_t x215 = UINT8_MAX;
	static uint32_t x216 = 447U;
	volatile uint32_t t51 = 206U;

	t51 = (((x213%x214)<=x215)^x216);

	if (t51 != 447U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x217 = 11475237LLU;
	uint64_t x218 = 6180627145362LLU;
	static int16_t x219 = -1;
	static int8_t x220 = 1;
	volatile int32_t t52 = -4615;

	t52 = (((x217%x218)<=x219)^x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MAX;
	uint8_t x223 = 5U;
	uint8_t x224 = 8U;
	static volatile int32_t t53 = -2;

	t53 = (((x221%x222)<=x223)^x224);

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x226 = INT8_MAX;
	uint32_t x227 = UINT32_MAX;
	int64_t x228 = 212456007696968578LL;

	t54 = (((x225%x226)<=x227)^x228);

	if (t54 != 212456007696968579LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x229 = -45;
	volatile int32_t x230 = INT32_MAX;
	volatile int16_t x231 = INT16_MAX;
	uint64_t x232 = 52LLU;

	t55 = (((x229%x230)<=x231)^x232);

	if (t55 != 53LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x234 = INT64_MIN;
	static int32_t x235 = 157;
	int16_t x236 = -1;

	t56 = (((x233%x234)<=x235)^x236);

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 3U;
	static uint64_t x240 = 3379212305236LLU;
	uint64_t t57 = 2086935098775224071LLU;

	t57 = (((x237%x238)<=x239)^x240);

	if (t57 != 3379212305237LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -3;
	int16_t x243 = INT16_MIN;
	int32_t t58 = -846;

	t58 = (((x241%x242)<=x243)^x244);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = UINT16_MAX;
	volatile int32_t x247 = INT32_MIN;
	int16_t x248 = 15;
	volatile int32_t t59 = -247267;

	t59 = (((x245%x246)<=x247)^x248);

	if (t59 != 15) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x249 = UINT16_MAX;
	int64_t x250 = INT64_MAX;
	int16_t x251 = -1230;
	uint16_t x252 = 239U;
	int32_t t60 = -1471766;

	t60 = (((x249%x250)<=x251)^x252);

	if (t60 != 239) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = INT64_MIN;
	volatile int64_t x254 = INT64_MIN;
	volatile int32_t x255 = 1793;
	int32_t x256 = -678631080;
	volatile int32_t t61 = -5139;

	t61 = (((x253%x254)<=x255)^x256);

	if (t61 != -678631079) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MAX;
	uint16_t x260 = 299U;
	int32_t t62 = -70135;

	t62 = (((x257%x258)<=x259)^x260);

	if (t62 != 298) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = 8LL;
	uint16_t x263 = 41U;
	int16_t x264 = INT16_MIN;

	t63 = (((x261%x262)<=x263)^x264);

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MAX;
	volatile int32_t x266 = 79500501;
	static uint16_t x268 = 9929U;

	t64 = (((x265%x266)<=x267)^x268);

	if (t64 != 9929) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x270 = INT16_MAX;
	int64_t x271 = INT64_MIN;
	int32_t t65 = -14606895;

	t65 = (((x269%x270)<=x271)^x272);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = 2U;
	volatile int32_t t66 = -11592731;

	t66 = (((x273%x274)<=x275)^x276);

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MAX;
	volatile int16_t x280 = 1;
	volatile int32_t t67 = -1;

	t67 = (((x277%x278)<=x279)^x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	uint32_t x282 = 253120723U;
	static uint32_t x283 = UINT32_MAX;
	volatile int8_t x284 = INT8_MIN;
	volatile int32_t t68 = -10;

	t68 = (((x281%x282)<=x283)^x284);

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x286 = INT8_MIN;
	int32_t x287 = INT32_MIN;

	t69 = (((x285%x286)<=x287)^x288);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x289 = 7;
	int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MAX;
	int64_t x292 = -1LL;
	volatile int64_t t70 = -1LL;

	t70 = (((x289%x290)<=x291)^x292);

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x294 = 5;
	int8_t x295 = INT8_MAX;
	volatile int64_t x296 = INT64_MIN;
	volatile int64_t t71 = -281947239LL;

	t71 = (((x293%x294)<=x295)^x296);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MIN;
	volatile int16_t x298 = 1;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	volatile int64_t t72 = INT64_MIN;

	t72 = (((x297%x298)<=x299)^x300);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x301 = 16919208;
	uint32_t x303 = 6718078U;
	int32_t x304 = -1;
	static int32_t t73 = -12548;

	t73 = (((x301%x302)<=x303)^x304);

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -1LL;
	int64_t x307 = INT64_MIN;
	int32_t x308 = -1;
	volatile int32_t t74 = 469;

	t74 = (((x305%x306)<=x307)^x308);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = -35640401293896706LL;
	int32_t x310 = -112598;
	uint8_t x311 = 0U;
	volatile int32_t t75 = 6418;

	t75 = (((x309%x310)<=x311)^x312);

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x313 = UINT32_MAX;
	uint16_t x314 = 8U;
	static uint16_t x316 = 51U;
	int32_t t76 = -41818;

	t76 = (((x313%x314)<=x315)^x316);

	if (t76 != 50) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = -1;
	volatile int64_t t77 = -98978LL;

	t77 = (((x317%x318)<=x319)^x320);

	if (t77 != -2LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = 6549265LLU;
	uint8_t x323 = 9U;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t78 = 646;

	t78 = (((x321%x322)<=x323)^x324);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MIN;
	int32_t x327 = INT32_MIN;
	volatile uint32_t t79 = 17458006U;

	t79 = (((x325%x326)<=x327)^x328);

	if (t79 != 252147U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 6447641575762LLU;
	uint32_t x330 = 24U;
	int32_t x332 = -1;
	volatile int32_t t80 = 16;

	t80 = (((x329%x330)<=x331)^x332);

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x334 = INT8_MIN;
	uint8_t x335 = UINT8_MAX;
	uint8_t x336 = 21U;
	volatile int32_t t81 = 1;

	t81 = (((x333%x334)<=x335)^x336);

	if (t81 != 21) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = INT64_MIN;
	volatile int64_t x338 = INT64_MIN;
	static int32_t x339 = INT32_MIN;
	volatile int32_t t82 = INT32_MAX;

	t82 = (((x337%x338)<=x339)^x340);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	static int8_t x344 = 20;
	int32_t t83 = -1957;

	t83 = (((x341%x342)<=x343)^x344);

	if (t83 != 20) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x345 = -28165;
	uint32_t x347 = 13813855U;
	static uint64_t t84 = 514876LLU;

	t84 = (((x345%x346)<=x347)^x348);

	if (t84 != 54080929558LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x351 = -16;
	int8_t x352 = INT8_MIN;
	volatile int32_t t85 = 2208734;

	t85 = (((x349%x350)<=x351)^x352);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x354 = -1;
	volatile int64_t x355 = 19187641559180210LL;
	uint32_t x356 = UINT32_MAX;
	uint32_t t86 = 140U;

	t86 = (((x353%x354)<=x355)^x356);

	if (t86 != 4294967294U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x357 = INT8_MIN;
	int16_t x358 = 883;
	volatile int64_t x359 = -1LL;
	volatile uint32_t x360 = 104001656U;
	volatile uint32_t t87 = 248220U;

	t87 = (((x357%x358)<=x359)^x360);

	if (t87 != 104001657U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x361 = UINT8_MAX;
	int16_t x362 = -1;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = 54U;
	volatile int32_t t88 = 404532601;

	t88 = (((x361%x362)<=x363)^x364);

	if (t88 != 54) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MIN;
	int8_t x367 = 5;
	int32_t t89 = -64;

	t89 = (((x365%x366)<=x367)^x368);

	if (t89 != 2147483646) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = -1;
	int16_t x370 = -1;
	uint8_t x371 = 3U;
	int64_t x372 = INT64_MIN;
	int64_t t90 = -57467426LL;

	t90 = (((x369%x370)<=x371)^x372);

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x373 = 266669556825938LLU;
	int16_t x374 = -1;
	volatile int32_t t91 = 246002837;

	t91 = (((x373%x374)<=x375)^x376);

	if (t91 != 254) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x377 = 5385;
	uint8_t x378 = 72U;
	int8_t x379 = INT8_MIN;
	int64_t x380 = 48251123324436LL;

	t92 = (((x377%x378)<=x379)^x380);

	if (t92 != 48251123324436LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int8_t x382 = -1;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t93 = -114;

	t93 = (((x381%x382)<=x383)^x384);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	uint64_t x386 = 86751LLU;
	static uint16_t x387 = UINT16_MAX;
	int64_t x388 = -1LL;
	volatile int64_t t94 = 1025878475925017551LL;

	t94 = (((x385%x386)<=x387)^x388);

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x389 = -1LL;
	uint32_t x390 = 43124343U;
	int32_t x391 = INT32_MIN;
	volatile int8_t x392 = INT8_MAX;
	int32_t t95 = -27;

	t95 = (((x389%x390)<=x391)^x392);

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	static int64_t x395 = INT64_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t96 = 597U;

	t96 = (((x393%x394)<=x395)^x396);

	if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x397 = UINT32_MAX;
	uint32_t x398 = 24407671U;
	static int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MAX;
	int32_t t97 = -3600;

	t97 = (((x397%x398)<=x399)^x400);

	if (t97 != 32766) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x401 = UINT8_MAX;
	int8_t x403 = INT8_MAX;
	int32_t x404 = -1;
	volatile int32_t t98 = -463607;

	t98 = (((x401%x402)<=x403)^x404);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x405 = UINT64_MAX;
	uint16_t x406 = 104U;
	int32_t x407 = -2750;
	uint32_t x408 = UINT32_MAX;
	volatile uint32_t t99 = 47229910U;

	t99 = (((x405%x406)<=x407)^x408);

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

