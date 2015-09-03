#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -1;
int8_t x14 = 8;
int32_t x16 = -52161075;
int32_t x25 = INT32_MAX;
uint64_t t8 = 1151829328216532LLU;
int32_t x39 = INT32_MIN;
static volatile uint64_t t10 = 412462347LLU;
int8_t x54 = INT8_MIN;
int8_t x56 = INT8_MIN;
static int8_t x62 = -1;
int8_t x64 = -1;
static uint64_t t14 = 507545627LLU;
int32_t x73 = 7;
int8_t x74 = -1;
static int8_t x75 = INT8_MAX;
static int16_t x83 = INT16_MAX;
volatile int32_t x84 = INT32_MIN;
static int32_t t19 = -57363;
int16_t x92 = -7;
volatile int32_t t20 = -3592628;
int16_t x98 = INT16_MAX;
volatile int32_t t22 = 9191516;
int8_t x103 = -3;
int64_t x111 = INT64_MIN;
int16_t x113 = INT16_MIN;
int64_t x117 = 95LL;
int32_t x119 = INT32_MAX;
int32_t t27 = 171518;
uint32_t x127 = UINT32_MAX;
int64_t x133 = INT64_MIN;
int32_t x136 = -14376;
int8_t x138 = INT8_MAX;
int8_t x139 = INT8_MAX;
uint16_t x142 = UINT16_MAX;
uint16_t x145 = 530U;
volatile int64_t x147 = -1LL;
volatile int32_t x158 = 105746;
int32_t x159 = INT32_MAX;
int64_t t36 = -617110281LL;
volatile int64_t x164 = -564234746LL;
uint16_t x167 = 261U;
volatile int32_t t38 = -1030500;
int16_t x179 = -35;
int64_t x185 = -259779LL;
int8_t x187 = 1;
uint16_t x192 = UINT16_MAX;
volatile int64_t t43 = 24042276883LL;
int32_t x194 = 7;
uint64_t x195 = UINT64_MAX;
int64_t x196 = INT64_MIN;
uint64_t t44 = 1862428836518LLU;
volatile int32_t x203 = -10681;
static int32_t x207 = 734353;
volatile uint64_t t48 = 2305173224741LLU;
static int8_t x218 = INT8_MAX;
int64_t t51 = 4602291440161LL;
int8_t x229 = -1;
volatile uint32_t t52 = 28U;
uint8_t x244 = 22U;
int8_t x245 = INT8_MAX;
uint32_t x247 = UINT32_MAX;
uint64_t t55 = 7187119097LLU;
int16_t x252 = -1;
uint64_t x253 = UINT64_MAX;
static int16_t x257 = 0;
int8_t x258 = 10;
static uint32_t x265 = 117024274U;
volatile int64_t x274 = -133200135LL;
int32_t x276 = -1;
volatile uint32_t t65 = 26U;
uint16_t x297 = 6U;
int16_t x308 = INT16_MIN;
uint64_t t70 = 221551461LLU;
int8_t x312 = 1;
volatile uint32_t x323 = 4117U;
int64_t x326 = INT64_MIN;
int32_t x327 = -1;
int32_t x329 = INT32_MIN;
volatile int64_t t76 = -36791110LL;
int8_t x337 = INT8_MIN;
static uint8_t x338 = UINT8_MAX;
static int64_t x343 = 0LL;
static int64_t x345 = 120LL;
uint16_t x346 = 16U;
volatile uint16_t x348 = 107U;
int8_t x350 = -1;
static volatile int64_t t82 = -266379905LL;
uint64_t x362 = UINT64_MAX;
uint8_t x366 = 15U;
static int8_t x370 = INT8_MIN;
static uint64_t x377 = UINT64_MAX;
volatile uint64_t t87 = 1130554795087773277LLU;
static uint32_t x385 = 4982U;
int8_t x402 = -47;
volatile uint64_t t93 = 1LLU;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint32_t x2 = UINT32_MAX;
	uint16_t x3 = 61U;
	volatile int8_t x4 = INT8_MIN;
	uint32_t t0 = 6114545U;

	t0 = ((x1-x2)%(x3^x4));

	if (t0 != 4294934529U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x7 = INT16_MIN;
	uint32_t x8 = 63623872U;
	volatile uint32_t t1 = 798U;

	t1 = ((x5-x6)%(x7^x8));

	if (t1 != 63614145U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 11137LLU;
	int8_t x10 = INT8_MIN;
	int32_t x11 = -14203;
	uint64_t x12 = UINT64_MAX;
	static uint64_t t2 = 585294767LLU;

	t2 = ((x9-x10)%(x11^x12));

	if (t2 != 11265LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	uint64_t x15 = 7053555120699861675LLU;
	static volatile uint64_t t3 = 789414871LLU;

	t3 = ((x13-x14)%(x15^x16));

	if (t3 != 7053555120749412497LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	int16_t x18 = INT16_MAX;
	int32_t x19 = 1;
	int32_t x20 = -1;
	int32_t t4 = 2645;

	t4 = ((x17-x18)%(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int32_t x22 = -1;
	static int8_t x23 = INT8_MAX;
	int8_t x24 = 1;
	volatile int32_t t5 = 411089666;

	t5 = ((x21-x22)%(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 14LLU;
	volatile int8_t x27 = INT8_MIN;
	volatile uint16_t x28 = 1U;
	volatile uint64_t t6 = 6271251531197395LLU;

	t6 = ((x25-x26)%(x27^x28));

	if (t6 != 2147483633LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	static volatile uint32_t x30 = UINT32_MAX;
	static volatile uint8_t x31 = UINT8_MAX;
	uint64_t x32 = 173432414LLU;
	uint64_t t7 = 18435452200830LLU;

	t7 = ((x29-x30)%(x31^x32));

	if (t7 != 65536LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -2;
	int64_t x34 = -1LL;
	volatile uint64_t x35 = 56224693675548LLU;
	int16_t x36 = INT16_MIN;

	t8 = ((x33-x34)%(x35^x36));

	if (t8 != 56224693656035LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 5194067073396LLU;
	static uint16_t x38 = UINT16_MAX;
	uint8_t x40 = UINT8_MAX;
	volatile uint64_t t9 = 135945465LLU;

	t9 = ((x37-x38)%(x39^x40));

	if (t9 != 5194067007861LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	volatile int16_t x42 = INT16_MIN;
	volatile int8_t x43 = 1;
	int32_t x44 = 84002;

	t10 = ((x41-x42)%(x43^x44));

	if (t10 != 32767LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 886;
	uint8_t x50 = 4U;
	uint16_t x51 = 639U;
	uint64_t x52 = 169LLU;
	volatile uint64_t t11 = 98894445416002LLU;

	t11 = ((x49-x50)%(x51^x52));

	if (t11 != 156LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 17485U;
	volatile int8_t x55 = -3;
	volatile uint32_t t12 = 488835731U;

	t12 = ((x53-x54)%(x55^x56));

	if (t12 != 113U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x61 = UINT32_MAX;
	static uint32_t x63 = 826565U;
	uint32_t t13 = 18653U;

	t13 = ((x61-x62)%(x63^x64));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = UINT8_MAX;
	uint64_t x66 = 6674757101LLU;
	uint16_t x67 = 2U;
	static int16_t x68 = 31;

	t14 = ((x65-x66)%(x67^x68));

	if (t14 != 19LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = INT8_MAX;
	static uint16_t x70 = 16217U;
	volatile int8_t x71 = INT8_MIN;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t15 = 306624826;

	t15 = ((x69-x70)%(x71^x72));

	if (t15 != -16090) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x76 = -1;
	static int32_t t16 = -9019;

	t16 = ((x73-x74)%(x75^x76));

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	uint16_t x78 = 167U;
	static int64_t x79 = -1046434465LL;
	int8_t x80 = 2;
	static int64_t t17 = -68400789LL;

	t17 = ((x77-x78)%(x79^x80));

	if (t17 != -295LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x81 = UINT8_MAX;
	int32_t x82 = -1;
	int32_t t18 = -102;

	t18 = ((x81-x82)%(x83^x84));

	if (t18 != 256) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	uint16_t x86 = 2619U;
	uint8_t x87 = 4U;
	int8_t x88 = INT8_MIN;

	t19 = ((x85-x86)%(x87^x88));

	if (t19 != -16) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = -1;
	volatile int32_t x90 = -1;
	int32_t x91 = INT32_MIN;

	t20 = ((x89-x90)%(x91^x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -1LL;
	int8_t x94 = INT8_MIN;
	int32_t x95 = -303844;
	static int64_t x96 = -306170722086LL;
	int64_t t21 = 12LL;

	t21 = ((x93-x94)%(x95^x96));

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = -15;
	volatile uint16_t x99 = 2629U;
	uint16_t x100 = 3110U;

	t22 = ((x97-x98)%(x99^x100));

	if (t22 != -82) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -968;
	int32_t x102 = 1104526;
	int16_t x104 = -1;
	volatile int32_t t23 = 328;

	t23 = ((x101-x102)%(x103^x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 0U;
	int16_t x110 = INT16_MIN;
	static int8_t x112 = -7;
	volatile int64_t t24 = -110LL;

	t24 = ((x109-x110)%(x111^x112));

	if (t24 != 32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x114 = 17U;
	static uint8_t x115 = 11U;
	int8_t x116 = 6;
	int32_t t25 = 639858;

	t25 = ((x113-x114)%(x115^x116));

	if (t25 != -12) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x118 = INT8_MIN;
	int16_t x120 = 0;
	volatile int64_t t26 = -529440213740686013LL;

	t26 = ((x117-x118)%(x119^x120));

	if (t26 != 223LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	uint8_t x122 = 14U;
	int8_t x123 = 8;
	int8_t x124 = INT8_MAX;

	t27 = ((x121-x122)%(x123^x124));

	if (t27 != -15) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -1;
	static int32_t x126 = INT32_MIN;
	int8_t x128 = INT8_MIN;
	uint32_t t28 = 12U;

	t28 = ((x125-x126)%(x127^x128));

	if (t28 != 7U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	static volatile int8_t x130 = INT8_MIN;
	int16_t x131 = -1;
	int64_t x132 = INT64_MIN;
	int64_t t29 = -2LL;

	t29 = ((x129-x130)%(x131^x132));

	if (t29 != 127LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x134 = -1;
	int64_t x135 = INT64_MAX;
	volatile int64_t t30 = 46690351927LL;

	t30 = ((x133-x134)%(x135^x136));

	if (t30 != -14374LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -1;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t31 = 3;

	t31 = ((x137-x138)%(x139^x140));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = -1LL;
	static uint32_t x143 = 242413U;
	static uint16_t x144 = UINT16_MAX;
	int64_t t32 = -41617470150255LL;

	t32 = ((x141-x142)%(x143^x144));

	if (t32 != -65536LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x146 = INT16_MIN;
	static volatile uint16_t x148 = UINT16_MAX;
	volatile int64_t t33 = 6752205LL;

	t33 = ((x145-x146)%(x147^x148));

	if (t33 != 33298LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MIN;
	volatile int64_t x150 = -3079488553855284253LL;
	int8_t x151 = 27;
	volatile int64_t x152 = -105717340519203LL;
	volatile int64_t t34 = -1953940537LL;

	t34 = ((x149-x150)%(x151^x152));

	if (t34 != 48141870717331LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MIN;
	int64_t x155 = 25194765443LL;
	int64_t x156 = INT64_MIN;
	int64_t t35 = -4330070684916LL;

	t35 = ((x153-x154)%(x155^x156));

	if (t35 != -32640LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = 545736668904LL;
	int64_t x160 = -1LL;

	t36 = ((x157-x158)%(x159^x160));

	if (t36 != 275716566LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x161 = 3066261;
	volatile int8_t x162 = 1;
	volatile uint16_t x163 = 10U;
	int64_t t37 = 13060LL;

	t37 = ((x161-x162)%(x163^x164));

	if (t37 != 3066260LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x165 = -1;
	int8_t x166 = INT8_MAX;
	int16_t x168 = -89;

	t38 = ((x165-x166)%(x167^x168));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = 0U;
	int16_t x170 = INT16_MIN;
	int32_t x171 = -1;
	static volatile int8_t x172 = INT8_MIN;
	int32_t t39 = -1375;

	t39 = ((x169-x170)%(x171^x172));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = 21U;
	int64_t x178 = -3164129LL;
	uint16_t x180 = 13U;
	int64_t t40 = 501908766911LL;

	t40 = ((x177-x178)%(x179^x180));

	if (t40 != 38LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = 4U;
	int64_t x182 = INT64_MAX;
	volatile int64_t x183 = INT64_MAX;
	static int32_t x184 = 63587512;
	volatile int64_t t41 = -46831LL;

	t41 = ((x181-x182)%(x183^x184));

	if (t41 != -63587508LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x186 = -1LL;
	int64_t x188 = INT64_MAX;
	int64_t t42 = 1LL;

	t42 = ((x185-x186)%(x187^x188));

	if (t42 != -259778LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -10109193921215LL;
	int16_t x190 = -1;
	int16_t x191 = -923;

	t43 = ((x189-x190)%(x191^x192));

	if (t43 != -19132LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = -2855;

	t44 = ((x193-x194)%(x195^x196));

	if (t44 != 9223372036854772947LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = 1236;
	uint16_t x198 = UINT16_MAX;
	uint32_t x199 = 498U;
	static uint8_t x200 = UINT8_MAX;
	volatile uint32_t t45 = 11822U;

	t45 = ((x197-x198)%(x199^x200));

	if (t45 != 39U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = -6;
	int32_t x202 = INT32_MIN;
	static volatile int8_t x204 = -1;
	int32_t t46 = -58;

	t46 = ((x201-x202)%(x203^x204));

	if (t46 != 2642) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = -1;
	int64_t x206 = 3903286LL;
	int8_t x208 = 11;
	int64_t t47 = 203307582110LL;

	t47 = ((x205-x206)%(x207^x208));

	if (t47 != -231477LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x214 = 0;
	static int16_t x215 = INT16_MAX;
	static uint64_t x216 = 1437536LLU;

	t48 = ((x213-x214)%(x215^x216));

	if (t48 != 84813LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x217 = 79U;
	uint8_t x219 = 102U;
	static int64_t x220 = -7581LL;
	int64_t t49 = 3686LL;

	t49 = ((x217-x218)%(x219^x220));

	if (t49 != 6548LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x221 = 11U;
	int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	int32_t t50 = -42;

	t50 = ((x221-x222)%(x223^x224));

	if (t50 != 32779) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = -30;
	int16_t x226 = -1;
	uint8_t x227 = 21U;
	static int64_t x228 = -1LL;

	t51 = ((x225-x226)%(x227^x228));

	if (t51 != -7LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	int8_t x232 = INT8_MIN;

	t52 = ((x229-x230)%(x231^x232));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x233 = UINT16_MAX;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = -1446372708182543LL;
	int64_t x236 = 3937724566093542LL;
	volatile uint64_t t53 = 14428537882263314LLU;

	t53 = ((x233-x234)%(x235^x236));

	if (t53 != 65536LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x241 = INT64_MAX;
	volatile uint16_t x242 = 2U;
	volatile int16_t x243 = INT16_MAX;
	static volatile int64_t t54 = -11190LL;

	t54 = ((x241-x242)%(x243^x244));

	if (t54 != 12065LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x246 = -99LL;
	uint64_t x248 = UINT64_MAX;

	t55 = ((x245-x246)%(x247^x248));

	if (t55 != 226LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x249 = INT16_MIN;
	int32_t x250 = -3372;
	uint16_t x251 = 9U;
	volatile int32_t t56 = 0;

	t56 = ((x249-x250)%(x251^x252));

	if (t56 != -6) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x254 = INT32_MAX;
	int32_t x255 = INT32_MIN;
	int8_t x256 = -63;
	volatile uint64_t t57 = 283081334943190LLU;

	t57 = ((x253-x254)%(x255^x256));

	if (t57 != 15813LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x259 = UINT16_MAX;
	int32_t x260 = -1;
	volatile int32_t t58 = -285764;

	t58 = ((x257-x258)%(x259^x260));

	if (t58 != -10) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = -12880236023459LL;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	uint32_t x264 = 952U;
	volatile int64_t t59 = 429598LL;

	t59 = ((x261-x262)%(x263^x264));

	if (t59 != -12880235990691LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x266 = INT64_MAX;
	volatile int64_t x267 = 123103580326410LL;
	uint32_t x268 = 353811U;
	volatile int64_t t60 = 10931984621821491LL;

	t60 = ((x265-x266)%(x267^x268));

	if (t60 != -82510612111674LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x269 = UINT8_MAX;
	static int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MAX;
	static int8_t x272 = -1;
	int32_t t61 = 219;

	t61 = ((x269-x270)%(x271^x272));

	if (t61 != -32512) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x273 = 468144;
	int64_t x275 = INT64_MIN;
	int64_t t62 = -281799373377449430LL;

	t62 = ((x273-x274)%(x275^x276));

	if (t62 != 133668279LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x277 = 98U;
	uint16_t x278 = 70U;
	volatile int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;
	int64_t t63 = -231LL;

	t63 = ((x277-x278)%(x279^x280));

	if (t63 != 28LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = INT32_MIN;
	static volatile int8_t x282 = INT8_MIN;
	uint16_t x283 = 947U;
	int64_t x284 = INT64_MIN;
	int64_t t64 = 305345LL;

	t64 = ((x281-x282)%(x283^x284));

	if (t64 != -2147483520LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int32_t x286 = INT32_MAX;
	int8_t x287 = INT8_MIN;
	int32_t x288 = -1;

	t65 = ((x285-x286)%(x287^x288));

	if (t65 != 8U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x289 = -165;
	int32_t x290 = INT32_MIN;
	volatile int32_t x291 = INT32_MIN;
	int16_t x292 = 0;
	int32_t t66 = 1384;

	t66 = ((x289-x290)%(x291^x292));

	if (t66 != 2147483483) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x293 = -1LL;
	uint16_t x294 = UINT16_MAX;
	static uint16_t x295 = 31741U;
	int8_t x296 = INT8_MIN;
	int64_t t67 = 27311995560LL;

	t67 = ((x293-x294)%(x295^x296));

	if (t67 != -2298LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x298 = INT8_MIN;
	uint16_t x299 = 2362U;
	static int32_t x300 = INT32_MIN;
	int32_t t68 = 9954149;

	t68 = ((x297-x298)%(x299^x300));

	if (t68 != 134) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = -1LL;
	int64_t x303 = INT64_MIN;
	static uint8_t x304 = 89U;
	int64_t t69 = 31985610682285833LL;

	t69 = ((x301-x302)%(x303^x304));

	if (t69 != -32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = 6024LLU;
	int8_t x306 = 59;
	int16_t x307 = -989;

	t70 = ((x305-x306)%(x307^x308));

	if (t70 != 5965LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x309 = INT64_MIN;
	int32_t x310 = -865194;
	uint32_t x311 = 25740300U;
	static int64_t t71 = 34428544LL;

	t71 = ((x309-x310)%(x311^x312));

	if (t71 != -21369048LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 112260544028132410LLU;
	int64_t x314 = -542474274LL;
	int8_t x315 = -46;
	uint64_t x316 = UINT64_MAX;
	uint64_t t72 = 19278LLU;

	t72 = ((x313-x314)%(x315^x316));

	if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x317 = 13978LL;
	int16_t x318 = 1386;
	int32_t x319 = -5043508;
	uint64_t x320 = UINT64_MAX;
	uint64_t t73 = 2711LLU;

	t73 = ((x317-x318)%(x319^x320));

	if (t73 != 12592LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x321 = INT16_MAX;
	static int32_t x322 = 0;
	int16_t x324 = -1;
	volatile uint32_t t74 = 2745U;

	t74 = ((x321-x322)%(x323^x324));

	if (t74 != 32767U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MIN;
	volatile uint16_t x328 = 1211U;
	int64_t t75 = 1351456974648565915LL;

	t75 = ((x325-x326)%(x327^x328));

	if (t75 != 864LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x330 = -1LL;
	uint16_t x331 = 20222U;
	int16_t x332 = INT16_MAX;

	t76 = ((x329-x330)%(x331^x332));

	if (t76 != -5457LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x339 = 13096358255091505LL;
	static uint8_t x340 = 16U;
	int64_t t77 = -27353399111LL;

	t77 = ((x337-x338)%(x339^x340));

	if (t77 != -383LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x341 = UINT8_MAX;
	static uint32_t x342 = 417U;
	volatile int32_t x344 = INT32_MIN;
	volatile int64_t t78 = 13726991773LL;

	t78 = ((x341-x342)%(x343^x344));

	if (t78 != 2147483486LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x347 = -1;
	int64_t t79 = -5716315LL;

	t79 = ((x345-x346)%(x347^x348));

	if (t79 != 104LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 5U;
	int64_t x351 = 3054111588885124077LL;
	volatile int32_t x352 = INT32_MIN;
	static volatile int64_t t80 = -53837103505LL;

	t80 = ((x349-x350)%(x351^x352));

	if (t80 != 6LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = -338;
	uint8_t x354 = 64U;
	volatile uint16_t x355 = UINT16_MAX;
	int32_t x356 = -1;
	int32_t t81 = 1;

	t81 = ((x353-x354)%(x355^x356));

	if (t81 != -402) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = -189056698629LL;
	volatile uint32_t x358 = 1354U;
	uint32_t x359 = 525U;
	static volatile int32_t x360 = INT32_MAX;

	t82 = ((x357-x358)%(x359^x360));

	if (t82 != -78185247LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x361 = -555316288096169LL;
	volatile int64_t x363 = INT64_MIN;
	static uint8_t x364 = 18U;
	uint64_t t83 = 2208LLU;

	t83 = ((x361-x362)%(x363^x364));

	if (t83 != 9222816720566679622LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x365 = 113018U;
	int32_t x367 = 1830847;
	volatile int8_t x368 = -14;
	uint32_t t84 = 729463788U;

	t84 = ((x365-x366)%(x367^x368));

	if (t84 != 113003U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x369 = 12U;
	volatile int32_t x371 = -11;
	uint8_t x372 = 6U;
	volatile int32_t t85 = -17559;

	t85 = ((x369-x370)%(x371^x372));

	if (t85 != 10) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x373 = -1;
	static uint32_t x374 = 1283373U;
	volatile int32_t x375 = 15129068;
	uint8_t x376 = 11U;
	volatile uint32_t t86 = 57U;

	t86 = ((x373-x374)%(x375^x376));

	if (t86 != 12159093U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = 7U;

	t87 = ((x377-x378)%(x379^x380));

	if (t87 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x381 = 916245LLU;
	static uint8_t x382 = 1U;
	int64_t x383 = 77589573LL;
	int16_t x384 = INT16_MIN;
	uint64_t t88 = 2480042270218290536LLU;

	t88 = ((x381-x382)%(x383^x384));

	if (t88 != 916244LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x386 = -23470;
	static int32_t x387 = 9;
	volatile int16_t x388 = -1;
	uint32_t t89 = 1697083308U;

	t89 = ((x385-x386)%(x387^x388));

	if (t89 != 28452U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x389 = INT64_MIN;
	volatile int8_t x390 = INT8_MIN;
	uint64_t x391 = UINT64_MAX;
	uint32_t x392 = UINT32_MAX;
	uint64_t t90 = 1189528548875LLU;

	t90 = ((x389-x390)%(x391^x392));

	if (t90 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x393 = INT64_MAX;
	int16_t x394 = 2;
	volatile int8_t x395 = -3;
	volatile int64_t x396 = INT64_MAX;
	int64_t t91 = -3226593801488039146LL;

	t91 = ((x393-x394)%(x395^x396));

	if (t91 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x397 = -1;
	volatile int64_t x398 = -1LL;
	uint64_t x399 = UINT64_MAX;
	int16_t x400 = INT16_MIN;
	volatile uint64_t t92 = 192LLU;

	t92 = ((x397-x398)%(x399^x400));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = 52215481412LLU;
	static int16_t x403 = INT16_MAX;
	uint8_t x404 = 11U;

	t93 = ((x401-x402)%(x403^x404));

	if (t93 != 26271LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x405 = -1;
	static int16_t x406 = 7;
	int8_t x407 = INT8_MAX;
	int64_t x408 = -1LL;
	volatile int64_t t94 = 785840LL;

	t94 = ((x405-x406)%(x407^x408));

	if (t94 != -8LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x409 = INT16_MIN;
	uint32_t x410 = 1217U;
	volatile uint32_t x411 = 1187720388U;
	int64_t x412 = -2490809933120142339LL;
	int64_t t95 = 242LL;

	t95 = ((x409-x410)%(x411^x412));

	if (t95 != 4294933311LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x417 = 189U;
	uint8_t x418 = 3U;
	int8_t x419 = -1;
	uint64_t x420 = 14587700824819448LLU;
	static uint64_t t96 = 148LLU;

	t96 = ((x417-x418)%(x419^x420));

	if (t96 != 186LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x421 = -3;
	static uint64_t x422 = UINT64_MAX;
	uint32_t x423 = 4U;
	int8_t x424 = -1;
	volatile uint64_t t97 = 281202511LLU;

	t97 = ((x421-x422)%(x423^x424));

	if (t97 != 23LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = 404LL;
	int8_t x426 = -25;
	int16_t x427 = INT16_MIN;
	uint32_t x428 = 12427U;
	int64_t t98 = -28LL;

	t98 = ((x425-x426)%(x427^x428));

	if (t98 != 429LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x429 = -1LL;
	uint8_t x430 = 54U;
	uint64_t x431 = 11457691268895LLU;
	static int8_t x432 = -1;
	volatile uint64_t t99 = 3780468LLU;

	t99 = ((x429-x430)%(x431^x432));

	if (t99 != 11457691268841LLU) { NG(); } else { ; }
	
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

