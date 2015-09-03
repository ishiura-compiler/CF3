#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int16_t x4 = -15;
uint32_t x11 = 1912U;
int8_t x12 = -23;
static int8_t x21 = INT8_MIN;
int64_t x25 = INT64_MIN;
int32_t x27 = INT32_MIN;
static int8_t x32 = INT8_MIN;
int32_t x33 = 165181;
int32_t t10 = -7;
static int32_t t11 = -125;
uint8_t x49 = 27U;
uint32_t x54 = 5818713U;
int8_t x57 = INT8_MIN;
volatile int16_t x65 = INT16_MIN;
uint64_t x66 = 3608108942LLU;
int8_t x75 = -58;
static uint64_t x77 = 345787LLU;
static int64_t x92 = INT64_MAX;
volatile int8_t x93 = INT8_MIN;
uint64_t x95 = 1LLU;
uint8_t x96 = 21U;
int32_t t23 = 28;
static int16_t x100 = -1;
int16_t x102 = INT16_MAX;
static int32_t x104 = INT32_MIN;
volatile uint32_t t25 = 92044U;
static uint16_t x105 = 22401U;
int32_t t26 = -3989394;
uint32_t x110 = UINT32_MAX;
int16_t x115 = -321;
int8_t x118 = INT8_MAX;
static int64_t x123 = -4136793425375120235LL;
int64_t x125 = -61166LL;
int32_t x132 = INT32_MIN;
int32_t x140 = 1;
uint16_t x142 = 30U;
uint16_t x151 = UINT16_MAX;
volatile int64_t x153 = -1LL;
static int32_t x161 = 507252298;
volatile int64_t x164 = INT64_MIN;
volatile int32_t t41 = 531509594;
int16_t x176 = 5;
int8_t x186 = -1;
int32_t x188 = INT32_MIN;
static uint32_t x189 = UINT32_MAX;
static int32_t t48 = INT32_MAX;
static uint16_t x199 = 10U;
uint32_t t49 = 655U;
uint64_t x211 = UINT64_MAX;
volatile int16_t x216 = INT16_MIN;
static int64_t x219 = INT64_MIN;
int32_t x226 = -1;
volatile int32_t t56 = -183978;
static int8_t x231 = 13;
static volatile int32_t t57 = 9;
static int64_t x234 = INT64_MAX;
volatile uint64_t t58 = 4140019LLU;
uint16_t x237 = UINT16_MAX;
static int64_t x238 = -13292LL;
int8_t x246 = INT8_MIN;
uint64_t x249 = UINT64_MAX;
volatile int16_t x250 = INT16_MAX;
uint64_t x256 = 29LLU;
int32_t x262 = -1;
uint16_t x263 = 2019U;
int16_t x272 = 513;
int32_t x274 = INT32_MAX;
uint16_t x278 = 11308U;
int32_t x283 = INT32_MIN;
int32_t t70 = -1452;
int8_t x286 = -1;
volatile int64_t t71 = INT64_MIN;
int16_t x302 = INT16_MIN;
static uint8_t x306 = 11U;
int32_t t76 = -1551;
int32_t t77 = 1565;
int16_t x313 = INT16_MAX;
static volatile int64_t x315 = -1LL;
volatile int32_t t78 = 0;
int64_t t80 = 26514919531LL;
volatile int8_t x329 = -4;
int64_t x334 = INT64_MAX;
volatile int32_t x340 = INT32_MIN;
int32_t t84 = -9;
uint16_t x343 = 5364U;
uint8_t x345 = 7U;
int8_t x352 = INT8_MIN;
int32_t t87 = 19951277;
static int16_t x354 = 3593;
uint64_t x355 = 564019457020459LLU;
int64_t x356 = INT64_MIN;
volatile uint16_t x364 = UINT16_MAX;
int16_t x377 = INT16_MIN;
volatile int32_t t94 = 1206309;
static volatile uint32_t t95 = 8754U;
static volatile int64_t x396 = INT64_MAX;
volatile int32_t t98 = 163;
static int8_t x397 = 13;
static volatile int32_t t99 = 246464232;


