#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x1 = INT32_MIN;
static uint64_t x12 = 17749LLU;
int8_t x14 = INT8_MIN;
int64_t x26 = INT64_MAX;
int16_t x32 = INT16_MIN;
volatile int64_t x36 = INT64_MIN;
static volatile uint64_t t8 = 2160904121215LLU;
static volatile int64_t t10 = 294279LL;
int32_t t12 = 1918317;
static uint64_t x55 = UINT64_MAX;
uint16_t x58 = 78U;
int8_t x64 = -1;
int32_t x67 = INT32_MIN;
int8_t x80 = INT8_MAX;
volatile uint32_t x81 = 3U;
static uint32_t x82 = 100734U;
static uint16_t x83 = UINT16_MAX;
int8_t x91 = -8;
static uint32_t x93 = UINT32_MAX;
int8_t x95 = INT8_MIN;
int16_t x96 = -16287;
uint32_t x105 = 41265U;
int16_t x108 = -5;
volatile int8_t x118 = INT8_MAX;
volatile int16_t x126 = -59;
uint16_t x128 = UINT16_MAX;
int32_t x129 = INT32_MIN;
static int8_t x134 = -1;
uint32_t x139 = 403688U;
static volatile int32_t x142 = -12071;
int64_t x144 = INT64_MAX;
static int32_t x145 = INT32_MAX;
uint16_t x151 = 11U;
int16_t x153 = -1;
uint8_t x154 = 2U;
uint16_t x164 = 16489U;
uint8_t x165 = 1U;
int32_t x171 = INT32_MIN;
int64_t x185 = -14781213092LL;
int32_t x187 = INT32_MAX;
volatile int32_t x191 = INT32_MIN;
int64_t x201 = INT64_MAX;
int8_t x204 = INT8_MIN;
uint16_t x208 = 8U;
static volatile int32_t t50 = 1;
int8_t x210 = INT8_MIN;
static volatile int16_t x214 = -9878;
static uint8_t x222 = UINT8_MAX;
int64_t x225 = INT64_MIN;
static uint8_t x227 = UINT8_MAX;
static int16_t x230 = INT16_MAX;
int32_t x234 = -1;
static int32_t x240 = INT32_MAX;
int64_t x244 = -1LL;
static volatile int8_t x248 = -8;
volatile uint64_t x252 = 1052485260627LLU;
int64_t t62 = -83275528665828LL;
static uint16_t x265 = 39U;
static uint64_t x270 = 38636LLU;
int64_t x273 = 9044108188625107LL;
int64_t t67 = 284888361388LL;
volatile uint32_t x279 = UINT32_MAX;
volatile int32_t t68 = 7321;
volatile int32_t t70 = 733;
static int32_t x290 = INT32_MAX;
int32_t x292 = INT32_MIN;
uint8_t x300 = 1U;
int64_t x303 = INT64_MIN;
static int32_t x307 = -30805822;
volatile uint8_t x309 = 43U;
volatile int8_t x310 = -1;
uint8_t x318 = 5U;
volatile int64_t x319 = INT64_MIN;
int8_t x336 = 27;
uint16_t x340 = 58U;
uint64_t t82 = 845490199LLU;
static volatile uint16_t x343 = UINT16_MAX;
static int16_t x346 = -1;
int8_t x347 = -1;
static uint32_t x353 = 15972U;
int8_t x361 = -1;
static int64_t x366 = -1LL;
uint32_t t90 = 1895U;
int64_t x375 = -1LL;
uint8_t x376 = 2U;
int32_t x381 = -9831596;
int8_t x394 = -8;
uint8_t x398 = 6U;
static int32_t t98 = -58823942;
int64_t x408 = -39772306900381474LL;


