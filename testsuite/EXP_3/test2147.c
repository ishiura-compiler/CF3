#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 7U;
static volatile int32_t t1 = -27733;
uint32_t x14 = 925732U;
volatile int32_t t3 = 4145606;
int16_t x22 = INT16_MIN;
int32_t x33 = -15373982;
int8_t x43 = 5;
int32_t t10 = -3633574;
uint8_t x50 = 0U;
volatile int8_t x54 = -1;
static volatile uint16_t x58 = 11U;
int16_t x62 = INT16_MIN;
int64_t x63 = INT64_MIN;
uint16_t x66 = UINT16_MAX;
volatile int32_t t16 = 26;
int16_t x72 = -1;
uint8_t x74 = 6U;
uint64_t x86 = 1123141016278LLU;
int64_t x88 = -1LL;
static volatile int64_t x89 = INT64_MIN;
uint64_t t21 = 7725849LLU;
static int8_t x93 = 16;
int16_t x95 = -1;
int16_t x102 = 5187;
int64_t x109 = 8145516LL;
int32_t x110 = 140;
volatile uint16_t x111 = 3907U;
static int32_t t26 = 3607149;
uint16_t x122 = UINT16_MAX;
volatile int32_t t29 = 29;
int32_t x130 = -9471266;
int16_t x135 = INT16_MIN;
int8_t x138 = INT8_MAX;
int8_t x140 = INT8_MIN;
uint16_t x155 = 733U;
volatile int8_t x160 = -1;
int64_t x163 = INT64_MIN;
int64_t x164 = -176337LL;
uint8_t x169 = 74U;
int32_t t41 = 3060;
volatile int32_t t43 = 39397176;
volatile uint8_t x183 = UINT8_MAX;
volatile int8_t x185 = -1;
int32_t x191 = -8161563;
uint64_t x197 = UINT64_MAX;
volatile int32_t t50 = -95023;
int16_t x213 = 0;
int32_t x225 = INT32_MAX;
int8_t x231 = -1;
int64_t x234 = INT64_MAX;
uint64_t t57 = 8970393LLU;
int32_t t60 = 55;
uint64_t t64 = 16LLU;
int8_t x267 = INT8_MIN;
static int64_t t67 = -1720LL;
int32_t t68 = 335804595;
uint16_t x287 = 458U;
uint64_t x288 = 6039384185544177LLU;
static uint32_t x289 = 657280747U;
volatile int64_t t73 = -245285LL;
uint16_t x309 = UINT16_MAX;
uint64_t x312 = 223066934384LLU;
int64_t x317 = INT64_MAX;
volatile uint64_t x318 = 26167576142380252LLU;
uint16_t x323 = 3U;
volatile int32_t x327 = 265;
uint32_t t80 = 405277258U;
int64_t x330 = INT64_MIN;
static uint64_t x332 = 274465866697928811LLU;
uint64_t x335 = UINT64_MAX;
uint16_t x336 = UINT16_MAX;
static int32_t x340 = INT32_MIN;
uint16_t x355 = 2U;
volatile uint8_t x357 = 0U;
volatile uint32_t t88 = 867U;
volatile int8_t x362 = INT8_MAX;
int8_t x365 = INT8_MAX;
static int64_t x368 = -1LL;
int64_t x370 = -1LL;
volatile int16_t x373 = INT16_MAX;
uint8_t x375 = 2U;
static volatile int32_t t93 = -43647;
int64_t x381 = 12809880053339370LL;
volatile int16_t x382 = INT16_MAX;
uint8_t x383 = 11U;
volatile int16_t x388 = -230;