void f0(void) {
	uint8_t x2 = 0U;
	uint16_t x3 = 2U;
	volatile int32_t t0 = -4277914;

	t0 = (x1|((x2|x3)<=x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile int16_t x6 = 0;
	static int64_t x7 = INT64_MAX;
	int8_t x8 = 0;
	int32_t t1 = 119824911;

	t1 = (x5|((x6|x7)<=x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	int8_t x10 = INT8_MIN;
	static int32_t t2 = 5738;

	t2 = (x9|((x10|x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = 16;
	int64_t x15 = -1LL;
	uint16_t x16 = 3289U;
	int32_t t3 = 2764336;

	t3 = (x13|((x14|x15)<=x16));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	volatile uint16_t x18 = UINT16_MAX;
	int64_t x19 = -1052456LL;
	static uint64_t x20 = UINT64_MAX;
	static volatile int64_t t4 = -408721979LL;

	t4 = (x17|((x18|x19)<=x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = -1;
	int8_t x23 = INT8_MIN;
	static volatile uint8_t x24 = 88U;
	int32_t t5 = -18334316;

	t5 = (x21|((x22|x23)<=x24));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 77U;
	volatile uint16_t x28 = UINT16_MAX;
	static volatile int64_t t6 = INT64_MIN;

	t6 = (x25|((x26|x27)<=x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MIN;
	int32_t x31 = -1;
	volatile int32_t t7 = -976962;

	t7 = (x29|((x30|x31)<=x32));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	int64_t x35 = -1LL;
	int32_t x36 = -1;
	int32_t t8 = 4166;

	t8 = (x33|((x34|x35)<=x36));

	if (t8 != 165181) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 348244U;
	uint16_t x38 = 14U;
	int8_t x39 = 2;
	volatile uint32_t x40 = UINT32_MAX;
	static volatile uint32_t t9 = 80543850U;

	t9 = (x37|((x38|x39)<=x40));

	if (t9 != 348245U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 2765961LLU;
	int64_t x43 = -1LL;
	int16_t x44 = INT16_MAX;

	t10 = (x41|((x42|x43)<=x44));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	volatile int16_t x48 = -1;

	t11 = (x45|((x46|x47)<=x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x50 = -1;
	uint64_t x51 = UINT64_MAX;
	volatile uint32_t x52 = 10003810U;
	int32_t t12 = 3;

	t12 = (x49|((x50|x51)<=x52));

	if (t12 != 27) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	int32_t x55 = 13407699;
	int64_t x56 = INT64_MIN;
	uint64_t t13 = UINT64_MAX;

	t13 = (x53|((x54|x55)<=x56));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -7185809;
	int32_t x59 = -1778;
	int64_t x60 = -1LL;
	volatile int32_t t14 = -5;

	t14 = (x57|((x58|x59)<=x60));

	if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int32_t x62 = -2;
	static int32_t x63 = INT32_MAX;
	volatile int64_t x64 = INT64_MIN;
	int32_t t15 = -3229065;

	t15 = (x61|((x62|x63)<=x64));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x67 = INT64_MIN;
	volatile int32_t x68 = -1;
	int32_t t16 = -188;

	t16 = (x65|((x66|x67)<=x68));

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 5159317016489181LLU;
	static uint32_t x70 = 80868902U;
	int8_t x71 = -1;
	volatile int32_t x72 = -36;
	static volatile uint64_t t17 = 664874LLU;

	t17 = (x69|((x70|x71)<=x72));

	if (t17 != 5159317016489181LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 72990226654238679LL;
	static int8_t x74 = INT8_MIN;
	volatile int16_t x76 = 2;
	volatile int64_t t18 = 7LL;

	t18 = (x73|((x74|x75)<=x76));

	if (t18 != 72990226654238679LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x78 = 1738;
	static int32_t x79 = -1;
	int32_t x80 = -1;
	uint64_t t19 = 568017481LLU;

	t19 = (x77|((x78|x79)<=x80));

	if (t19 != 345787LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 134U;
	uint16_t x82 = 1660U;
	static int8_t x83 = 1;
	volatile uint16_t x84 = 110U;
	int32_t t20 = 102494;

	t20 = (x81|((x82|x83)<=x84));

	if (t20 != 134) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 21879U;
	int64_t x86 = 1128LL;
	static int64_t x87 = 401700347457666211LL;
	volatile int8_t x88 = 0;
	volatile int32_t t21 = -13;

	t21 = (x85|((x86|x87)<=x88));

	if (t21 != 21879) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 63U;
	static uint8_t x90 = 3U;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t t22 = -158;

	t22 = (x89|((x90|x91)<=x92));

	if (t22 != 63) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = 117U;

	t23 = (x93|((x94|x95)<=x96));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	static uint64_t x98 = 1614LLU;
	int16_t x99 = INT16_MAX;
	uint64_t t24 = UINT64_MAX;

	t24 = (x97|((x98|x99)<=x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 1U;
	int8_t x103 = -6;

	t25 = (x101|((x102|x103)<=x104));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = -1LL;
	int64_t x107 = INT64_MAX;
	int64_t x108 = 272833808764LL;

	t26 = (x105|((x106|x107)<=x108));

	if (t26 != 22401) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = 1631U;
	static int16_t x111 = -1;
	int16_t x112 = -187;
	volatile int32_t t27 = 252109;

	t27 = (x109|((x110|x111)<=x112));

	if (t27 != 1631) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 1548U;
	int32_t x114 = INT32_MIN;
	volatile int32_t x116 = -125;
	int32_t t28 = 1586680;

	t28 = (x113|((x114|x115)<=x116));

	if (t28 != 1549) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -1;
	int32_t x119 = -1;
	static int8_t x120 = INT8_MIN;
	int32_t t29 = -1;

	t29 = (x117|((x118|x119)<=x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = 7;
	int16_t x122 = -23;
	static uint16_t x124 = 6U;
	volatile int32_t t30 = -13812400;

	t30 = (x121|((x122|x123)<=x124));

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -4202;
	int8_t x127 = INT8_MIN;
	uint16_t x128 = 0U;
	int64_t t31 = -567LL;

	t31 = (x125|((x126|x127)<=x128));

	if (t31 != -61165LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = -1;
	int32_t t32 = -151;

	t32 = (x129|((x130|x131)<=x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 8;
	int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	uint8_t x136 = 8U;
	int32_t t33 = 224476;

	t33 = (x133|((x134|x135)<=x136));

	if (t33 != 9) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 22U;
	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MIN;
	volatile int32_t t34 = -6752;

	t34 = (x137|((x138|x139)<=x140));

	if (t34 != 23) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x141 = 23154768;
	static int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	int32_t t35 = 14;

	t35 = (x141|((x142|x143)<=x144));

	if (t35 != 23154768) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x145 = 139543631U;
	volatile int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	int64_t x148 = 4109301318462LL;
	uint32_t t36 = 5576U;

	t36 = (x145|((x146|x147)<=x148));

	if (t36 != 139543631U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 175U;
	static int32_t x150 = INT32_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = 199308;

	t37 = (x149|((x150|x151)<=x152));

	if (t37 != 175) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x154 = -275875037;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = INT32_MAX;
	static int64_t t38 = -1LL;

	t38 = (x153|((x154|x155)<=x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -26;
	int64_t x158 = INT64_MIN;
	uint8_t x159 = 22U;
	int32_t x160 = 0;
	static int32_t t39 = 203017301;

	t39 = (x157|((x158|x159)<=x160));

	if (t39 != -25) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = INT32_MAX;
	static volatile int64_t x163 = INT64_MAX;
	volatile int32_t t40 = 318;

	t40 = (x161|((x162|x163)<=x164));

	if (t40 != 507252298) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = UINT8_MAX;
	int16_t x166 = INT16_MIN;
	static volatile int64_t x167 = -3085144747949790039LL;
	static int8_t x168 = INT8_MIN;

	t41 = (x165|((x166|x167)<=x168));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = -71314;
	static uint64_t x170 = 1321232571746LLU;
	uint64_t x171 = 10810LLU;
	int32_t x172 = -17280346;
	static int32_t t42 = 0;

	t42 = (x169|((x170|x171)<=x172));

	if (t42 != -71313) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = 19742040235267505LL;
	uint8_t x174 = 26U;
	int32_t x175 = INT32_MIN;
	volatile int64_t t43 = 2730410LL;

	t43 = (x173|((x174|x175)<=x176));

	if (t43 != 19742040235267505LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -3784448356293953LL;
	int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MIN;
	volatile uint16_t x180 = UINT16_MAX;
	volatile int64_t t44 = -806377291743237041LL;

	t44 = (x177|((x178|x179)<=x180));

	if (t44 != -3784448356293953LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 21;
	static uint8_t x182 = 118U;
	static uint32_t x183 = UINT32_MAX;
	volatile int32_t x184 = 200;
	volatile int32_t t45 = 21054;

	t45 = (x181|((x182|x183)<=x184));

	if (t45 != 21) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = 0;
	static int8_t x187 = 25;
	volatile int32_t t46 = -2802276;

	t46 = (x185|((x186|x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	static int16_t x191 = INT16_MAX;
	static uint64_t x192 = 2814287142264LLU;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x189|((x190|x191)<=x192));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MAX;
	int64_t x194 = 3623477789024047773LL;
	int32_t x195 = -1;
	uint8_t x196 = 3U;

	t48 = (x193|((x194|x195)<=x196));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 161133264U;
	volatile int64_t x198 = 38201LL;
	uint16_t x200 = 7U;

	t49 = (x197|((x198|x199)<=x200));

	if (t49 != 161133264U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static int8_t x202 = 10;
	static uint8_t x203 = UINT8_MAX;
	int64_t x204 = INT64_MIN;
	static volatile int32_t t50 = 15045;

	t50 = (x201|((x202|x203)<=x204));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 1588LL;
	static volatile uint8_t x206 = 10U;
	volatile int32_t x207 = -1;
	int32_t x208 = -1;
	int64_t t51 = -258810LL;

	t51 = (x205|((x206|x207)<=x208));

	if (t51 != 1589LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	int32_t x210 = INT32_MAX;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -122092;

	t52 = (x209|((x210|x211)<=x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 6U;
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MIN;
	int32_t t53 = 1;

	t53 = (x213|((x214|x215)<=x216));

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint64_t x218 = 7483LLU;
	int8_t x220 = 59;
	static int32_t t54 = 572135130;

	t54 = (x217|((x218|x219)<=x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -3278511;
	volatile uint8_t x222 = UINT8_MAX;
	uint8_t x223 = UINT8_MAX;
	uint64_t x224 = UINT64_MAX;
	int32_t t55 = 14508882;

	t55 = (x221|((x222|x223)<=x224));

	if (t55 != -3278511) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -3;
	int16_t x227 = -1;
	static volatile int32_t x228 = -141;

	t56 = (x225|((x226|x227)<=x228));

	if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	volatile uint8_t x230 = 3U;
	volatile int16_t x232 = INT16_MIN;

	t57 = (x229|((x230|x231)<=x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 7828244226678454325LLU;
	static volatile uint32_t x235 = UINT32_MAX;
	int32_t x236 = INT32_MIN;

	t58 = (x233|((x234|x235)<=x236));

	if (t58 != 7828244226678454325LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x239 = -12;
	int16_t x240 = 1;
	volatile int32_t t59 = -22;

	t59 = (x237|((x238|x239)<=x240));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x241 = -1;
	static volatile int8_t x242 = -7;
	int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MAX;
	volatile int32_t t60 = 62;

	t60 = (x241|((x242|x243)<=x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 1455LLU;
	static int8_t x247 = 2;
	int16_t x248 = -1;
	uint64_t t61 = 79427443LLU;

	t61 = (x245|((x246|x247)<=x248));

	if (t61 != 1455LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x251 = 11U;
	static int64_t x252 = 1069450042165998LL;
	uint64_t t62 = UINT64_MAX;

	t62 = (x249|((x250|x251)<=x252));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 1;
	uint16_t x254 = 0U;
	uint16_t x255 = 1U;
	volatile int32_t t63 = 314580;

	t63 = (x253|((x254|x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	uint32_t x258 = 194U;
	uint32_t x259 = UINT32_MAX;
	static uint32_t x260 = 582328U;
	static int32_t t64 = -1041714641;

	t64 = (x257|((x258|x259)<=x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	volatile uint8_t x264 = UINT8_MAX;
	int32_t t65 = -16;

	t65 = (x261|((x262|x263)<=x264));

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	volatile int8_t x266 = -3;
	int64_t x267 = 13256526214LL;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = 720946291;

	t66 = (x265|((x266|x267)<=x268));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x270 = INT32_MIN;
	int32_t x271 = INT32_MAX;
	int32_t t67 = 1818;

	t67 = (x269|((x270|x271)<=x272));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = -1350;
	uint16_t x275 = UINT16_MAX;
	volatile int64_t x276 = -27890LL;
	volatile int32_t t68 = 10;

	t68 = (x273|((x274|x275)<=x276));

	if (t68 != -1350) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = 5390741162LLU;
	int32_t x279 = 87489337;
	int32_t x280 = INT32_MAX;
	uint64_t t69 = 5362646LLU;

	t69 = (x277|((x278|x279)<=x280));

	if (t69 != 5390741163LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	volatile int8_t x282 = INT8_MIN;
	volatile uint64_t x284 = UINT64_MAX;

	t70 = (x281|((x282|x283)<=x284));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	int16_t x287 = -20;
	volatile int32_t x288 = INT32_MIN;

	t71 = (x285|((x286|x287)<=x288));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 7U;
	uint32_t x290 = UINT32_MAX;
	int64_t x291 = INT64_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = 7308479;

	t72 = (x289|((x290|x291)<=x292));

	if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	static volatile int8_t x294 = 1;
	uint8_t x295 = 24U;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = INT32_MAX;

	t73 = (x293|((x294|x295)<=x296));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -413;
	int8_t x298 = INT8_MAX;
	int8_t x299 = INT8_MIN;
	volatile int64_t x300 = -441922669167428LL;
	static int32_t t74 = 3258683;

	t74 = (x297|((x298|x299)<=x300));

	if (t74 != -413) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = UINT32_MAX;
	uint8_t x303 = 63U;
	int8_t x304 = INT8_MIN;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x301|((x302|x303)<=x304));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int64_t x307 = 41LL;
	int16_t x308 = 97;

	t76 = (x305|((x306|x307)<=x308));

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -4;
	uint64_t x310 = UINT64_MAX;
	uint16_t x311 = 23812U;
	volatile int64_t x312 = -668148189LL;

	t77 = (x309|((x310|x311)<=x312));

	if (t77 != -4) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 15435LLU;
	uint64_t x316 = 18006576865449711LLU;

	t78 = (x313|((x314|x315)<=x316));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -1;
	static int32_t x318 = INT32_MAX;
	int32_t x319 = -1;
	volatile int16_t x320 = 35;
	int32_t t79 = 45444556;

	t79 = (x317|((x318|x319)<=x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -42112502427374LL;
	uint32_t x322 = UINT32_MAX;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = -1LL;

	t80 = (x321|((x322|x323)<=x324));

	if (t80 != -42112502427374LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	uint16_t x328 = 1U;
	int32_t t81 = 14000845;

	t81 = (x325|((x326|x327)<=x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x330 = 4277581308182LLU;
	static int64_t x331 = -1LL;
	volatile int16_t x332 = -1200;
	int32_t t82 = 397572293;

	t82 = (x329|((x330|x331)<=x332));

	if (t82 != -4) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	int16_t x335 = -24;
	volatile int32_t x336 = INT32_MAX;
	static int32_t t83 = -77;

	t83 = (x333|((x334|x335)<=x336));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;

	t84 = (x337|((x338|x339)<=x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	volatile uint16_t x342 = UINT16_MAX;
	uint16_t x344 = 1617U;
	volatile int64_t t85 = INT64_MAX;

	t85 = (x341|((x342|x343)<=x344));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = UINT32_MAX;
	int64_t x347 = 32LL;
	uint64_t x348 = UINT64_MAX;
	int32_t t86 = -39;

	t86 = (x345|((x346|x347)<=x348));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = UINT16_MAX;
	volatile uint32_t x350 = 7877U;
	volatile uint16_t x351 = 1400U;

	t87 = (x349|((x350|x351)<=x352));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 59U;
	static volatile int32_t t88 = -28231;

	t88 = (x353|((x354|x355)<=x356));

	if (t88 != 59) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 1U;
	int32_t x358 = INT32_MIN;
	int64_t x359 = INT64_MIN;
	int64_t x360 = 53069LL;
	static int32_t t89 = 25374;

	t89 = (x357|((x358|x359)<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	static int8_t x362 = -1;
	uint8_t x363 = 57U;
	static volatile int32_t t90 = -20029;

	t90 = (x361|((x362|x363)<=x364));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 0;
	int64_t x366 = INT64_MIN;
	static int16_t x367 = INT16_MAX;
	static int8_t x368 = INT8_MIN;
	int32_t t91 = -30610;

	t91 = (x365|((x366|x367)<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -32;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	int16_t x372 = -502;
	int32_t t92 = -23132807;

	t92 = (x369|((x370|x371)<=x372));

	if (t92 != -31) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1694375LL;
	int64_t x374 = INT64_MIN;
	static int64_t x375 = INT64_MIN;
	int16_t x376 = 5407;
	volatile int64_t t93 = -21070125LL;

	t93 = (x373|((x374|x375)<=x376));

	if (t93 != -1694375LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MAX;

	t94 = (x377|((x378|x379)<=x380));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = 491U;
	int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MAX;
	int16_t x384 = -1;

	t95 = (x381|((x382|x383)<=x384));

	if (t95 != 491U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = -1558035;
	uint16_t x386 = 29712U;
	int32_t x387 = -118;
	int64_t x388 = INT64_MAX;
	volatile int32_t t96 = 17;

	t96 = (x385|((x386|x387)<=x388));

	if (t96 != -1558035) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	int16_t x390 = -327;
	int16_t x391 = INT16_MIN;
	int16_t x392 = -1;
	int32_t t97 = -56;

	t97 = (x389|((x390|x391)<=x392));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	volatile uint8_t x394 = 6U;
	static int64_t x395 = 829843712464645LL;

	t98 = (x393|((x394|x395)<=x396));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x398 = -20LL;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;

	t99 = (x397|((x398|x399)<=x400));

	if (t99 != 13) { NG(); } else { ; }
	
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

