#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = -119663777;
int32_t t1 = 93384507;
uint16_t x11 = 30U;
int16_t x13 = INT16_MIN;
int32_t x20 = -1;
int8_t x24 = INT8_MIN;
int64_t x25 = -701LL;
volatile int16_t x27 = -1;
int16_t x30 = 0;
static int8_t x32 = -1;
uint64_t x38 = 2LLU;
volatile int32_t t9 = -1767;
int16_t x42 = -1;
int64_t t10 = -3272023083410LL;
volatile int32_t x49 = -1;
volatile int32_t t12 = 5;
int64_t x54 = -43365622LL;
int8_t x55 = INT8_MIN;
int64_t x56 = -1LL;
uint32_t x58 = UINT32_MAX;
int64_t x67 = INT64_MIN;
int64_t t17 = 2284LL;
int32_t x75 = INT32_MAX;
int64_t x77 = INT64_MIN;
volatile uint64_t x81 = 20562LLU;
volatile uint64_t t20 = 126173763LLU;
int32_t x87 = INT32_MAX;
volatile int64_t t21 = INT64_MAX;
uint64_t x89 = 869LLU;
int8_t x91 = 1;
volatile uint64_t t22 = 1498LLU;
int64_t x94 = INT64_MIN;
uint32_t x102 = UINT32_MAX;
volatile int32_t x107 = 12;
int32_t x111 = 175;
static int16_t x119 = INT16_MIN;
uint64_t x122 = UINT64_MAX;
static int32_t x132 = INT32_MAX;
uint64_t x133 = 746328LLU;
static volatile uint64_t t33 = 512093097992LLU;
int64_t t34 = -2LL;
volatile int64_t x141 = -1LL;
int32_t x158 = -1;
volatile int64_t x160 = 95999LL;
static volatile int8_t x162 = INT8_MIN;
int16_t x163 = INT16_MIN;
int8_t x165 = 0;
int32_t x166 = 630;
int32_t x172 = INT32_MIN;
int8_t x178 = 3;
volatile uint32_t t44 = 215570U;
static uint8_t x182 = UINT8_MAX;
volatile uint8_t x183 = 3U;
volatile int8_t x194 = INT8_MIN;
int16_t x195 = INT16_MIN;
int16_t x202 = -1;
int64_t x209 = -985307310538857LL;
uint8_t x213 = 4U;
int32_t x220 = INT32_MIN;
uint32_t x222 = UINT32_MAX;
int16_t x225 = INT16_MAX;
static int32_t t56 = -1414494;
static uint8_t x234 = UINT8_MAX;
int32_t x236 = INT32_MIN;
int64_t t60 = 5849018508LL;
volatile int64_t x249 = INT64_MAX;
uint32_t x252 = 157502U;
uint8_t x256 = UINT8_MAX;
int16_t x257 = 3;
int32_t t64 = -15290;
static int32_t x266 = INT32_MIN;
int64_t x269 = INT64_MAX;
int64_t x272 = INT64_MIN;
static volatile int64_t t67 = INT64_MAX;
int64_t x280 = INT64_MIN;
int64_t x288 = INT64_MIN;
static uint16_t x289 = UINT16_MAX;
int32_t x291 = -1;
volatile int32_t t72 = 8;
int8_t x296 = -27;
static int8_t x297 = INT8_MAX;
uint32_t t76 = 12U;
static int8_t x309 = INT8_MIN;
static int32_t t77 = -1372131;
volatile uint8_t x325 = UINT8_MAX;
uint8_t x327 = UINT8_MAX;
volatile int32_t t81 = -133490580;
uint64_t x335 = 4014465987402LLU;
volatile int32_t x342 = INT32_MIN;
volatile int32_t t86 = 184349047;
volatile int32_t x351 = INT32_MIN;
int32_t t89 = -920129;
int32_t x362 = -31;
int64_t x366 = -1LL;
uint64_t t91 = UINT64_MAX;
static int64_t x376 = -1LL;
uint64_t x377 = 1463853084LLU;
int64_t t95 = 44298LL;
int32_t x387 = INT32_MIN;
uint64_t x388 = 19555032LLU;
volatile int8_t x397 = -1;


