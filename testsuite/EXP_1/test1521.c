#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x15 = INT32_MIN;
int8_t x16 = -1;
volatile int32_t t3 = 534870;
uint32_t x17 = UINT32_MAX;
uint16_t x18 = 142U;
volatile int32_t x20 = INT32_MIN;
uint64_t t4 = 188LLU;
uint32_t x25 = UINT32_MAX;
volatile int32_t x27 = 31909680;
volatile int8_t x36 = INT8_MIN;
volatile int32_t t9 = 14;
int64_t x45 = INT64_MIN;
uint8_t x47 = 48U;
static int16_t x52 = 1;
static int16_t x55 = INT16_MIN;
int64_t x58 = INT64_MAX;
static int64_t x65 = -523526986970LL;
uint32_t t16 = 472260U;
int32_t x73 = INT32_MAX;
static int8_t x80 = -1;
int32_t x85 = -65809309;
volatile int8_t x87 = INT8_MAX;
int8_t x88 = -2;
int16_t x92 = -4;
int8_t x95 = -1;
volatile int32_t x96 = INT32_MAX;
int32_t x97 = 358;
int8_t x102 = -1;
uint64_t x103 = UINT64_MAX;
int8_t x109 = -1;
int16_t x116 = INT16_MIN;
int32_t x118 = -1;
uint8_t x120 = 53U;
int64_t t29 = -6326536604LL;
int64_t x122 = -1LL;
int8_t x127 = INT8_MIN;
int16_t x142 = -318;
volatile uint64_t x143 = UINT64_MAX;
uint64_t t35 = 11LLU;
volatile int32_t x149 = INT32_MIN;
int32_t t37 = 456948;
int16_t x153 = INT16_MIN;
volatile int8_t x165 = INT8_MAX;
static int64_t x170 = INT64_MIN;
int64_t x174 = -1LL;
int8_t x175 = INT8_MIN;
int16_t x177 = 1;
static volatile int16_t x178 = 4001;
volatile int8_t x180 = -1;
int16_t x187 = -1;
uint32_t x189 = UINT32_MAX;
static int16_t x191 = -1;
volatile int32_t t47 = -106;
volatile int64_t x194 = INT64_MIN;
volatile uint64_t x206 = 1271LLU;
volatile uint64_t x212 = 10LLU;
volatile int64_t t54 = 2844435080937393296LL;
static int32_t x221 = INT32_MIN;
static volatile int16_t x222 = 3525;
int32_t x230 = INT32_MIN;
int32_t x234 = INT32_MIN;
static uint8_t x244 = 0U;
uint64_t x258 = UINT64_MAX;
uint64_t x260 = 117958942159427LLU;
uint32_t t66 = 1568376U;
static uint16_t x276 = 17U;
volatile uint32_t x277 = 73621926U;
static int16_t x279 = INT16_MIN;
volatile uint64_t t69 = 15673LLU;
volatile int64_t x285 = 3139804LL;
uint16_t x287 = 0U;
int32_t x298 = 2428;
volatile int32_t t76 = -432;
volatile uint16_t x314 = 506U;
volatile int32_t t78 = 228305;
int32_t x321 = INT32_MIN;
int64_t x326 = INT64_MIN;
static int16_t x340 = INT16_MIN;
int32_t t84 = 3;
volatile int32_t x341 = INT32_MIN;
int32_t x348 = -109363528;
volatile uint32_t t86 = 201U;
volatile int64_t t88 = 542LL;
int8_t x364 = -1;
static int32_t x366 = -1;
int8_t x368 = -1;
int32_t x370 = INT32_MIN;
int8_t x371 = -2;
volatile int32_t t95 = 1285108;
int8_t x387 = INT8_MIN;
int32_t t97 = -47470;
int8_t x396 = INT8_MIN;
static volatile int32_t t98 = 0;
uint64_t x398 = 7782310LLU;
volatile uint64_t x400 = UINT64_MAX;
uint64_t t99 = 5LLU;