void f0(void) {
	int32_t x1 = -1;
	uint64_t x2 = 7LLU;
	int8_t x3 = -5;
	volatile int16_t x4 = INT16_MAX;
	static int32_t t0 = 69936484;

	t0 = ((x1<=x2)-(x3^x4));

	if (t0 != 32764) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MAX;
	static int32_t x8 = INT32_MIN;

	t1 = ((x5<=x6)-(x7^x8));

	if (t1 != 2147483521) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	uint16_t x10 = 381U;
	int8_t x11 = -38;
	volatile int32_t x12 = -1015;
	static volatile int32_t t2 = 69;

	t2 = ((x9<=x10)-(x11^x12));

	if (t2 != -978) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	int16_t x15 = INT16_MAX;
	static volatile int16_t x16 = INT16_MAX;

	t3 = ((x13<=x14)-(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 1;
	int8_t x18 = -1;
	int8_t x19 = INT8_MIN;
	static volatile int64_t x20 = INT64_MIN;
	int64_t t4 = -10875043964088974LL;

	t4 = ((x17<=x18)-(x19^x20));

	if (t4 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 21410U;
	int64_t x23 = INT64_MAX;
	volatile uint32_t x24 = UINT32_MAX;
	static volatile int64_t t5 = 1LL;

	t5 = ((x21<=x22)-(x23^x24));

	if (t5 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 474U;
	static volatile int64_t x26 = -232173LL;
	int8_t x27 = -33;
	static int64_t x28 = INT64_MIN;
	int64_t t6 = 826936312447LL;

	t6 = ((x25<=x26)-(x27^x28));

	if (t6 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 374521000;
	uint64_t x30 = 156229151LLU;
	int32_t x31 = INT32_MAX;
	int16_t x32 = 34;
	volatile int32_t t7 = -128183560;

	t7 = ((x29<=x30)-(x31^x32));

	if (t7 != -2147483613) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MAX;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t8 = 68448LLU;

	t8 = ((x33<=x34)-(x35^x36));

	if (t8 != 129LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 41U;
	volatile uint32_t x38 = UINT32_MAX;
	volatile int16_t x39 = INT16_MAX;
	volatile uint16_t x40 = 57U;
	static volatile int32_t t9 = 379513;

	t9 = ((x37<=x38)-(x39^x40));

	if (t9 != -32709) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	int64_t x42 = -1LL;
	uint16_t x44 = 0U;

	t10 = ((x41<=x42)-(x43^x44));

	if (t10 != -5) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MAX;
	int16_t x47 = INT16_MIN;
	volatile int8_t x48 = -12;
	int32_t t11 = 3410513;

	t11 = ((x45<=x46)-(x47^x48));

	if (t11 != -32755) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	static volatile int32_t x52 = -1;
	volatile int64_t t12 = -113LL;

	t12 = ((x49<=x50)-(x51^x52));

	if (t12 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 7050U;
	uint8_t x55 = UINT8_MAX;
	static int16_t x56 = INT16_MIN;
	int32_t t13 = -139901281;

	t13 = ((x53<=x54)-(x55^x56));

	if (t13 != 32513) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 1056815179LLU;
	uint32_t x59 = 186U;
	volatile uint32_t x60 = 605U;
	static uint32_t t14 = 38210947U;

	t14 = ((x57<=x58)-(x59^x60));

	if (t14 != 4294966553U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	volatile int64_t x64 = INT64_MIN;
	volatile int64_t t15 = -714600380149019594LL;

	t15 = ((x61<=x62)-(x63^x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 5086298798LL;
	volatile int8_t x67 = 0;
	int16_t x68 = -1;

	t16 = ((x65<=x66)-(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int16_t x70 = -67;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t t17 = 11;

	t17 = ((x69<=x70)-(x71^x72));

	if (t17 != 257) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 18266;
	volatile int64_t x75 = -1LL;
	int64_t x76 = 1458196121487LL;
	int64_t t18 = -8600675883634430LL;

	t18 = ((x73<=x74)-(x75^x76));

	if (t18 != 1458196121488LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 889;
	volatile int64_t x78 = -2906103742047LL;
	volatile int16_t x79 = -3155;
	int32_t x80 = 544;
	volatile int32_t t19 = -2399;

	t19 = ((x77<=x78)-(x79^x80));

	if (t19 != 3699) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 343476472322LLU;
	volatile int64_t x87 = -1716737024477LL;
	int64_t t20 = 0LL;

	t20 = ((x85<=x86)-(x87^x88));

	if (t20 != -1716737024475LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x90 = 1038643135U;
	int64_t x91 = -1LL;
	volatile uint64_t x92 = UINT64_MAX;

	t21 = ((x89<=x90)-(x91^x92));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x94 = -1LL;
	int32_t x96 = 9710163;
	int32_t t22 = 11064403;

	t22 = ((x93<=x94)-(x95^x96));

	if (t22 != 9710164) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MIN;
	static int16_t x98 = INT16_MIN;
	static int64_t x99 = 2LL;
	static uint8_t x100 = 64U;
	volatile int64_t t23 = 201377801LL;

	t23 = ((x97<=x98)-(x99^x100));

	if (t23 != -66LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	volatile uint16_t x103 = 17U;
	int64_t x104 = -1LL;
	int64_t t24 = 0LL;

	t24 = ((x101<=x102)-(x103^x104));

	if (t24 != 19LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = 5325U;
	uint64_t x106 = UINT64_MAX;
	int32_t x107 = INT32_MIN;
	uint16_t x108 = 49U;
	volatile int32_t t25 = 624;

	t25 = ((x105<=x106)-(x107^x108));

	if (t25 != 2147483600) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x112 = INT16_MIN;

	t26 = ((x109<=x110)-(x111^x112));

	if (t26 != 28861) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = INT16_MIN;
	static volatile int16_t x114 = -1;
	uint64_t x115 = 4006482186122294LLU;
	uint16_t x116 = 840U;
	static uint64_t t27 = 1590765061981171051LLU;

	t27 = ((x113<=x114)-(x115^x116));

	if (t27 != 18442737591523428483LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x117 = 14U;
	uint8_t x118 = 63U;
	volatile int8_t x119 = -5;
	int32_t x120 = INT32_MIN;
	int32_t t28 = -25675287;

	t28 = ((x117<=x118)-(x119^x120));

	if (t28 != -2147483642) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -99;
	int8_t x123 = INT8_MIN;
	volatile int16_t x124 = -1;

	t29 = ((x121<=x122)-(x123^x124));

	if (t29 != -126) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x126 = -9;
	int32_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	uint32_t t30 = 1U;

	t30 = ((x125<=x126)-(x127^x128));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = UINT8_MAX;
	uint8_t x131 = 0U;
	volatile int16_t x132 = INT16_MIN;
	static int32_t t31 = 7689;

	t31 = ((x129<=x130)-(x131^x132));

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 21254U;
	static int32_t x134 = 636603909;
	uint64_t x136 = UINT64_MAX;
	uint64_t t32 = 2244666631940LLU;

	t32 = ((x133<=x134)-(x135^x136));

	if (t32 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 541034706187869740LLU;
	int8_t x139 = INT8_MIN;
	volatile int32_t t33 = 914140;

	t33 = ((x137<=x138)-(x139^x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	volatile uint64_t x142 = 625449900LLU;
	static int8_t x143 = -2;
	int8_t x144 = INT8_MIN;
	int32_t t34 = 891661;

	t34 = ((x141<=x142)-(x143^x144));

	if (t34 != -126) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = 5684;
	int16_t x146 = INT16_MIN;
	volatile int64_t x147 = INT64_MIN;
	volatile uint32_t x148 = 13U;
	static int64_t t35 = -150168LL;

	t35 = ((x145<=x146)-(x147^x148));

	if (t35 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = 43451054812037LL;
	uint32_t x150 = 11802397U;
	static uint16_t x151 = 14155U;
	static int64_t x152 = INT64_MIN;
	int64_t t36 = -2507076957846LL;

	t36 = ((x149<=x150)-(x151^x152));

	if (t36 != 9223372036854761653LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -5;
	static volatile int64_t x154 = -191383805231410110LL;
	static int64_t x156 = -1LL;
	volatile int64_t t37 = -14LL;

	t37 = ((x153<=x154)-(x155^x156));

	if (t37 != 734LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x158 = 77U;
	volatile uint64_t x159 = UINT64_MAX;
	volatile uint64_t t38 = 864LLU;

	t38 = ((x157<=x158)-(x159^x160));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x161 = 125641282U;
	int64_t x162 = INT64_MIN;
	static int64_t t39 = 834LL;

	t39 = ((x161<=x162)-(x163^x164));

	if (t39 != -9223372036854599471LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 126U;
	static int8_t x166 = -8;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = INT64_MAX;
	static volatile int64_t t40 = -231LL;

	t40 = ((x165<=x166)-(x167^x168));

	if (t40 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x170 = -1;
	volatile int16_t x171 = INT16_MIN;
	int16_t x172 = -11;

	t41 = ((x169<=x170)-(x171^x172));

	if (t41 != -32757) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 438LLU;
	static int8_t x174 = 3;
	int16_t x175 = -1;
	int8_t x176 = -31;
	volatile int32_t t42 = -1;

	t42 = ((x173<=x174)-(x175^x176));

	if (t42 != -30) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x177 = -1;
	int8_t x178 = -1;
	int8_t x179 = -9;
	static uint8_t x180 = 1U;

	t43 = ((x177<=x178)-(x179^x180));

	if (t43 != 11) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x181 = 1615851U;
	int8_t x182 = INT8_MAX;
	volatile uint8_t x184 = UINT8_MAX;
	int32_t t44 = -301;

	t44 = ((x181<=x182)-(x183^x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x186 = INT32_MIN;
	static uint32_t x187 = UINT32_MAX;
	int32_t x188 = INT32_MIN;
	static uint32_t t45 = 264906222U;

	t45 = ((x185<=x186)-(x187^x188));

	if (t45 != 2147483649U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x189 = 13U;
	int32_t x190 = -1;
	int64_t x192 = INT64_MAX;
	int64_t t46 = -458823096LL;

	t46 = ((x189<=x190)-(x191^x192));

	if (t46 != 9223372036846614246LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = 2113480U;
	static uint32_t x194 = 43874U;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	volatile int64_t t47 = -29525099LL;

	t47 = ((x193<=x194)-(x195^x196));

	if (t47 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x198 = 9;
	static volatile int32_t x199 = 1564;
	static int64_t x200 = INT64_MAX;
	int64_t t48 = -67874402580LL;

	t48 = ((x197<=x198)-(x199^x200));

	if (t48 != -9223372036854774243LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 224048U;
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = -1;
	static int32_t x204 = INT32_MIN;
	int32_t t49 = 14864;

	t49 = ((x201<=x202)-(x203^x204));

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MIN;
	static volatile int64_t x206 = -162LL;
	int8_t x207 = -29;
	static int16_t x208 = 2;

	t50 = ((x205<=x206)-(x207^x208));

	if (t50 != 32) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = 7648049181249LL;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = 38;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t51 = -3258;

	t51 = ((x209<=x210)-(x211^x212));

	if (t51 != 90) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x214 = INT16_MIN;
	static volatile int16_t x215 = INT16_MIN;
	int64_t x216 = -476198478657253LL;
	int64_t t52 = -11LL;

	t52 = ((x213<=x214)-(x215^x216));

	if (t52 != -476198478661915LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	static volatile uint8_t x218 = UINT8_MAX;
	volatile int8_t x219 = -1;
	static uint32_t x220 = UINT32_MAX;
	volatile uint32_t t53 = 1869199U;

	t53 = ((x217<=x218)-(x219^x220));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MAX;
	static int16_t x223 = INT16_MIN;
	int8_t x224 = 1;
	int32_t t54 = -680;

	t54 = ((x221<=x222)-(x223^x224));

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x226 = -1LL;
	int8_t x227 = -1;
	static int8_t x228 = INT8_MIN;
	int32_t t55 = 18;

	t55 = ((x225<=x226)-(x227^x228));

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x229 = 128U;
	int32_t x230 = 2690;
	static volatile int32_t x232 = 3527273;
	int32_t t56 = -279702;

	t56 = ((x229<=x230)-(x231^x232));

	if (t56 != 3527275) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = INT8_MIN;
	uint64_t x235 = 30418271557LLU;
	uint32_t x236 = 3855196U;

	t57 = ((x233<=x234)-(x235^x236));

	if (t57 != 18446744043289629160LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	int8_t x238 = -1;
	int64_t x239 = INT64_MAX;
	int32_t x240 = INT32_MIN;
	volatile int64_t t58 = -41490986LL;

	t58 = ((x237<=x238)-(x239^x240));

	if (t58 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x241 = 1U;
	static volatile uint64_t x242 = 8767LLU;
	int16_t x243 = -401;
	uint16_t x244 = UINT16_MAX;
	int32_t t59 = 24044631;

	t59 = ((x241<=x242)-(x243^x244));

	if (t59 != 65137) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = 699979831835907LL;
	int8_t x246 = 0;
	static volatile int8_t x247 = -1;
	int8_t x248 = -1;

	t60 = ((x245<=x246)-(x247^x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x249 = 0;
	uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 1U;
	int64_t x252 = 87830064765937LL;
	int64_t t61 = 1859087640882687LL;

	t61 = ((x249<=x250)-(x251^x252));

	if (t61 != -87830064765935LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	volatile int64_t x256 = INT64_MAX;
	static int64_t t62 = 239138664233LL;

	t62 = ((x253<=x254)-(x255^x256));

	if (t62 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -1;
	static int32_t x258 = INT32_MAX;
	uint32_t x259 = UINT32_MAX;
	uint8_t x260 = 39U;
	uint32_t t63 = 1651244957U;

	t63 = ((x257<=x258)-(x259^x260));

	if (t63 != 41U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = -488945;
	int32_t x262 = INT32_MIN;
	int64_t x263 = -1LL;
	uint64_t x264 = 2996891128939LLU;

	t64 = ((x261<=x262)-(x263^x264));

	if (t64 != 2996891128940LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = 966;
	int16_t x266 = INT16_MIN;
	uint16_t x268 = 930U;
	int32_t t65 = -409555;

	t65 = ((x265<=x266)-(x267^x268));

	if (t65 != 990) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = UINT64_MAX;
	static int8_t x270 = INT8_MIN;
	uint16_t x271 = 255U;
	int8_t x272 = 1;
	volatile int32_t t66 = 172386;

	t66 = ((x269<=x270)-(x271^x272));

	if (t66 != -254) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -1;
	volatile uint8_t x274 = UINT8_MAX;
	static uint32_t x275 = 244U;
	int64_t x276 = -1LL;

	t67 = ((x273<=x274)-(x275^x276));

	if (t67 != 246LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MAX;
	uint16_t x280 = UINT16_MAX;

	t68 = ((x277<=x278)-(x279^x280));

	if (t68 != -65407) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = 294448986731LL;
	static int16_t x282 = 49;
	int8_t x283 = -1;
	int16_t x284 = INT16_MIN;
	volatile int32_t t69 = -300965152;

	t69 = ((x281<=x282)-(x283^x284));

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = -1;
	volatile int8_t x286 = INT8_MAX;
	uint64_t t70 = 3300833LLU;

	t70 = ((x285<=x286)-(x287^x288));

	if (t70 != 18440704689524007878LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x290 = 8127467355627466962LLU;
	int64_t x291 = -20LL;
	int16_t x292 = 6799;
	volatile int64_t t71 = -3521654482118627LL;

	t71 = ((x289<=x290)-(x291^x292));

	if (t71 != 6814LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x293 = 1U;
	uint32_t x294 = 43U;
	static int64_t x295 = INT64_MIN;
	volatile uint16_t x296 = 7U;
	volatile int64_t t72 = -317080623LL;

	t72 = ((x293<=x294)-(x295^x296));

	if (t72 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	int8_t x298 = INT8_MAX;
	int64_t x299 = 2534690LL;
	volatile int16_t x300 = INT16_MIN;

	t73 = ((x297<=x298)-(x299^x300));

	if (t73 != 2544351LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1;
	uint16_t x302 = 3U;
	int64_t x303 = -31653073975820420LL;
	int16_t x304 = INT16_MIN;
	int64_t t74 = -286467267432748LL;

	t74 = ((x301<=x302)-(x303^x304));

	if (t74 != -31653073975820155LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = -14904594000LL;
	int8_t x306 = INT8_MAX;
	uint64_t x307 = 15LLU;
	int64_t x308 = -1LL;
	uint64_t t75 = 14194655745LLU;

	t75 = ((x305<=x306)-(x307^x308));

	if (t75 != 17LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x310 = 438;
	int8_t x311 = 39;
	volatile uint64_t t76 = 13978645709414732LLU;

	t76 = ((x309<=x310)-(x311^x312));

	if (t76 != 18446743850642617257LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MAX;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = 2754U;
	volatile int64_t t77 = -12743482LL;

	t77 = ((x313<=x314)-(x315^x316));

	if (t77 != 9223372036854773055LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x319 = 9954;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t78 = -1;

	t78 = ((x317<=x318)-(x319^x320));

	if (t78 != -22813) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x321 = INT32_MAX;
	uint32_t x322 = 4U;
	int64_t x324 = -1LL;
	int64_t t79 = 1408LL;

	t79 = ((x321<=x322)-(x323^x324));

	if (t79 != 4LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x325 = 608;
	volatile uint8_t x326 = 0U;
	volatile uint32_t x328 = UINT32_MAX;

	t80 = ((x325<=x326)-(x327^x328));

	if (t80 != 266U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x329 = INT16_MIN;
	volatile int32_t x331 = -1;
	volatile uint64_t t81 = 5115590352LLU;

	t81 = ((x329<=x330)-(x331^x332));

	if (t81 != 274465866697928812LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x333 = UINT32_MAX;
	uint16_t x334 = 1584U;
	uint64_t t82 = 449414777893015021LLU;

	t82 = ((x333<=x334)-(x335^x336));

	if (t82 != 65536LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MIN;
	int64_t x338 = -61028015173987LL;
	int8_t x339 = INT8_MIN;
	volatile int32_t t83 = 5;

	t83 = ((x337<=x338)-(x339^x340));

	if (t83 != -2147483519) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MIN;
	static int64_t x343 = 38790024872LL;
	volatile int8_t x344 = -1;
	int64_t t84 = -7541219LL;

	t84 = ((x341<=x342)-(x343^x344));

	if (t84 != 38790024873LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = -95766389941456008LL;
	uint64_t x346 = 753LLU;
	uint32_t x347 = 30640423U;
	int16_t x348 = -792;
	static volatile uint32_t t85 = 7U;

	t85 = ((x345<=x346)-(x347^x348));

	if (t85 != 30640689U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = 45053;
	volatile int64_t x351 = INT64_MIN;
	int32_t x352 = -19;
	static int64_t t86 = -66831030LL;

	t86 = ((x349<=x350)-(x351^x352));

	if (t86 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	int8_t x356 = -3;
	int32_t t87 = -3;

	t87 = ((x353<=x354)-(x355^x356));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = INT32_MIN;

	t88 = ((x357<=x358)-(x359^x360));

	if (t88 != 2147483649U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = -13349;
	static volatile uint64_t x363 = 4057052LLU;
	int64_t x364 = 45495LL;
	static uint64_t t89 = 2769727LLU;

	t89 = ((x361<=x362)-(x363^x364));

	if (t89 != 18446744073705531798LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	volatile int64_t t90 = 52302706112419533LL;

	t90 = ((x365<=x366)-(x367^x368));

	if (t90 != -127LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = 11U;
	int32_t x371 = INT32_MIN;
	int64_t x372 = -1LL;
	int64_t t91 = -12268421836029163LL;

	t91 = ((x369<=x370)-(x371^x372));

	if (t91 != -2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x374 = 123336U;
	uint64_t x376 = 1125820454287709LLU;
	volatile uint64_t t92 = 515164708LLU;

	t92 = ((x373<=x374)-(x375^x376));

	if (t92 != 18445618253255263906LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x377 = 9U;
	static int8_t x378 = INT8_MIN;
	volatile int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MAX;

	t93 = ((x377<=x378)-(x379^x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x384 = UINT8_MAX;
	static int32_t t94 = -328038569;

	t94 = ((x381<=x382)-(x383^x384));

	if (t94 != -244) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x385 = 47U;
	uint64_t x386 = 140LLU;
	static int8_t x387 = INT8_MIN;
	int32_t t95 = 71275876;

	t95 = ((x385<=x386)-(x387^x388));

	if (t95 != -153) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x389 = 19952;
	static volatile int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;
	static volatile int64_t t96 = 61455561LL;

	t96 = ((x389<=x390)-(x391^x392));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MIN;
	volatile int8_t x395 = -1;
	int32_t x396 = -376439;
	int32_t t97 = 309;

	t97 = ((x393<=x394)-(x395^x396));

	if (t97 != -376437) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x397 = -1LL;
	uint64_t x398 = 1LLU;
	volatile int16_t x399 = -2819;
	int8_t x400 = INT8_MIN;
	volatile int32_t t98 = 15;

	t98 = ((x397<=x398)-(x399^x400));

	if (t98 != -2941) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = -175816LL;
	uint32_t x402 = 1384496823U;
	static volatile uint64_t x403 = 1020177659478LLU;
	static int64_t x404 = INT64_MIN;
	volatile uint64_t t99 = 1LLU;

	t99 = ((x401<=x402)-(x403^x404));

	if (t99 != 9223371016677116331LLU) { NG(); } else { ; }
	
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

