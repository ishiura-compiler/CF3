#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x1 = 44230307236534LLU;
volatile int64_t x3 = 267695037LL;
volatile uint32_t x4 = UINT32_MAX;
uint64_t t0 = 24549852952LLU;
uint32_t x19 = 2907533U;
int32_t t4 = -1;
uint32_t x41 = 90U;
static volatile uint32_t t10 = 54710037U;
volatile int16_t x61 = INT16_MIN;
int64_t x72 = 973627895041127LL;
uint32_t x76 = 1157U;
volatile int32_t t20 = -7331;
static uint8_t x88 = 0U;
volatile int64_t t21 = 30977887LL;
int32_t x93 = 15;
static uint16_t x99 = 6U;
static uint64_t x118 = UINT64_MAX;
uint32_t x119 = 126U;
volatile int32_t x120 = -5865;
int32_t t29 = -17;
volatile int32_t x121 = -1;
volatile int16_t x124 = INT16_MIN;
uint16_t x126 = 2610U;
int32_t x136 = -28345062;
static volatile int32_t x138 = INT32_MAX;
volatile int8_t x139 = INT8_MAX;
static volatile int32_t t36 = -6243;
uint32_t x149 = 59U;
uint32_t x155 = 27810U;
uint64_t x165 = 4627243LLU;
int32_t x166 = INT32_MIN;
int8_t x173 = INT8_MIN;
uint64_t x180 = 5686254LLU;
uint64_t x185 = 10957242844LLU;
static int64_t x186 = -158LL;
static uint8_t x187 = UINT8_MAX;
int16_t x189 = -99;
volatile int32_t t50 = 663463273;
static int8_t x212 = 9;
int32_t x214 = INT32_MIN;
int32_t x231 = INT32_MAX;
volatile int64_t t58 = 0LL;
volatile int32_t t59 = -64;
volatile int32_t t60 = 6;
int16_t x245 = INT16_MIN;
uint64_t x246 = 17167042502LLU;
static int32_t x249 = INT32_MIN;
volatile int32_t t62 = -2;
static int16_t x253 = INT16_MIN;
static uint16_t x254 = 0U;
volatile int8_t x256 = INT8_MIN;
volatile int32_t t63 = 55789;
uint8_t x260 = 2U;
static volatile int16_t x270 = -1;
uint32_t x274 = 119222U;
int32_t x278 = INT32_MIN;
static uint32_t x279 = 9619U;
int8_t x282 = -19;
int64_t x285 = -1LL;
static int32_t x293 = 378182356;
volatile int32_t t75 = -137682600;
volatile uint16_t x305 = 5U;
uint16_t x308 = 67U;
static uint64_t x309 = 32240782LLU;
int8_t x316 = INT8_MIN;
int8_t x317 = INT8_MAX;
static volatile uint32_t t80 = 55307648U;
int8_t x326 = INT8_MIN;
volatile uint16_t x330 = UINT16_MAX;
uint32_t x339 = 460887U;
int8_t x351 = INT8_MAX;
int64_t x353 = -57322LL;
uint8_t x354 = 3U;
int64_t t88 = 72477736819494561LL;
static uint8_t x361 = 0U;
uint64_t x376 = 6169461329173904LLU;
uint32_t t93 = 123499167U;
int64_t x377 = INT64_MIN;
volatile uint64_t x379 = 10731430LLU;
volatile int8_t x384 = -19;
volatile int32_t t95 = 18851253;
int32_t x385 = -1;
uint64_t x386 = 6668205689576896648LLU;
uint64_t t97 = 135564492271LLU;