void f0(void) {
	static int8_t x1 = -11;
	int8_t x2 = -1;
	volatile int16_t x3 = INT16_MIN;
	static uint32_t x4 = 882184213U;
	volatile uint32_t t0 = 51830U;

	t0 = (((x1<x2)^x3)^x4);

	if (t0 != 3412758548U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static volatile int16_t x6 = -189;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = INT16_MIN;
	volatile uint64_t t1 = 258523393237LLU;

	t1 = (((x5<x6)^x7)^x8);

	if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 29848122836175LL;
	volatile int64_t x10 = -1LL;
	int64_t x11 = -1LL;
	volatile int32_t x12 = -1;
	volatile int64_t t2 = 2LL;

	t2 = (((x9<x10)^x11)^x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 60U;
	uint32_t x14 = 169130U;

	t3 = (((x13<x14)^x15)^x16);

	if (t3 != 2147483646) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x19 = 16714533358365LLU;

	t4 = (((x17<x18)^x19)^x20);

	if (t4 != 18446727358364961565LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -3755;
	uint8_t x22 = 8U;
	static int32_t x23 = -475694;
	uint16_t x24 = 18U;
	static volatile int32_t t5 = 212871;

	t5 = (((x21<x22)^x23)^x24);

	if (t5 != -475711) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	static volatile uint64_t x28 = 9070942691LLU;
	uint64_t t6 = 6LLU;

	t6 = (((x25<x26)^x27)^x28);

	if (t6 != 9081552595LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static uint64_t x30 = 17459175182144LLU;
	volatile uint32_t x31 = 2U;
	int32_t x32 = INT32_MAX;
	volatile uint32_t t7 = 16614240U;

	t7 = (((x29<x30)^x31)^x32);

	if (t7 != 2147483644U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static uint8_t x34 = 8U;
	static volatile uint64_t x35 = 15193500414726LLU;
	static uint64_t t8 = 113660747LLU;

	t8 = (((x33<x34)^x35)^x36);

	if (t8 != 18446728880209136775LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 0U;
	volatile int32_t x38 = INT32_MIN;
	int8_t x39 = 9;
	int32_t x40 = INT32_MIN;

	t9 = (((x37<x38)^x39)^x40);

	if (t9 != -2147483639) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int64_t x42 = -380766868727LL;
	uint8_t x43 = 60U;
	volatile int16_t x44 = INT16_MIN;
	int32_t t10 = -7093654;

	t10 = (((x41<x42)^x43)^x44);

	if (t10 != -32708) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = UINT32_MAX;
	uint8_t x48 = 102U;
	volatile int32_t t11 = 252282;

	t11 = (((x45<x46)^x47)^x48);

	if (t11 != 87) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 70763886278LL;
	static int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MAX;
	static int32_t t12 = 35;

	t12 = (((x49<x50)^x51)^x52);

	if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int32_t x54 = -1;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 2701365;

	t13 = (((x53<x54)^x55)^x56);

	if (t13 != 2147450880) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	volatile int32_t x59 = INT32_MIN;
	int16_t x60 = -3734;
	static int32_t t14 = -2025;

	t14 = (((x57<x58)^x59)^x60);

	if (t14 != 2147479915) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = -77955410LL;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MAX;
	static uint32_t x64 = 1673U;
	volatile uint32_t t15 = 38U;

	t15 = (((x61<x62)^x63)^x64);

	if (t15 != 2147481975U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 119U;
	int8_t x67 = 1;
	static uint32_t x68 = 480U;

	t16 = (((x65<x66)^x67)^x68);

	if (t16 != 480U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -6;
	int64_t x70 = -329834LL;
	int8_t x71 = -1;
	int8_t x72 = INT8_MIN;
	int32_t t17 = -38955618;

	t17 = (((x69<x70)^x71)^x72);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = UINT64_MAX;
	volatile int8_t x75 = INT8_MAX;
	static uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = -3481;

	t18 = (((x73<x74)^x75)^x76);

	if (t18 != 129) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int64_t x78 = -1LL;
	int8_t x79 = -1;
	int32_t t19 = -2;

	t19 = (((x77<x78)^x79)^x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 57;
	static int16_t x82 = -2711;
	int64_t x83 = -1LL;
	uint32_t x84 = 38300U;
	volatile int64_t t20 = -11924528344LL;

	t20 = (((x81<x82)^x83)^x84);

	if (t20 != -38301LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = -22;
	static int32_t t21 = 11;

	t21 = (((x85<x86)^x87)^x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	volatile uint8_t x90 = 1U;
	volatile int8_t x91 = INT8_MIN;
	volatile int32_t t22 = -99532;

	t22 = (((x89<x90)^x91)^x92);

	if (t22 != 125) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 42412U;
	static volatile int64_t x94 = INT64_MAX;
	int32_t t23 = -356374;

	t23 = (((x93<x94)^x95)^x96);

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = INT64_MAX;
	static volatile uint32_t x99 = 1404856362U;
	int64_t x100 = INT64_MAX;
	volatile int64_t t24 = 35414LL;

	t24 = (((x97<x98)^x99)^x100);

	if (t24 != 9223372035449919444LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = UINT8_MAX;
	static int16_t x104 = -1;
	volatile uint64_t t25 = 506479276LLU;

	t25 = (((x101<x102)^x103)^x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -1;
	uint32_t x106 = 7534204U;
	static volatile int8_t x107 = INT8_MIN;
	volatile int64_t x108 = INT64_MIN;
	static volatile int64_t t26 = -40817LL;

	t26 = (((x105<x106)^x107)^x108);

	if (t26 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = -1;
	uint8_t x111 = 3U;
	uint64_t x112 = 113455LLU;
	volatile uint64_t t27 = 527338899356501185LLU;

	t27 = (((x109<x110)^x111)^x112);

	if (t27 != 113452LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MAX;
	static int32_t t28 = 0;

	t28 = (((x113<x114)^x115)^x116);

	if (t28 != -32641) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 263016878651976LLU;
	int64_t x119 = INT64_MIN;

	t29 = (((x117<x118)^x119)^x120);

	if (t29 != -9223372036854775756LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -648040117407LL;
	int16_t x123 = INT16_MIN;
	int16_t x124 = 8;
	int32_t t30 = 0;

	t30 = (((x121<x122)^x123)^x124);

	if (t30 != -32759) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	int8_t x126 = -15;
	int32_t x128 = INT32_MAX;
	static int32_t t31 = 891349391;

	t31 = (((x125<x126)^x127)^x128);

	if (t31 != -2147483521) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x130 = UINT8_MAX;
	uint64_t x131 = UINT64_MAX;
	int16_t x132 = -59;
	static volatile uint64_t t32 = 661886012981008859LLU;

	t32 = (((x129<x130)^x131)^x132);

	if (t32 != 59LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 4U;
	static int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MAX;
	volatile uint16_t x136 = 193U;
	static int32_t t33 = -538559799;

	t33 = (((x133<x134)^x135)^x136);

	if (t33 != 32574) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile int16_t x138 = INT16_MAX;
	static int32_t x139 = INT32_MIN;
	static int16_t x140 = INT16_MAX;
	int32_t t34 = 82;

	t34 = (((x137<x138)^x139)^x140);

	if (t34 != -2147450882) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int16_t x144 = 6;

	t35 = (((x141<x142)^x143)^x144);

	if (t35 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -46;
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = INT32_MIN;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -20;

	t36 = (((x145<x146)^x147)^x148);

	if (t36 != 2147483521) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x150 = 187906509LLU;
	uint16_t x151 = 1U;
	int16_t x152 = -1;

	t37 = (((x149<x150)^x151)^x152);

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MIN;
	volatile uint8_t x155 = 5U;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -204;

	t38 = (((x153<x154)^x155)^x156);

	if (t38 != -123) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = -1;
	uint8_t x158 = 3U;
	uint8_t x159 = UINT8_MAX;
	static int32_t x160 = -1784;
	int32_t t39 = -1384;

	t39 = (((x157<x158)^x159)^x160);

	if (t39 != -1546) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 2220U;
	static volatile int64_t x162 = INT64_MIN;
	static volatile int16_t x163 = INT16_MAX;
	uint8_t x164 = 16U;
	volatile int32_t t40 = -2478;

	t40 = (((x161<x162)^x163)^x164);

	if (t40 != 32751) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = INT8_MAX;
	int16_t x167 = -1;
	static uint32_t x168 = UINT32_MAX;
	uint32_t t41 = 125U;

	t41 = (((x165<x166)^x167)^x168);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	uint8_t x171 = 3U;
	volatile int16_t x172 = -1;
	int32_t t42 = 835055561;

	t42 = (((x169<x170)^x171)^x172);

	if (t42 != -4) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	static volatile int32_t x176 = 111290727;
	int32_t t43 = -1531123;

	t43 = (((x173<x174)^x175)^x176);

	if (t43 != -111290650) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x179 = INT16_MIN;
	static int32_t t44 = -17531230;

	t44 = (((x177<x178)^x179)^x180);

	if (t44 != 32766) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 1U;
	int64_t x182 = -349304524LL;
	static int64_t x183 = -30673955LL;
	volatile int8_t x184 = 1;
	volatile int64_t t45 = 803190LL;

	t45 = (((x181<x182)^x183)^x184);

	if (t45 != -30673956LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	int8_t x188 = INT8_MIN;
	static int32_t t46 = -392548580;

	t46 = (((x185<x186)^x187)^x188);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x190 = -24;
	int32_t x192 = -6227;

	t47 = (((x189<x190)^x191)^x192);

	if (t47 != 6226) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = UINT32_MAX;
	static int32_t x195 = INT32_MAX;
	static int64_t x196 = -27556589007639409LL;
	volatile int64_t t48 = -3195161459126703177LL;

	t48 = (((x193<x194)^x195)^x196);

	if (t48 != -27556588100938896LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = UINT64_MAX;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MIN;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t49 = -4537906;

	t49 = (((x197<x198)^x199)^x200);

	if (t49 != 2147450880) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -251051960078467LL;
	volatile uint16_t x202 = 13U;
	int32_t x203 = 6;
	int32_t x204 = INT32_MIN;
	static int32_t t50 = 28415689;

	t50 = (((x201<x202)^x203)^x204);

	if (t50 != -2147483641) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MAX;
	uint8_t x207 = 20U;
	volatile int16_t x208 = INT16_MIN;
	static int32_t t51 = -65326510;

	t51 = (((x205<x206)^x207)^x208);

	if (t51 != -32747) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -11;
	static volatile int32_t x210 = INT32_MAX;
	int32_t x211 = INT32_MIN;
	uint64_t t52 = 1019851LLU;

	t52 = (((x209<x210)^x211)^x212);

	if (t52 != 18446744071562067979LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = -1;
	static int32_t x214 = INT32_MIN;
	uint64_t x215 = 11542109327147LLU;
	int32_t x216 = INT32_MIN;
	uint64_t t53 = 22682247164166242LLU;

	t53 = (((x213<x214)^x215)^x216);

	if (t53 != 18446732532517146411LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = 94931456510LL;
	int16_t x218 = -484;
	int64_t x219 = INT64_MAX;
	static int16_t x220 = INT16_MIN;

	t54 = (((x217<x218)^x219)^x220);

	if (t54 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x223 = -1LL;
	uint16_t x224 = 493U;
	int64_t t55 = 825992LL;

	t55 = (((x221<x222)^x223)^x224);

	if (t55 != -493LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 1U;
	int64_t x226 = 224717306225LL;
	uint8_t x227 = 1U;
	static uint32_t x228 = 8U;
	volatile uint32_t t56 = 361632U;

	t56 = (((x225<x226)^x227)^x228);

	if (t56 != 8U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	int16_t x231 = 0;
	int16_t x232 = -1;
	int32_t t57 = 1739;

	t57 = (((x229<x230)^x231)^x232);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 0U;
	uint8_t x235 = UINT8_MAX;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = 294733498720043696LLU;

	t58 = (((x233<x234)^x235)^x236);

	if (t58 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -15;
	volatile int8_t x238 = 5;
	static int8_t x239 = -1;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t59 = 1107344627434LLU;

	t59 = (((x237<x238)^x239)^x240);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 13U;
	int8_t x242 = INT8_MAX;
	uint8_t x243 = UINT8_MAX;
	volatile int32_t t60 = 3;

	t60 = (((x241<x242)^x243)^x244);

	if (t60 != 254) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	static int32_t x246 = 18;
	int64_t x247 = -1LL;
	int8_t x248 = INT8_MIN;
	int64_t t61 = 58998LL;

	t61 = (((x245<x246)^x247)^x248);

	if (t61 != 126LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = UINT32_MAX;
	int32_t x250 = 81829;
	volatile int16_t x251 = 365;
	uint64_t x252 = 235840537560706LLU;
	static volatile uint64_t t62 = 101138090379503194LLU;

	t62 = (((x249<x250)^x251)^x252);

	if (t62 != 235840537561071LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MAX;
	int32_t x254 = -1;
	int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MAX;
	volatile int64_t t63 = 1230LL;

	t63 = (((x253<x254)^x255)^x256);

	if (t63 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -1LL;
	static int64_t x259 = -1LL;
	uint64_t t64 = 752407027998LLU;

	t64 = (((x257<x258)^x259)^x260);

	if (t64 != 18446626114767392188LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 6U;
	int8_t x262 = INT8_MIN;
	uint32_t x263 = 1955785U;
	volatile int32_t x264 = 0;
	volatile uint32_t t65 = 3128443U;

	t65 = (((x261<x262)^x263)^x264);

	if (t65 != 1955784U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	volatile uint16_t x266 = 25681U;
	volatile int16_t x267 = -7450;
	static uint32_t x268 = 70U;

	t66 = (((x265<x266)^x267)^x268);

	if (t66 != 4294959777U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MAX;
	int8_t x271 = INT8_MAX;
	int32_t x272 = 19691417;
	int32_t t67 = -4560;

	t67 = (((x269<x270)^x271)^x272);

	if (t67 != 19691494) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = 0;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = UINT32_MAX;
	uint32_t t68 = 3238583U;

	t68 = (((x273<x274)^x275)^x276);

	if (t68 != 4294967278U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = INT8_MAX;
	uint64_t x280 = UINT64_MAX;

	t69 = (((x277<x278)^x279)^x280);

	if (t69 != 32767LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 4490U;
	volatile int16_t x282 = -686;
	volatile int32_t x283 = -1;
	int64_t x284 = -1LL;
	volatile int64_t t70 = -13994262974222LL;

	t70 = (((x281<x282)^x283)^x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = -1;
	int16_t x288 = INT16_MAX;
	static int32_t t71 = -1;

	t71 = (((x285<x286)^x287)^x288);

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static uint64_t x290 = 209756637179022731LLU;
	static int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = -102531188;

	t72 = (((x289<x290)^x291)^x292);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	uint8_t x294 = 25U;
	int32_t x295 = INT32_MAX;
	int32_t x296 = -1;
	int32_t t73 = -2705412;

	t73 = (((x293<x294)^x295)^x296);

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = 10U;
	static int8_t x299 = -1;
	static int32_t x300 = 216;
	int32_t t74 = 2933;

	t74 = (((x297<x298)^x299)^x300);

	if (t74 != -218) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 30143U;
	uint8_t x302 = UINT8_MAX;
	uint8_t x303 = UINT8_MAX;
	uint32_t x304 = 59881U;
	uint32_t t75 = 44926026U;

	t75 = (((x301<x302)^x303)^x304);

	if (t75 != 59670U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 11735U;
	static volatile int32_t x306 = -13471374;
	int16_t x307 = INT16_MIN;
	int8_t x308 = 1;

	t76 = (((x305<x306)^x307)^x308);

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 17548U;
	int64_t x310 = -206LL;
	int32_t x311 = 431719;
	volatile int64_t x312 = 1734942463779LL;
	int64_t t77 = 487632424772679LL;

	t77 = (((x309<x310)^x311)^x312);

	if (t77 != 1734942884164LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 459529972848398LLU;
	static int8_t x315 = INT8_MAX;
	int8_t x316 = INT8_MIN;

	t78 = (((x313<x314)^x315)^x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = INT8_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = -29616;

	t79 = (((x317<x318)^x319)^x320);

	if (t79 != 65409) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x322 = UINT16_MAX;
	static uint8_t x323 = 46U;
	static uint8_t x324 = 2U;
	volatile int32_t t80 = -116850;

	t80 = (((x321<x322)^x323)^x324);

	if (t80 != 45) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int64_t x327 = -538348188527227LL;
	uint32_t x328 = UINT32_MAX;
	int64_t t81 = 374LL;

	t81 = (((x325<x326)^x327)^x328);

	if (t81 != -538344278005126LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 26820556U;
	int64_t x330 = INT64_MIN;
	volatile int32_t x331 = -328580046;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = 500395598;

	t82 = (((x329<x330)^x331)^x332);

	if (t82 != -328580019) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = UINT16_MAX;
	int16_t x334 = -1;
	uint16_t x335 = 4U;
	static int8_t x336 = -7;
	volatile int32_t t83 = -81954;

	t83 = (((x333<x334)^x335)^x336);

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -167536028485831LL;
	volatile int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;

	t84 = (((x337<x338)^x339)^x340);

	if (t84 != 2147450881) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x342 = UINT32_MAX;
	static uint16_t x343 = 16233U;
	int32_t x344 = INT32_MAX;
	int32_t t85 = 1087783;

	t85 = (((x341<x342)^x343)^x344);

	if (t85 != 2147467415) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	static volatile uint32_t x346 = 4509810U;
	volatile uint32_t x347 = 57957199U;

	t86 = (((x345<x346)^x347)^x348);

	if (t86 != 4195313142U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	static uint32_t x350 = 0U;
	int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t87 = 22;

	t87 = (((x349<x350)^x351)^x352);

	if (t87 != 32640) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MAX;
	static int32_t x354 = -720620056;
	volatile int64_t x355 = INT64_MIN;
	volatile uint8_t x356 = UINT8_MAX;

	t88 = (((x353<x354)^x355)^x356);

	if (t88 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int16_t x358 = INT16_MIN;
	int64_t x359 = 87448507LL;
	int32_t x360 = -184;
	int64_t t89 = -2012969038457881LL;

	t89 = (((x357<x358)^x359)^x360);

	if (t89 != -87448333LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 472U;
	static uint32_t x362 = UINT32_MAX;
	volatile uint16_t x363 = UINT16_MAX;
	static int32_t t90 = -1012378;

	t90 = (((x361<x362)^x363)^x364);

	if (t90 != -65535) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int32_t x367 = -1;
	static int32_t t91 = -57830;

	t91 = (((x365<x366)^x367)^x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t92 = -1290892;

	t92 = (((x369<x370)^x371)^x372);

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -9;
	int32_t x374 = -55;
	static uint32_t x375 = UINT32_MAX;
	int16_t x376 = -1;
	volatile uint32_t t93 = 26680U;

	t93 = (((x373<x374)^x375)^x376);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 22U;
	volatile int32_t x378 = INT32_MAX;
	uint32_t x379 = 44500U;
	static int16_t x380 = 0;
	volatile uint32_t t94 = 119662348U;

	t94 = (((x377<x378)^x379)^x380);

	if (t94 != 44501U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static int16_t x382 = INT16_MIN;
	uint16_t x383 = UINT16_MAX;
	static uint8_t x384 = UINT8_MAX;

	t95 = (((x381<x382)^x383)^x384);

	if (t95 != 65281) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 7067632U;
	int32_t x386 = INT32_MAX;
	volatile int32_t x388 = INT32_MIN;
	int32_t t96 = -4;

	t96 = (((x385<x386)^x387)^x388);

	if (t96 != 2147483521) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -14297109;
	static int16_t x390 = INT16_MIN;
	volatile int32_t x391 = INT32_MIN;
	int32_t x392 = -1;

	t97 = (((x389<x390)^x391)^x392);

	if (t97 != 2147483646) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 0;
	int8_t x394 = -1;
	int8_t x395 = -1;

	t98 = (((x393<x394)^x395)^x396);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = -1;
	int16_t x399 = -1025;

	t99 = (((x397<x398)^x399)^x400);

	if (t99 != 1024LLU) { NG(); } else { ; }
	
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