void f0(void) {
	static uint8_t x2 = 0U;
	volatile uint64_t x3 = 36LLU;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -27621096;

	t0 = (x1/((x2==x3)^x4));

	if (t0 != 65536) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint64_t x6 = 1023488907956LLU;
	volatile uint8_t x7 = UINT8_MAX;
	int16_t x8 = INT16_MIN;
	volatile int64_t t1 = 35896930LL;

	t1 = (x5/((x6==x7)^x8));

	if (t1 != 281474976710656LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	uint64_t x10 = UINT64_MAX;
	static uint8_t x11 = UINT8_MAX;
	volatile uint64_t t2 = 768976376224LLU;

	t2 = (x9/((x10==x11)^x12));

	if (t2 != 1039311739904336LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint32_t x15 = 178U;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 159;

	t3 = (x13/((x14==x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int16_t x18 = -1;
	volatile int8_t x19 = -5;
	static uint64_t x20 = 188386484LLU;
	volatile uint64_t t4 = 207239441216LLU;

	t4 = (x17/((x18==x19)^x20));

	if (t4 != 48959839586LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	int8_t x22 = 20;
	int16_t x23 = INT16_MAX;
	volatile int32_t x24 = INT32_MIN;
	static int32_t t5 = 899;

	t5 = (x21/((x22==x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -23;
	uint16_t x27 = UINT16_MAX;
	static int8_t x28 = -1;
	int32_t t6 = 1;

	t6 = (x25/((x26==x27)^x28));

	if (t6 != 23) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int8_t x30 = 39;
	uint32_t x31 = 2U;
	static int32_t t7 = 169216;

	t7 = (x29/((x30==x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = UINT64_MAX;
	static uint16_t x34 = 1U;
	static int64_t x35 = -2985977LL;

	t8 = (x33/((x34==x35)^x36));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int32_t x38 = -1;
	int16_t x39 = -1;
	static int16_t x40 = INT16_MIN;
	int64_t t9 = 152411150LL;

	t9 = (x37/((x38==x39)^x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = INT8_MAX;
	static volatile uint16_t x43 = 4U;
	static int32_t x44 = 55;

	t10 = (x41/((x42==x43)^x44));

	if (t10 != -167697673397359560LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 0;
	int16_t x46 = 1;
	uint8_t x47 = 1U;
	static int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -28055179;

	t11 = (x45/((x46==x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 3U;
	static uint64_t x50 = 3815426183703LLU;
	volatile uint16_t x51 = 55U;
	int8_t x52 = INT8_MIN;

	t12 = (x49/((x50==x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 243060U;
	uint64_t x54 = 52LLU;
	static int16_t x56 = -1;
	volatile uint32_t t13 = 221933U;

	t13 = (x53/((x54==x55)^x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 58U;
	static volatile int64_t x59 = 1578151LL;
	static int16_t x60 = INT16_MIN;
	int32_t t14 = 2;

	t14 = (x57/((x58==x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 811583496LLU;
	int64_t x62 = -1LL;
	volatile uint64_t x63 = 13341265539582LLU;
	uint64_t t15 = 1006274697LLU;

	t15 = (x61/((x62==x63)^x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 10U;
	static int8_t x66 = INT8_MIN;
	int16_t x68 = 1254;
	static volatile int32_t t16 = 6051403;

	t16 = (x65/((x66==x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = 0;
	static volatile int8_t x70 = 35;
	uint64_t x71 = 3822822LLU;
	int16_t x72 = -1;
	volatile int32_t t17 = 811931;

	t17 = (x69/((x70==x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int16_t x74 = INT16_MIN;
	volatile uint64_t x75 = 51962606652517LLU;
	uint32_t x76 = 1115718954U;
	uint64_t t18 = 86274986LLU;

	t18 = (x73/((x74==x75)^x76));

	if (t18 != 16533504255LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = UINT64_MAX;
	static uint64_t x78 = 96666LLU;
	volatile int16_t x79 = INT16_MIN;
	volatile uint64_t t19 = 2187949811704192LLU;

	t19 = (x77/((x78==x79)^x80));

	if (t19 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x84 = INT64_MIN;
	int64_t t20 = 0LL;

	t20 = (x81/((x82==x83)^x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x85 = 0;
	int16_t x86 = -1;
	volatile int8_t x87 = 1;
	static int32_t x88 = -114989105;
	volatile int32_t t21 = -26964248;

	t21 = (x85/((x86==x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static int32_t x90 = INT32_MIN;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t22 = 21U;

	t22 = (x89/((x90==x91)^x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = UINT16_MAX;
	volatile uint32_t t23 = 352691U;

	t23 = (x93/((x94==x95)^x96));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int32_t x98 = -36;
	int8_t x99 = 2;
	int16_t x100 = INT16_MAX;
	int32_t t24 = -41531790;

	t24 = (x97/((x98==x99)^x100));

	if (t24 != 65538) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	uint64_t x102 = 6533386LLU;
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 15226;

	t25 = (x101/((x102==x103)^x104));

	if (t25 != 65538) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = 7;
	int16_t x107 = -1;
	volatile uint32_t t26 = 1153754U;

	t26 = (x105/((x106==x107)^x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	volatile uint16_t x110 = UINT16_MAX;
	int64_t x111 = 4752LL;
	uint8_t x112 = 5U;
	volatile int64_t t27 = -5042338005790LL;

	t27 = (x109/((x110==x111)^x112));

	if (t27 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static int64_t x114 = INT64_MIN;
	uint8_t x115 = 1U;
	static int16_t x116 = -1;
	int32_t t28 = 9;

	t28 = (x113/((x114==x115)^x116));

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	volatile int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MAX;
	int32_t t29 = 247379;

	t29 = (x117/((x118==x119)^x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -27;
	int16_t x122 = INT16_MAX;
	int64_t x123 = -1LL;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -4085;

	t30 = (x121/((x122==x123)^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int32_t x127 = INT32_MAX;
	int32_t t31 = -22477174;

	t31 = (x125/((x126==x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MIN;
	int64_t x132 = -1LL;
	volatile int64_t t32 = 36380LL;

	t32 = (x129/((x130==x131)^x132));

	if (t32 != 2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MIN;
	uint8_t x135 = 1U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 5330578;

	t33 = (x133/((x134==x135)^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 992479U;
	static int64_t x138 = 221946847153217LL;
	int8_t x140 = -13;
	volatile uint32_t t34 = 172093U;

	t34 = (x137/((x138==x139)^x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = 61;
	int16_t x143 = INT16_MAX;
	static int64_t t35 = -486LL;

	t35 = (x141/((x142==x143)^x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MAX;
	int8_t x147 = INT8_MAX;
	int32_t x148 = 234363276;
	volatile int32_t t36 = -6111;

	t36 = (x145/((x146==x147)^x148));

	if (t36 != 9) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -1;
	static uint16_t x150 = UINT16_MAX;
	int64_t x152 = INT64_MIN;
	int64_t t37 = 62718LL;

	t37 = (x149/((x150==x151)^x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x155 = INT16_MAX;
	static uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = -275640;

	t38 = (x153/((x154==x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -3;
	int32_t x162 = INT32_MIN;
	static int64_t x163 = INT64_MAX;
	int32_t t39 = 145556;

	t39 = (x161/((x162==x163)^x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MAX;
	static int16_t x168 = 52;
	volatile int32_t t40 = 133;

	t40 = (x165/((x166==x167)^x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 21135U;
	int64_t x170 = INT64_MAX;
	int32_t x172 = -1;
	volatile uint32_t t41 = 64775151U;

	t41 = (x169/((x170==x171)^x172));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x173 = INT8_MIN;
	volatile uint32_t x174 = 6861U;
	volatile int64_t x175 = -142667621077LL;
	int32_t x176 = -1;
	int32_t t42 = -19;

	t42 = (x173/((x174==x175)^x176));

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	static int64_t x178 = INT64_MIN;
	volatile uint16_t x179 = 4U;
	int64_t x180 = INT64_MIN;
	int64_t t43 = -1249226568848268111LL;

	t43 = (x177/((x178==x179)^x180));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = 25104823;
	volatile int64_t x182 = 460961964602LL;
	static volatile uint16_t x183 = 2U;
	uint64_t x184 = 2244LLU;
	volatile uint64_t t44 = 684236962LLU;

	t44 = (x181/((x182==x183)^x184));

	if (t44 != 11187LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x186 = INT32_MIN;
	volatile uint32_t x188 = UINT32_MAX;
	int64_t t45 = -226980LL;

	t45 = (x185/((x186==x187)^x188));

	if (t45 != -3LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = 35LLU;
	uint32_t x190 = UINT32_MAX;
	int32_t x192 = INT32_MIN;
	uint64_t t46 = 2810742244997798210LLU;

	t46 = (x189/((x190==x191)^x192));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = 1512463439329634LL;
	volatile int16_t x194 = INT16_MIN;
	uint32_t x195 = 220U;
	int8_t x196 = -1;
	volatile int64_t t47 = 301896872LL;

	t47 = (x193/((x194==x195)^x196));

	if (t47 != -1512463439329634LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = 154223074285637350LLU;
	volatile uint64_t t48 = 28774051658418991LLU;

	t48 = (x197/((x198==x199)^x200));

	if (t48 != 119LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	static int64_t t49 = 68287953393756LL;

	t49 = (x201/((x202==x203)^x204));

	if (t49 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 28U;
	int16_t x206 = -1;
	int16_t x207 = INT16_MIN;

	t50 = (x205/((x206==x207)^x208));

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x209 = INT8_MAX;
	int16_t x211 = -15;
	int32_t x212 = -1;
	static volatile int32_t t51 = -12002488;

	t51 = (x209/((x210==x211)^x212));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = UINT8_MAX;
	static int64_t x215 = INT64_MIN;
	volatile int32_t x216 = -1;
	volatile int32_t t52 = -685179930;

	t52 = (x213/((x214==x215)^x216));

	if (t52 != -255) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -1;
	uint16_t x218 = 4088U;
	int16_t x219 = INT16_MAX;
	int32_t x220 = INT32_MIN;
	int32_t t53 = -756693;

	t53 = (x217/((x218==x219)^x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -1;
	uint16_t x223 = UINT16_MAX;
	int8_t x224 = -38;
	int32_t t54 = 37;

	t54 = (x221/((x222==x223)^x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x226 = -7;
	static int32_t x228 = INT32_MAX;
	volatile int64_t t55 = -214608079770782382LL;

	t55 = (x225/((x226==x227)^x228));

	if (t55 != -4294967298LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x229 = -1;
	int16_t x231 = INT16_MIN;
	int64_t x232 = 155943825926951513LL;
	int64_t t56 = 714943519911807638LL;

	t56 = (x229/((x230==x231)^x232));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	int64_t x235 = INT64_MIN;
	volatile int32_t x236 = -82;
	volatile int64_t t57 = -1LL;

	t57 = (x233/((x234==x235)^x236));

	if (t57 != -112480146790911900LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 495LLU;
	int64_t x238 = INT64_MAX;
	int16_t x239 = -1;
	static uint64_t t58 = 25895602042LLU;

	t58 = (x237/((x238==x239)^x240));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x241 = INT16_MIN;
	uint32_t x242 = 9U;
	static volatile int16_t x243 = INT16_MIN;
	int64_t t59 = -275172404387769LL;

	t59 = (x241/((x242==x243)^x244));

	if (t59 != 32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = 5U;
	static uint64_t x246 = 1493692461597927LLU;
	int8_t x247 = INT8_MIN;
	volatile int32_t t60 = -22697;

	t60 = (x245/((x246==x247)^x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x250 = -1;
	int8_t x251 = INT8_MIN;
	volatile uint64_t t61 = 604635771023455LLU;

	t61 = (x249/((x250==x251)^x252));

	if (t61 != 17526843LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MAX;
	volatile int16_t x254 = INT16_MIN;
	volatile int16_t x255 = INT16_MIN;
	int64_t x256 = 338822621LL;

	t62 = (x253/((x254==x255)^x256));

	if (t62 != 27221830811LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	uint8_t x258 = 41U;
	int16_t x259 = 12739;
	int16_t x260 = 137;
	volatile int32_t t63 = -3;

	t63 = (x257/((x258==x259)^x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	static int8_t x262 = 27;
	static int16_t x263 = -1;
	int32_t x264 = -1;
	int32_t t64 = -483864122;

	t64 = (x261/((x262==x263)^x264));

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x266 = INT16_MAX;
	static volatile int64_t x267 = INT64_MAX;
	uint16_t x268 = 50U;
	volatile int32_t t65 = -7;

	t65 = (x265/((x266==x267)^x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x269 = 218486551U;
	uint64_t x271 = 2841074265557035574LLU;
	int16_t x272 = -495;
	volatile uint32_t t66 = 22U;

	t66 = (x269/((x270==x271)^x272));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x274 = -13;
	int64_t x275 = -230944882374083LL;
	static volatile int32_t x276 = INT32_MIN;

	t67 = (x273/((x274==x275)^x276));

	if (t67 != -4211491LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MAX;
	uint8_t x278 = 1U;
	volatile int32_t x280 = 351060;

	t68 = (x277/((x278==x279)^x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = 208;
	volatile int32_t x282 = INT32_MAX;
	static uint32_t x283 = 3098U;
	int64_t x284 = INT64_MIN;
	static int64_t t69 = 156562744LL;

	t69 = (x281/((x282==x283)^x284));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x285 = 2U;
	uint32_t x286 = 605772U;
	int16_t x287 = 47;
	uint8_t x288 = UINT8_MAX;

	t70 = (x285/((x286==x287)^x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x289 = -1;
	uint8_t x291 = UINT8_MAX;
	int32_t t71 = -14;

	t71 = (x289/((x290==x291)^x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = 8201995;
	uint8_t x294 = 16U;
	volatile int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	static int32_t t72 = 13847;

	t72 = (x293/((x294==x295)^x296));

	if (t72 != 64582) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	static uint32_t x298 = 28575U;
	int8_t x299 = INT8_MIN;
	static volatile int32_t t73 = 100791447;

	t73 = (x297/((x298==x299)^x300));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x301 = 43989277LLU;
	static uint64_t x302 = 815396354038401274LLU;
	int64_t x304 = INT64_MIN;
	static uint64_t t74 = 3843779468295204LLU;

	t74 = (x301/((x302==x303)^x304));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MIN;
	uint64_t x306 = 481923451437LLU;
	volatile int64_t x308 = 68235132875LL;
	static int64_t t75 = -10LL;

	t75 = (x305/((x306==x307)^x308));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x311 = INT32_MAX;
	int8_t x312 = 3;
	int32_t t76 = -1;

	t76 = (x309/((x310==x311)^x312));

	if (t76 != 14) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = -1;
	int64_t x314 = INT64_MIN;
	int32_t x315 = -1;
	static uint32_t x316 = 5U;
	uint32_t t77 = 387272563U;

	t77 = (x313/((x314==x315)^x316));

	if (t77 != 858993459U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x317 = INT64_MIN;
	volatile int32_t x320 = INT32_MIN;
	int64_t t78 = -826LL;

	t78 = (x317/((x318==x319)^x320));

	if (t78 != 4294967296LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = INT32_MAX;
	volatile uint32_t x322 = UINT32_MAX;
	int32_t x323 = INT32_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t79 = -271;

	t79 = (x321/((x322==x323)^x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -7;
	static volatile uint64_t x330 = UINT64_MAX;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t80 = -326;

	t80 = (x329/((x330==x331)^x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = INT16_MAX;
	static int64_t x334 = 34722233457446668LL;
	static int8_t x335 = -1;
	int32_t t81 = -69481;

	t81 = (x333/((x334==x335)^x336));

	if (t81 != 1213) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x337 = 51930492257660636LLU;
	volatile uint64_t x338 = 485LLU;
	int16_t x339 = -15016;

	t82 = (x337/((x338==x339)^x340));

	if (t82 != 895353314787252LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x341 = UINT16_MAX;
	int8_t x342 = INT8_MIN;
	int64_t x344 = 878LL;
	int64_t t83 = 3633355896601683247LL;

	t83 = (x341/((x342==x343)^x344));

	if (t83 != 74LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = INT64_MIN;
	volatile int32_t x348 = 48596;
	int64_t t84 = -2995LL;

	t84 = (x345/((x346==x347)^x348));

	if (t84 != -189793033250093LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x350 = 0U;
	int32_t x351 = -1;
	int32_t x352 = -1;
	int32_t t85 = 17;

	t85 = (x349/((x350==x351)^x352));

	if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x354 = INT32_MAX;
	static uint64_t x355 = 1937906990880LLU;
	volatile int32_t x356 = 1;
	volatile uint32_t t86 = 91412168U;

	t86 = (x353/((x354==x355)^x356));

	if (t86 != 15972U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x358 = -1;
	int8_t x359 = 1;
	uint32_t x360 = UINT32_MAX;
	uint32_t t87 = 284113357U;

	t87 = (x357/((x358==x359)^x360));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x362 = INT32_MIN;
	volatile int32_t x363 = -3078575;
	static int32_t x364 = -1;
	int32_t t88 = -317;

	t88 = (x361/((x362==x363)^x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = UINT16_MAX;
	volatile int8_t x367 = -1;
	volatile int32_t x368 = -1;
	int32_t t89 = 3979948;

	t89 = (x365/((x366==x367)^x368));

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x369 = 11169U;
	uint8_t x370 = 13U;
	volatile int64_t x371 = INT64_MIN;
	volatile uint32_t x372 = UINT32_MAX;

	t90 = (x369/((x370==x371)^x372));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x373 = INT32_MIN;
	uint16_t x374 = 42U;
	int32_t t91 = -3854432;

	t91 = (x373/((x374==x375)^x376));

	if (t91 != -1073741824) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MAX;
	uint8_t x378 = 6U;
	static uint64_t x379 = 437390385LLU;
	int16_t x380 = INT16_MIN;
	static int64_t t92 = -831328901702LL;

	t92 = (x377/((x378==x379)^x380));

	if (t92 != -281474976710655LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x382 = 59755U;
	uint64_t x383 = 7217761499432342LLU;
	int16_t x384 = INT16_MIN;
	volatile int32_t t93 = 1382354;

	t93 = (x381/((x382==x383)^x384));

	if (t93 != 300) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x385 = 78978034LLU;
	int32_t x386 = -1;
	int32_t x387 = 132;
	uint8_t x388 = 30U;
	volatile uint64_t t94 = 132233374087089546LLU;

	t94 = (x385/((x386==x387)^x388));

	if (t94 != 2632601LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = -1;
	uint8_t x391 = 15U;
	int64_t x392 = -1LL;
	volatile int64_t t95 = -2375LL;

	t95 = (x389/((x390==x391)^x392));

	if (t95 != 2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = UINT8_MAX;
	volatile int32_t x395 = -1;
	int32_t x396 = -3895498;
	int32_t t96 = 43653;

	t96 = (x393/((x394==x395)^x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = INT16_MAX;
	int16_t x399 = -50;
	uint64_t x400 = 31459708800LLU;
	volatile uint64_t t97 = 10111158882657LLU;

	t97 = (x397/((x398==x399)^x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x401 = 189U;
	int64_t x402 = 1608404671915787151LL;
	uint8_t x403 = 86U;
	static uint16_t x404 = 938U;

	t98 = (x401/((x402==x403)^x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x405 = INT32_MAX;
	uint32_t x406 = 102906598U;
	static int64_t x407 = 69LL;
	volatile int64_t t99 = 12762LL;

	t99 = (x405/((x406==x407)^x408));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