void f0(void) {
	int8_t x2 = INT8_MAX;

	t0 = (x1&((x2^x3)<x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 145622206;
	volatile int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 142;

	t1 = (x5&((x6^x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 320U;
	int32_t x10 = INT32_MIN;
	int64_t x11 = INT64_MIN;
	static uint16_t x12 = 7883U;
	volatile int32_t t2 = 12;

	t2 = (x9&((x10^x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 418064019172453LLU;
	volatile int16_t x14 = INT16_MIN;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = 501629200534373334LLU;
	static uint64_t t3 = 7LLU;

	t3 = (x13&((x14^x15)<x16));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int32_t x18 = -1;
	uint8_t x20 = 0U;

	t4 = (x17&((x18^x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static int32_t x22 = -30264;
	int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MIN;
	int64_t t5 = 31344LL;

	t5 = (x21&((x22^x23)<x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MIN;
	static int8_t x26 = INT8_MIN;
	uint8_t x27 = 13U;
	static volatile uint8_t x28 = 1U;
	int32_t t6 = 666501;

	t6 = (x25&((x26^x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int32_t x30 = -1;
	uint16_t x31 = 3U;
	uint8_t x32 = UINT8_MAX;
	int32_t t7 = 216008;

	t7 = (x29&((x30^x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = -1417;
	volatile int16_t x35 = -1;
	volatile int64_t x36 = INT64_MAX;
	int32_t t8 = 102241;

	t8 = (x33&((x34^x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -248;
	int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MAX;
	static int64_t x40 = 5488LL;
	int32_t t9 = -231;

	t9 = (x37&((x38^x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MAX;
	static uint64_t x43 = UINT64_MAX;
	int64_t x44 = 1403LL;

	t10 = (x41&((x42^x43)<x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	int32_t x46 = INT32_MAX;
	static int16_t x47 = -1;
	int32_t x48 = 977760922;
	static volatile int32_t t11 = 93;

	t11 = (x45&((x46^x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int16_t x50 = -1;
	static int64_t x51 = INT64_MAX;
	int8_t x52 = INT8_MIN;
	static volatile uint32_t t12 = 19704099U;

	t12 = (x49&((x50^x51)<x52));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	volatile int32_t x54 = 30476113;
	int64_t x55 = -1LL;
	int64_t x56 = -14360LL;
	int32_t t13 = -35937584;

	t13 = (x53&((x54^x55)<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -1;
	uint8_t x58 = UINT8_MAX;
	volatile uint16_t x59 = 5787U;
	int16_t x60 = INT16_MAX;
	volatile int32_t t14 = 1773;

	t14 = (x57&((x58^x59)<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = 2903U;
	int8_t x63 = INT8_MAX;
	uint64_t x64 = 3105174983LLU;
	int32_t t15 = -7739;

	t15 = (x61&((x62^x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = INT16_MAX;
	int8_t x66 = INT8_MIN;
	int8_t x67 = 0;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = 6;

	t16 = (x65&((x66^x67)<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	uint64_t x70 = 93031255108134062LLU;
	int64_t x71 = INT64_MAX;
	int64_t t17 = -113LL;

	t17 = (x69&((x70^x71)<x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	static int32_t x74 = -4;
	int32_t x75 = INT32_MIN;
	static volatile int32_t t18 = 14128252;

	t18 = (x73&((x74^x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int64_t x78 = INT64_MIN;
	int16_t x79 = 459;
	int8_t x80 = INT8_MAX;
	int32_t t19 = -117042944;

	t19 = (x77&((x78^x79)<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 299U;
	int8_t x82 = INT8_MIN;
	volatile int16_t x83 = 318;
	uint32_t x84 = 102U;

	t20 = (x81&((x82^x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -41877486247696040LL;
	static uint64_t x86 = UINT64_MAX;
	int16_t x87 = INT16_MAX;

	t21 = (x85&((x86^x87)<x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile uint32_t x90 = 161296268U;
	volatile int8_t x91 = -1;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 1258;

	t22 = (x89&((x90^x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	uint32_t x96 = 2067U;
	int32_t t23 = -11926;

	t23 = (x93&((x94^x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 1234849LLU;
	int32_t x98 = INT32_MIN;
	uint8_t x100 = 23U;
	volatile uint64_t t24 = 84LLU;

	t24 = (x97&((x98^x99)<x100));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	uint64_t x102 = 899986080LLU;
	int32_t x103 = INT32_MIN;
	static volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -1;

	t25 = (x101&((x102^x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 22LL;
	uint8_t x106 = UINT8_MAX;
	volatile uint16_t x107 = 2209U;
	static uint32_t x108 = 8256153U;
	volatile int64_t t26 = 159495238457483LL;

	t26 = (x105&((x106^x107)<x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 841731338737LLU;
	uint32_t x110 = 406660539U;
	volatile int16_t x111 = INT16_MIN;
	static int8_t x112 = -1;
	uint64_t t27 = 597023877232LLU;

	t27 = (x109&((x110^x111)<x112));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile int64_t x114 = 594793565473269LL;
	uint16_t x115 = 1U;
	int32_t x116 = INT32_MAX;
	int32_t t28 = 2567;

	t28 = (x113&((x114^x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 726U;

	t29 = (x117&((x118^x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -696;
	static int32_t x123 = 2;
	int32_t t30 = -9165;

	t30 = (x121&((x122^x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x125 = 81U;
	volatile int64_t x127 = -1029500661943360LL;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = 2679947;

	t31 = (x125&((x126^x127)<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MIN;
	int16_t x131 = 1;
	static int8_t x132 = -28;
	static volatile int32_t t32 = -6130735;

	t32 = (x129&((x130^x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 115U;
	volatile int16_t x134 = -51;
	static uint8_t x135 = UINT8_MAX;
	volatile int32_t t33 = 52;

	t33 = (x133&((x134^x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	int16_t x140 = INT16_MAX;
	volatile int32_t t34 = 825;

	t34 = (x137&((x138^x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static volatile int32_t x142 = INT32_MIN;
	static int32_t x143 = 777002;
	volatile int32_t x144 = INT32_MIN;
	uint64_t t35 = 159892405LLU;

	t35 = (x141&((x142^x143)<x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 2;
	static int64_t x146 = 1101LL;
	static int16_t x147 = INT16_MIN;
	volatile int16_t x148 = -36;

	t36 = (x145&((x146^x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MAX;
	uint8_t x151 = 4U;
	volatile uint32_t x152 = UINT32_MAX;
	static uint32_t t37 = 473702U;

	t37 = (x149&((x150^x151)<x152));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 1763971751LL;
	int16_t x154 = -1;
	volatile uint64_t x156 = UINT64_MAX;
	int64_t t38 = 13446LL;

	t38 = (x153&((x154^x155)<x156));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 15543;
	int64_t x158 = INT64_MIN;
	int8_t x159 = 1;
	int32_t x160 = INT32_MAX;
	int32_t t39 = 2159238;

	t39 = (x157&((x158^x159)<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 10U;
	int64_t x162 = INT64_MIN;
	volatile int8_t x163 = INT8_MIN;
	static int16_t x164 = INT16_MIN;
	int32_t t40 = -223442365;

	t40 = (x161&((x162^x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x167 = INT32_MAX;
	static uint32_t x168 = 202410022U;
	uint64_t t41 = 334878294378LLU;

	t41 = (x165&((x166^x167)<x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 37U;
	int8_t x170 = INT8_MIN;
	static int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 1;

	t42 = (x169&((x170^x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = 2730;
	int16_t x175 = -1;
	uint64_t x176 = 641807755002518LLU;
	volatile int32_t t43 = 1363;

	t43 = (x173&((x174^x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 314127522LLU;
	uint8_t x178 = UINT8_MAX;
	int8_t x179 = 5;
	static uint64_t t44 = 1602615831LLU;

	t44 = (x177&((x178^x179)<x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	static int64_t x182 = -1LL;
	static int8_t x183 = 5;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -305872697;

	t45 = (x181&((x182^x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x188 = INT8_MAX;
	volatile uint64_t t46 = 722225354810487LLU;

	t46 = (x185&((x186^x187)<x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 44U;
	static uint16_t x191 = UINT16_MAX;
	int8_t x192 = 52;
	int32_t t47 = 75940;

	t47 = (x189&((x190^x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	volatile int32_t x194 = INT32_MAX;
	int32_t x195 = INT32_MAX;
	uint32_t x196 = 218U;
	volatile int64_t t48 = 364865984546055LL;

	t48 = (x193&((x194^x195)<x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 6U;
	int8_t x198 = -1;
	volatile int64_t x199 = 918010377542LL;
	static uint64_t x200 = UINT64_MAX;
	int32_t t49 = -47730;

	t49 = (x197&((x198^x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -1;
	volatile uint8_t x202 = 26U;
	volatile int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;

	t50 = (x201&((x202^x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -35353266457824423LL;
	int32_t x206 = INT32_MIN;
	uint8_t x207 = 44U;
	int8_t x208 = -1;
	static int64_t t51 = -72911609130LL;

	t51 = (x205&((x206^x207)<x208));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	int64_t x210 = 7938879594564689LL;
	int64_t x211 = -1LL;
	volatile int32_t t52 = -4148;

	t52 = (x209&((x210^x211)<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = 1U;
	static uint64_t x215 = 1123662738LLU;
	static volatile int8_t x216 = INT8_MIN;
	int32_t t53 = 3238;

	t53 = (x213&((x214^x215)<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = -1;
	int8_t x218 = INT8_MAX;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = INT8_MAX;
	int32_t t54 = 158430631;

	t54 = (x217&((x218^x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 790;
	static int64_t x222 = 92LL;
	int16_t x223 = -15390;
	static uint64_t x224 = UINT64_MAX;
	volatile int32_t t55 = -1;

	t55 = (x221&((x222^x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = -798;
	int16_t x226 = INT16_MIN;
	volatile int32_t x227 = 1345353;
	volatile int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -15968334;

	t56 = (x225&((x226^x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = 27LLU;
	int32_t x230 = -1;
	int16_t x232 = -1;
	uint64_t t57 = 3174722378184301097LLU;

	t57 = (x229&((x230^x231)<x232));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -133812857439697LL;
	static uint8_t x234 = 10U;
	int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MAX;

	t58 = (x233&((x234^x235)<x236));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 7662016;
	static int8_t x238 = INT8_MAX;
	volatile uint64_t x239 = 99240LLU;
	int64_t x240 = -1LL;

	t59 = (x237&((x238^x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -69;
	int64_t x242 = INT64_MIN;
	volatile int32_t x243 = INT32_MIN;
	uint32_t x244 = UINT32_MAX;

	t60 = (x241&((x242^x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x247 = INT32_MIN;
	volatile int64_t x248 = INT64_MAX;
	int32_t t61 = -526;

	t61 = (x245&((x246^x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;

	t62 = (x249&((x250^x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x255 = INT16_MIN;

	t63 = (x253&((x254^x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MAX;
	uint16_t x258 = 81U;
	int32_t x259 = 78482882;
	volatile int32_t t64 = -15;

	t64 = (x257&((x258^x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	uint16_t x262 = 5982U;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MIN;
	static int32_t t65 = 5;

	t65 = (x261&((x262^x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	volatile int16_t x268 = -14;
	int32_t t66 = 500462;

	t66 = (x265&((x266^x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int16_t x271 = 1;
	int32_t x272 = -2728976;
	int32_t t67 = -131197;

	t67 = (x269&((x270^x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int64_t x275 = 3463LL;
	volatile int32_t x276 = INT32_MIN;
	static volatile int32_t t68 = -1;

	t68 = (x273&((x274^x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int64_t x280 = 24453354LL;
	int32_t t69 = 0;

	t69 = (x277&((x278^x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MAX;
	volatile int32_t t70 = -88;

	t70 = (x281&((x282^x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = INT16_MIN;
	int8_t x287 = -11;
	int32_t x288 = 31;
	int64_t t71 = 6979597112309743LL;

	t71 = (x285&((x286^x287)<x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = 141357779554200LL;
	volatile uint16_t x290 = 384U;
	volatile int8_t x291 = INT8_MIN;
	static uint32_t x292 = 27U;
	int64_t t72 = 15176348587LL;

	t72 = (x289&((x290^x291)<x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = -1LL;
	static int16_t x295 = -1;
	static int32_t x296 = INT32_MAX;
	volatile int32_t t73 = 475;

	t73 = (x293&((x294^x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 207449LLU;
	uint16_t x298 = 2730U;
	volatile uint32_t x299 = 9001070U;
	int32_t x300 = 293;
	volatile uint64_t t74 = 144LLU;

	t74 = (x297&((x298^x299)<x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	volatile uint32_t x302 = 75396988U;
	volatile uint8_t x303 = 20U;
	int32_t x304 = INT32_MIN;

	t75 = (x301&((x302^x303)<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	static uint16_t x307 = 49U;
	int32_t t76 = -7023;

	t76 = (x305&((x306^x307)<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 2002887474U;
	int8_t x311 = -1;
	int8_t x312 = 1;
	volatile uint64_t t77 = 784347352368LLU;

	t77 = (x309&((x310^x311)<x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	int16_t x314 = -7073;
	int8_t x315 = -4;
	int64_t t78 = -25161396830619839LL;

	t78 = (x313&((x314^x315)<x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = INT32_MAX;
	volatile uint32_t x319 = 5U;
	static int64_t x320 = INT64_MAX;
	int32_t t79 = -550;

	t79 = (x317&((x318^x319)<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	int16_t x322 = -1;
	volatile uint16_t x323 = 122U;
	uint64_t x324 = 15LLU;

	t80 = (x321&((x322^x323)<x324));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int64_t x327 = -978959446LL;
	int64_t x328 = INT64_MIN;
	volatile int64_t t81 = 514085LL;

	t81 = (x325&((x326^x327)<x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x331 = 38;
	volatile int32_t x332 = INT32_MIN;
	volatile uint32_t t82 = 1195288137U;

	t82 = (x329&((x330^x331)<x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	static int16_t x334 = INT16_MIN;
	volatile uint8_t x335 = UINT8_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile int64_t t83 = -356918124159LL;

	t83 = (x333&((x334^x335)<x336));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	static int32_t x338 = 169;
	volatile int64_t x340 = -1LL;
	int64_t t84 = 809849234494LL;

	t84 = (x337&((x338^x339)<x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 73;
	int32_t x342 = 793624808;
	static uint16_t x343 = UINT16_MAX;
	static int8_t x344 = INT8_MAX;
	volatile int32_t t85 = 4320890;

	t85 = (x341&((x342^x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = 255256462860LL;
	uint32_t x346 = 1043532U;
	volatile uint64_t x347 = UINT64_MAX;
	static int8_t x348 = -1;
	volatile int64_t t86 = 132404LL;

	t86 = (x345&((x346^x347)<x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -52;

	t87 = (x349&((x350^x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x355 = INT8_MAX;
	static int64_t x356 = INT64_MAX;

	t88 = (x353&((x354^x355)<x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	volatile int32_t x358 = 475;
	uint16_t x359 = 1U;
	int64_t x360 = -1LL;
	volatile int64_t t89 = 16981094346LL;

	t89 = (x357&((x358^x359)<x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = 27U;
	uint16_t x363 = 7199U;
	uint64_t x364 = 12731LLU;
	volatile int32_t t90 = 3727;

	t90 = (x361&((x362^x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -7;
	int16_t x366 = INT16_MAX;
	uint32_t x367 = 873097414U;
	int64_t x368 = INT64_MIN;
	int32_t t91 = -80942;

	t91 = (x365&((x366^x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int8_t x370 = -1;
	uint32_t x371 = 3916U;
	volatile uint8_t x372 = 62U;
	volatile int32_t t92 = -785721785;

	t92 = (x369&((x370^x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 3U;
	static int8_t x374 = -1;
	int8_t x375 = -1;

	t93 = (x373&((x374^x375)<x376));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x378 = -1;
	static int16_t x380 = -1;
	static int64_t t94 = -1789333095944LL;

	t94 = (x377&((x378^x379)<x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MIN;
	static int16_t x382 = -1;
	uint16_t x383 = 74U;

	t95 = (x381&((x382^x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x387 = -40;
	static int32_t x388 = -12;
	volatile int32_t t96 = -236892021;

	t96 = (x385&((x386^x387)<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MIN;
	uint16_t x391 = UINT16_MAX;
	uint64_t x392 = 21874LLU;

	t97 = (x389&((x390^x391)<x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 242931823U;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 7U;
	volatile int8_t x396 = INT8_MAX;
	static volatile uint32_t t98 = 74U;

	t98 = (x393&((x394^x395)<x396));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = 92611224;
	volatile uint32_t x398 = 128542453U;
	volatile uint32_t x399 = 1U;
	int16_t x400 = 6063;
	static volatile int32_t t99 = 663;

	t99 = (x397&((x398^x399)<x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