void f0(void) {
	int32_t x1 = 38;
	volatile int32_t x2 = -694804;
	static uint8_t x3 = 16U;
	uint8_t x4 = 77U;
	volatile int32_t t0 = -1258;

	t0 = (x1^((x2==x3)%x4));

	if (t0 != 38) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint16_t x6 = 305U;
	uint64_t x7 = UINT64_MAX;

	t1 = (x5^((x6==x7)%x8));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 341;
	int16_t x10 = INT16_MAX;
	int16_t x12 = -379;
	volatile int32_t t2 = 45426;

	t2 = (x9^((x10==x11)%x12));

	if (t2 != 341) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -3;
	int64_t x15 = INT64_MIN;
	int64_t x16 = -15878164072447891LL;
	volatile int64_t t3 = 2246895721LL;

	t3 = (x13^((x14==x15)%x16));

	if (t3 != -32768LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 5546915902318LL;
	static volatile uint16_t x18 = 1621U;
	int64_t x19 = INT64_MIN;
	volatile int64_t t4 = -3566781299642777LL;

	t4 = (x17^((x18==x19)%x20));

	if (t4 != 5546915902318LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 3703363U;
	uint64_t x22 = 169LLU;
	int32_t x23 = INT32_MIN;
	volatile uint32_t t5 = 12U;

	t5 = (x21^((x22==x23)%x24));

	if (t5 != 3703363U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	uint8_t x28 = UINT8_MAX;
	volatile int64_t t6 = -121538696525LL;

	t6 = (x25^((x26==x27)%x28));

	if (t6 != -701LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int16_t x31 = -1;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x29^((x30==x31)%x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = 1;
	int64_t x36 = INT64_MAX;
	int64_t t8 = -6351LL;

	t8 = (x33^((x34==x35)%x36));

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	uint32_t x39 = 19U;
	int8_t x40 = INT8_MIN;

	t9 = (x37^((x38==x39)%x40));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 268;
	volatile int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MAX;

	t10 = (x41^((x42==x43)%x44));

	if (t10 != 268LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 33587432624LLU;
	uint16_t x46 = UINT16_MAX;
	static int32_t x47 = -61936;
	int16_t x48 = -1;
	uint64_t t11 = 578818LLU;

	t11 = (x45^((x46==x47)%x48));

	if (t11 != 33587432624LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	static uint32_t x51 = UINT32_MAX;
	static int8_t x52 = INT8_MIN;

	t12 = (x49^((x50==x51)%x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	static volatile int64_t t13 = 120676434460611659LL;

	t13 = (x53^((x54==x55)%x56));

	if (t13 != 255LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile uint32_t x59 = 6U;
	volatile uint8_t x60 = 11U;
	int32_t t14 = 41538188;

	t14 = (x57^((x58==x59)%x60));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int8_t x62 = -10;
	volatile int64_t x63 = INT64_MIN;
	uint32_t x64 = 619987783U;
	static int64_t t15 = INT64_MAX;

	t15 = (x61^((x62==x63)%x64));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	int8_t x66 = -3;
	volatile int32_t x68 = INT32_MIN;
	int64_t t16 = INT64_MIN;

	t16 = (x65^((x66==x67)%x68));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x71 = -1LL;
	static int64_t x72 = -1LL;

	t17 = (x69^((x70==x71)%x72));

	if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	int64_t x76 = -164267651LL;
	int64_t t18 = -31529LL;

	t18 = (x73^((x74==x75)%x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 64U;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x77^((x78==x79)%x80));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	int8_t x84 = INT8_MIN;

	t20 = (x81^((x82==x83)%x84));

	if (t20 != 20563LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	static int64_t x86 = -1LL;
	int16_t x88 = INT16_MIN;

	t21 = (x85^((x86==x87)%x88));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x90 = 1143422617U;
	static volatile int32_t x92 = INT32_MIN;

	t22 = (x89^((x90==x91)%x92));

	if (t22 != 869LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 1639;
	uint64_t x95 = 1930LLU;
	static uint32_t x96 = 778158U;
	volatile uint32_t t23 = 2U;

	t23 = (x93^((x94==x95)%x96));

	if (t23 != 1639U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MAX;
	uint64_t x98 = UINT64_MAX;
	static int32_t x99 = INT32_MAX;
	volatile int32_t x100 = 63;
	int32_t t24 = 47050;

	t24 = (x97^((x98==x99)%x100));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint32_t x103 = UINT32_MAX;
	int64_t x104 = INT64_MIN;
	int64_t t25 = 4318420710LL;

	t25 = (x101^((x102==x103)%x104));

	if (t25 != -2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	static int32_t x106 = INT32_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x105^((x106==x107)%x108));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x109 = -1;
	int8_t x110 = -3;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = 3000;

	t27 = (x109^((x110==x111)%x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int8_t x114 = INT8_MIN;
	int64_t x115 = -3966927509080LL;
	static int64_t x116 = INT64_MIN;
	volatile int64_t t28 = -21LL;

	t28 = (x113^((x114==x115)%x116));

	if (t28 != 2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	uint64_t x118 = 1050160162LLU;
	volatile uint64_t x120 = 412812257LLU;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x117^((x118==x119)%x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = -1LL;
	int8_t x123 = INT8_MAX;
	volatile int32_t x124 = INT32_MIN;
	volatile int64_t t30 = -1LL;

	t30 = (x121^((x122==x123)%x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x126 = -1;
	int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 24;

	t31 = (x125^((x126==x127)%x128));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	static uint16_t x131 = 2U;
	volatile int64_t t32 = INT64_MIN;

	t32 = (x129^((x130==x131)%x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -1;
	int32_t x135 = INT32_MIN;
	static int32_t x136 = 12;

	t33 = (x133^((x134==x135)%x136));

	if (t33 != 746328LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int32_t x138 = 216127;
	volatile uint16_t x139 = UINT16_MAX;
	static int64_t x140 = INT64_MAX;

	t34 = (x137^((x138==x139)%x140));

	if (t34 != 255LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = -13830LL;
	volatile uint16_t x143 = UINT16_MAX;
	int8_t x144 = -1;
	int64_t t35 = 11576LL;

	t35 = (x141^((x142==x143)%x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -13;
	uint64_t x146 = 658769LLU;
	static uint64_t x147 = UINT64_MAX;
	static volatile uint32_t x148 = 1086651154U;
	static uint32_t t36 = 6U;

	t36 = (x145^((x146==x147)%x148));

	if (t36 != 4294967283U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -246994249;
	int8_t x150 = 5;
	volatile int32_t x151 = -1;
	int32_t x152 = 3588038;
	static volatile int32_t t37 = -1;

	t37 = (x149^((x150==x151)%x152));

	if (t37 != -246994249) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x154 = INT16_MAX;
	int64_t x155 = INT64_MIN;
	static int32_t x156 = INT32_MIN;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = (x153^((x154==x155)%x156));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 14U;
	static int64_t x159 = INT64_MAX;
	static volatile int64_t t39 = 6039441LL;

	t39 = (x157^((x158==x159)%x160));

	if (t39 != 14LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	static uint64_t x164 = UINT64_MAX;
	uint64_t t40 = 12823494552855038LLU;

	t40 = (x161^((x162==x163)%x164));

	if (t40 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x167 = -1;
	int16_t x168 = -1;
	static volatile int32_t t41 = -2207783;

	t41 = (x165^((x166==x167)%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 1183U;
	int64_t x170 = INT64_MIN;
	int32_t x171 = -1;
	uint32_t t42 = 989498U;

	t42 = (x169^((x170==x171)%x172));

	if (t42 != 1183U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -505LL;
	volatile uint16_t x174 = 1U;
	static int32_t x175 = INT32_MAX;
	volatile int16_t x176 = -421;
	static volatile int64_t t43 = 2LL;

	t43 = (x173^((x174==x175)%x176));

	if (t43 != -505LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = 243234U;
	volatile int8_t x179 = INT8_MAX;
	static int32_t x180 = INT32_MIN;

	t44 = (x177^((x178==x179)%x180));

	if (t44 != 243234U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 333U;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 1670;

	t45 = (x181^((x182==x183)%x184));

	if (t45 != 333) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -521810160;
	int8_t x186 = INT8_MAX;
	static uint64_t x187 = UINT64_MAX;
	uint64_t x188 = 1680468720LLU;
	uint64_t t46 = 3301143679752199070LLU;

	t46 = (x185^((x186==x187)%x188));

	if (t46 != 18446744073187741456LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = UINT8_MAX;
	uint32_t x190 = 2528U;
	static volatile int32_t x191 = INT32_MIN;
	static volatile int64_t x192 = INT64_MIN;
	static int64_t t47 = -44580346LL;

	t47 = (x189^((x190==x191)%x192));

	if (t47 != 255LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	int64_t x196 = 2309178770372LL;
	volatile int64_t t48 = 697840975LL;

	t48 = (x193^((x194==x195)%x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	int16_t x198 = -235;
	static volatile int16_t x199 = -1;
	uint32_t x200 = 14479U;
	volatile uint32_t t49 = 16320U;

	t49 = (x197^((x198==x199)%x200));

	if (t49 != 4294967168U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = -1826LL;
	int64_t x203 = INT64_MIN;
	uint32_t x204 = 2141340861U;
	volatile int64_t t50 = 7LL;

	t50 = (x201^((x202==x203)%x204));

	if (t50 != -1826LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MAX;
	int64_t x206 = -2277214926626249627LL;
	int32_t x207 = INT32_MAX;
	static int64_t x208 = INT64_MIN;
	static volatile int64_t t51 = INT64_MAX;

	t51 = (x205^((x206==x207)%x208));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x210 = -1;
	static int16_t x211 = 92;
	int32_t x212 = -257379;
	volatile int64_t t52 = 1LL;

	t52 = (x209^((x210==x211)%x212));

	if (t52 != -985307310538857LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = 9;
	static int16_t x215 = -3168;
	int16_t x216 = -242;
	int32_t t53 = -23003;

	t53 = (x213^((x214==x215)%x216));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 15455U;
	volatile int8_t x218 = -1;
	uint32_t x219 = 1072872660U;
	static int32_t t54 = -44127513;

	t54 = (x217^((x218==x219)%x220));

	if (t54 != 15455) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 11868U;
	static volatile int16_t x223 = 0;
	static int32_t x224 = INT32_MAX;
	volatile int32_t t55 = 16258362;

	t55 = (x221^((x222==x223)%x224));

	if (t55 != 11868) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x226 = 6U;
	int16_t x227 = 1;
	int32_t x228 = -12;

	t56 = (x225^((x226==x227)%x228));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 43915506849471276LLU;
	int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MIN;
	int64_t x232 = 27921535180253847LL;
	static volatile uint64_t t57 = 1580716LLU;

	t57 = (x229^((x230==x231)%x232));

	if (t57 != 43915506849471277LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 40790536U;
	volatile uint32_t x235 = UINT32_MAX;
	uint32_t t58 = 357287500U;

	t58 = (x233^((x234==x235)%x236));

	if (t58 != 40790536U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	volatile int8_t x238 = INT8_MAX;
	int64_t x239 = 433467LL;
	uint8_t x240 = 1U;
	static volatile int32_t t59 = -2299352;

	t59 = (x237^((x238==x239)%x240));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 41U;
	int32_t x242 = -1;
	uint16_t x243 = 20U;
	volatile int64_t x244 = -1LL;

	t60 = (x241^((x242==x243)%x244));

	if (t60 != 41LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = 534;
	uint8_t x246 = 46U;
	int8_t x247 = -35;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = -783;

	t61 = (x245^((x246==x247)%x248));

	if (t61 != 534) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = 1;
	int64_t x251 = 26396468LL;
	static int64_t t62 = INT64_MAX;

	t62 = (x249^((x250==x251)%x252));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 1;
	int64_t x254 = -290LL;
	static uint16_t x255 = 0U;
	volatile int32_t t63 = 3111251;

	t63 = (x253^((x254==x255)%x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x258 = -1LL;
	volatile int8_t x259 = INT8_MIN;
	volatile uint8_t x260 = 6U;

	t64 = (x257^((x258==x259)%x260));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 917U;
	uint8_t x262 = 3U;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -36227;

	t65 = (x261^((x262==x263)%x264));

	if (t65 != 917) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	volatile int64_t x267 = INT64_MIN;
	int32_t x268 = -11788041;
	volatile int32_t t66 = 126578;

	t66 = (x265^((x266==x267)%x268));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x270 = INT16_MIN;
	int8_t x271 = -43;

	t67 = (x269^((x270==x271)%x272));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	volatile int8_t x274 = -1;
	volatile int32_t x275 = -19;
	static uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = 2841168;

	t68 = (x273^((x274==x275)%x276));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x278 = INT32_MAX;
	static int8_t x279 = INT8_MIN;
	static int64_t t69 = -944LL;

	t69 = (x277^((x278==x279)%x280));

	if (t69 != 255LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 176331952LLU;
	volatile int32_t x282 = INT32_MIN;
	uint8_t x283 = 46U;
	uint32_t x284 = 96334U;
	volatile uint64_t t70 = 126434359736321LLU;

	t70 = (x281^((x282==x283)%x284));

	if (t70 != 176331952LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	int64_t x286 = INT64_MAX;
	static volatile int16_t x287 = -1;
	volatile int64_t t71 = -1970011110434208723LL;

	t71 = (x285^((x286==x287)%x288));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = -1;
	int8_t x292 = 1;

	t72 = (x289^((x290==x291)%x292));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = 2;
	int8_t x295 = -3;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x293^((x294==x295)%x296));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = -7;
	int8_t x299 = -1;
	static int16_t x300 = INT16_MIN;
	int32_t t74 = -33412655;

	t74 = (x297^((x298==x299)%x300));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	volatile uint32_t x302 = 38956921U;
	uint32_t x303 = 59843154U;
	uint16_t x304 = 173U;
	static int64_t t75 = INT64_MIN;

	t75 = (x301^((x302==x303)%x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 2U;
	int32_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	static int16_t x308 = 4;

	t76 = (x305^((x306==x307)%x308));

	if (t76 != 3U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = UINT64_MAX;
	static volatile int32_t x311 = 1;
	int8_t x312 = -1;

	t77 = (x309^((x310==x311)%x312));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = -1LL;
	int16_t x314 = INT16_MIN;
	uint32_t x315 = 28U;
	int32_t x316 = INT32_MIN;
	volatile int64_t t78 = -261749458761103LL;

	t78 = (x313^((x314==x315)%x316));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -62;
	int64_t x318 = INT64_MIN;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = UINT16_MAX;
	static volatile int32_t t79 = -261;

	t79 = (x317^((x318==x319)%x320));

	if (t79 != -62) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -11492;
	volatile int64_t x322 = INT64_MIN;
	int64_t x323 = INT64_MIN;
	volatile uint16_t x324 = 11U;
	int32_t t80 = 36;

	t80 = (x321^((x322==x323)%x324));

	if (t80 != -11491) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = 1U;
	int8_t x328 = INT8_MIN;

	t81 = (x325^((x326==x327)%x328));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int16_t x330 = -1;
	int32_t x331 = 23;
	static int32_t x332 = -4;
	volatile int32_t t82 = -1454;

	t82 = (x329^((x330==x331)%x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MIN;
	uint16_t x334 = 3692U;
	int32_t x336 = -1;
	static int32_t t83 = 46275;

	t83 = (x333^((x334==x335)%x336));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 2240U;
	uint32_t x338 = 826503561U;
	uint8_t x339 = UINT8_MAX;
	static int64_t x340 = INT64_MAX;
	int64_t t84 = -2418746489170067748LL;

	t84 = (x337^((x338==x339)%x340));

	if (t84 != 2240LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MAX;
	int16_t x343 = INT16_MIN;
	static uint32_t x344 = 605026398U;
	static uint32_t t85 = 230524970U;

	t85 = (x341^((x342==x343)%x344));

	if (t85 != 2147483647U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -321;
	volatile int64_t x346 = INT64_MIN;
	int8_t x347 = 14;
	int8_t x348 = -2;

	t86 = (x345^((x346==x347)%x348));

	if (t86 != -321) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x349 = 24U;
	volatile int64_t x350 = -1LL;
	int8_t x352 = 11;
	int32_t t87 = 2;

	t87 = (x349^((x350==x351)%x352));

	if (t87 != 24) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 4U;
	int64_t x354 = INT64_MIN;
	int8_t x355 = -12;
	int64_t x356 = -1LL;
	int64_t t88 = -131537610324509292LL;

	t88 = (x353^((x354==x355)%x356));

	if (t88 != 4LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 16;
	static int8_t x358 = INT8_MAX;
	static int16_t x359 = 643;
	int32_t x360 = INT32_MIN;

	t89 = (x357^((x358==x359)%x360));

	if (t89 != 16) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = UINT16_MAX;
	uint64_t x363 = 556675333418977LLU;
	volatile int16_t x364 = INT16_MIN;
	int32_t t90 = 5747484;

	t90 = (x361^((x362==x363)%x364));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = UINT64_MAX;
	uint8_t x367 = UINT8_MAX;
	static int8_t x368 = -1;

	t91 = (x365^((x366==x367)%x368));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = INT16_MIN;
	static volatile int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MIN;
	uint32_t x372 = 191984670U;
	volatile uint32_t t92 = 2126788291U;

	t92 = (x369^((x370==x371)%x372));

	if (t92 != 4294934528U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x374 = 13U;
	static int32_t x375 = INT32_MIN;
	int64_t t93 = 4434LL;

	t93 = (x373^((x374==x375)%x376));

	if (t93 != -2147483648LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MIN;
	volatile int32_t x379 = INT32_MIN;
	volatile int8_t x380 = INT8_MIN;
	volatile uint64_t t94 = 1816284872960LLU;

	t94 = (x377^((x378==x379)%x380));

	if (t94 != 1463853084LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	volatile uint8_t x382 = 41U;
	int8_t x383 = INT8_MIN;
	volatile int64_t x384 = -1LL;

	t95 = (x381^((x382==x383)%x384));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = -445;
	uint32_t x386 = 3367073U;
	static volatile uint64_t t96 = 17741728790LLU;

	t96 = (x385^((x386==x387)%x388));

	if (t96 != 18446744073709551171LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = INT16_MAX;
	volatile int8_t x390 = INT8_MAX;
	int64_t x391 = INT64_MIN;
	volatile int16_t x392 = INT16_MIN;
	int32_t t97 = 7608;

	t97 = (x389^((x390==x391)%x392));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	static volatile int64_t x394 = INT64_MIN;
	uint8_t x395 = 20U;
	uint16_t x396 = 603U;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x393^((x394==x395)%x396));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -27555238;
	static int32_t x399 = INT32_MIN;
	static int32_t x400 = INT32_MAX;
	volatile int32_t t99 = 38;

	t99 = (x397^((x398==x399)%x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

