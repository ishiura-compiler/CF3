#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 13LL;
int16_t x7 = 5;
int8_t x8 = -17;
uint64_t x9 = 613LLU;
int32_t x16 = INT32_MIN;
volatile uint32_t x19 = 50356U;
int64_t x20 = INT64_MIN;
static uint16_t x24 = 20676U;
int32_t x32 = 270;
volatile int32_t x36 = 306812;
uint8_t x37 = UINT8_MAX;
volatile int8_t x45 = -1;
int8_t x47 = INT8_MIN;
int16_t x55 = 1;
uint8_t x61 = 7U;
static uint64_t x70 = UINT64_MAX;
volatile int8_t x73 = INT8_MIN;
int8_t x76 = 0;
volatile int32_t x81 = INT32_MAX;
int8_t x82 = 1;
static int64_t x84 = INT64_MIN;
volatile int32_t t20 = 4891;
static volatile int16_t x88 = INT16_MIN;
int8_t x94 = INT8_MIN;
static int8_t x98 = 1;
int32_t x100 = 9396;
uint64_t t24 = 3987903772878LLU;
uint16_t x103 = 23001U;
static int16_t x106 = INT16_MAX;
int64_t t26 = -2022565002011998660LL;
uint32_t x112 = UINT32_MAX;
uint8_t x115 = UINT8_MAX;
uint16_t x116 = 2U;
volatile int32_t t28 = 754663;
static int16_t x117 = 39;
uint64_t x123 = 37034LLU;
uint64_t x124 = 120606335LLU;
int8_t x126 = INT8_MIN;
uint64_t x133 = 0LLU;
volatile uint64_t t33 = 2LLU;
uint32_t x149 = 72U;
int16_t x150 = -2814;
int8_t x152 = -1;
uint32_t t37 = 0U;
volatile int64_t x154 = INT64_MIN;
volatile int8_t x162 = -3;
int8_t x166 = INT8_MAX;
static volatile int32_t x167 = INT32_MAX;
volatile int32_t t41 = 1435;
volatile int32_t t44 = 702;
int16_t x181 = INT16_MAX;
static uint64_t x182 = 6999988281820246LLU;
volatile int32_t t46 = 5181;
uint16_t x191 = UINT16_MAX;
uint32_t x194 = 65213470U;
int32_t x199 = 19587604;
int64_t x202 = INT64_MIN;
volatile int64_t t50 = -37014648480LL;
static volatile int32_t x209 = -1;
static volatile uint8_t x210 = UINT8_MAX;
int32_t t52 = 86680;
volatile uint64_t x215 = UINT64_MAX;
uint16_t x216 = 1533U;
uint8_t x221 = 10U;
volatile int32_t t55 = 134530;
static int32_t x225 = INT32_MAX;
int64_t x229 = INT64_MAX;
int16_t x230 = -1;
int64_t x239 = 27309LL;
uint8_t x242 = 64U;
int32_t x253 = 20;
static int32_t x254 = -135;
uint16_t x256 = 3594U;
static int8_t x260 = 29;
volatile int64_t t65 = 1687LL;
int32_t t68 = 16;
int64_t x283 = INT64_MAX;
volatile int32_t t70 = 1;
int32_t x285 = -1;
int64_t x287 = 16987235149361LL;
volatile int32_t t72 = -100;
int16_t x293 = 31;
int8_t x305 = INT8_MIN;
int8_t x309 = -1;
uint8_t x316 = 14U;
volatile int64_t t79 = -57050815269326LL;
volatile int16_t x322 = -1;
int32_t t80 = -226610525;
static int32_t t83 = 191;
uint8_t x338 = 83U;
volatile int32_t t84 = 30821485;
uint32_t x341 = UINT32_MAX;
volatile int8_t x346 = INT8_MIN;
static int32_t x355 = -1;
int16_t x358 = -1;
volatile int32_t t89 = 844;
volatile uint8_t x367 = 0U;
volatile uint64_t t91 = 740758LLU;
int16_t x375 = 140;
int64_t x381 = 0LL;
int64_t t95 = -488672754340666LL;
int32_t x385 = INT32_MAX;
int32_t x387 = INT32_MAX;
int64_t x389 = 7LL;
volatile int32_t t98 = -109450;
volatile int32_t t99 = -44814;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int64_t x3 = INT64_MIN;
	volatile int32_t x4 = -1;
	volatile uint32_t t0 = 1U;

	t0 = (x1&((x2<x3)<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint16_t x6 = UINT16_MAX;
	volatile int32_t t1 = -6;

	t1 = (x5&((x6<x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	int16_t x11 = 172;
	int16_t x12 = INT16_MIN;
	uint64_t t2 = 173664LLU;

	t2 = (x9&((x10<x11)<x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	int16_t x14 = -3310;
	uint32_t x15 = 174705493U;
	static volatile int32_t t3 = -426897804;

	t3 = (x13&((x14<x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1753090575898538LLU;
	int8_t x18 = INT8_MAX;
	volatile uint64_t t4 = 51836LLU;

	t4 = (x17&((x18<x19)<x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 34U;
	int64_t x22 = -1LL;
	int16_t x23 = INT16_MIN;
	volatile int32_t t5 = -335341;

	t5 = (x21&((x22<x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 8204404003542LLU;
	volatile uint64_t x26 = 5LLU;
	int64_t x27 = INT64_MIN;
	int32_t x28 = INT32_MAX;
	volatile uint64_t t6 = 3571LLU;

	t6 = (x25&((x26<x27)<x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -3093462731LL;
	volatile uint8_t x30 = 91U;
	uint32_t x31 = UINT32_MAX;
	static int64_t t7 = -23853368LL;

	t7 = (x29&((x30<x31)<x32));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 48U;
	static uint8_t x35 = 116U;
	int32_t t8 = -1853821;

	t8 = (x33&((x34<x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 773U;
	volatile uint8_t x39 = 24U;
	int16_t x40 = -5;
	int32_t t9 = -427302;

	t9 = (x37&((x38<x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 10284U;
	int64_t x42 = 258998521LL;
	int8_t x43 = -42;
	int8_t x44 = -1;
	volatile int32_t t10 = -22200896;

	t10 = (x41&((x42<x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 39U;
	volatile int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 7876982;

	t11 = (x45&((x46<x47)<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	volatile int32_t x50 = -51998974;
	int64_t x51 = -1LL;
	uint32_t x52 = 1U;
	static volatile int32_t t12 = 25073653;

	t12 = (x49&((x50<x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -1LL;
	volatile int16_t x54 = -1;
	uint64_t x56 = 30767308169578LLU;
	int64_t t13 = 250174606LL;

	t13 = (x53&((x54<x55)<x56));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 194U;
	uint8_t x58 = UINT8_MAX;
	static int8_t x59 = -18;
	uint64_t x60 = 81926987601708LLU;
	static int32_t t14 = -22;

	t14 = (x57&((x58<x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = INT8_MAX;
	int64_t x64 = INT64_MAX;
	static int32_t t15 = 237406302;

	t15 = (x61&((x62<x63)<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -1;
	uint16_t x66 = 2593U;
	uint16_t x67 = UINT16_MAX;
	volatile int64_t x68 = -1LL;
	volatile int32_t t16 = -308;

	t16 = (x65&((x66<x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile int8_t x71 = INT8_MIN;
	static volatile int8_t x72 = -1;
	volatile int32_t t17 = 2119;

	t17 = (x69&((x70<x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MAX;
	static uint16_t x75 = 27780U;
	static int32_t t18 = -408;

	t18 = (x73&((x74<x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 30U;
	uint8_t x78 = UINT8_MAX;
	uint32_t x79 = 427352U;
	static volatile int16_t x80 = -1;
	static int32_t t19 = 293;

	t19 = (x77&((x78<x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x83 = 14932U;

	t20 = (x81&((x82<x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = -1;
	int64_t x87 = -1LL;
	int32_t t21 = 6882;

	t21 = (x85&((x86<x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	uint8_t x91 = UINT8_MAX;
	uint16_t x92 = UINT16_MAX;
	int64_t t22 = -70031061354599742LL;

	t22 = (x89&((x90<x91)<x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 3U;
	static uint64_t x95 = 10LLU;
	int8_t x96 = 7;
	int32_t t23 = -60401;

	t23 = (x93&((x94<x95)<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int32_t x99 = -1;

	t24 = (x97&((x98<x99)<x100));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint64_t x102 = 3935LLU;
	uint16_t x104 = 984U;
	int64_t t25 = -13174719248569LL;

	t25 = (x101&((x102<x103)<x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MAX;
	int64_t x107 = INT64_MIN;
	static int8_t x108 = 15;

	t26 = (x105&((x106<x107)<x108));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 61U;
	int32_t x110 = -1;
	static int64_t x111 = 99LL;
	volatile int32_t t27 = 291122;

	t27 = (x109&((x110<x111)<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	volatile uint32_t x114 = 3565U;

	t28 = (x113&((x114<x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = UINT16_MAX;
	static uint8_t x119 = 0U;
	uint64_t x120 = 31455000478476365LLU;
	static volatile int32_t t29 = 344300484;

	t29 = (x117&((x118<x119)<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MIN;
	volatile int32_t t30 = 952;

	t30 = (x121&((x122<x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int32_t x127 = -1;
	static int64_t x128 = INT64_MAX;
	volatile int32_t t31 = 148;

	t31 = (x125&((x126<x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 1958U;
	int32_t x130 = -1;
	int16_t x131 = -6;
	uint64_t x132 = 2605LLU;
	volatile int32_t t32 = -940;

	t32 = (x129&((x130<x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x134 = 1450097LLU;
	int64_t x135 = -3125194499LL;
	int64_t x136 = -663LL;

	t33 = (x133&((x134<x135)<x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int8_t x138 = INT8_MIN;
	int32_t x139 = -4214532;
	uint8_t x140 = 6U;
	volatile int32_t t34 = -24;

	t34 = (x137&((x138<x139)<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 2074783;
	int16_t x142 = 757;
	volatile uint8_t x143 = 5U;
	static int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -2460;

	t35 = (x141&((x142<x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	static int32_t x146 = INT32_MIN;
	static int64_t x147 = INT64_MIN;
	volatile uint8_t x148 = 0U;
	volatile int32_t t36 = -42397242;

	t36 = (x145&((x146<x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x151 = INT16_MIN;

	t37 = (x149&((x150<x151)<x152));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 1435522461LLU;
	uint8_t x155 = 0U;
	int64_t x156 = 66516230112LL;
	volatile uint64_t t38 = 16435179150394LLU;

	t38 = (x153&((x154<x155)<x156));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = -1LL;
	int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 83569;

	t39 = (x157&((x158<x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 2784520699LLU;
	volatile int64_t x163 = 6844511826139023LL;
	int64_t x164 = INT64_MIN;
	uint64_t t40 = 27809034LLU;

	t40 = (x161&((x162<x163)<x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int64_t x168 = -4654138921918259LL;

	t41 = (x165&((x166<x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	volatile int64_t x170 = 73208091170088768LL;
	uint32_t x171 = UINT32_MAX;
	uint32_t x172 = 31023990U;
	static volatile int32_t t42 = -6705726;

	t42 = (x169&((x170<x171)<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	volatile uint32_t x174 = 10U;
	int16_t x175 = -1;
	int64_t x176 = INT64_MIN;
	int32_t t43 = -979;

	t43 = (x173&((x174<x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	int16_t x178 = 1;
	int32_t x179 = INT32_MIN;
	volatile int64_t x180 = INT64_MIN;

	t44 = (x177&((x178<x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x183 = -1;
	int32_t x184 = -1;
	volatile int32_t t45 = 5652;

	t45 = (x181&((x182<x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = 514048475;
	static int8_t x186 = -1;
	static volatile int8_t x187 = INT8_MIN;
	volatile uint32_t x188 = 2921U;

	t46 = (x185&((x186<x187)<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 2772647U;
	uint64_t x190 = 69512846988232110LLU;
	static int64_t x192 = INT64_MAX;
	uint32_t t47 = 2514775U;

	t47 = (x189&((x190<x191)<x192));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -19;
	uint64_t x195 = UINT64_MAX;
	int32_t x196 = INT32_MAX;
	volatile int32_t t48 = 969772818;

	t48 = (x193&((x194<x195)<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1120248;
	int16_t x198 = -1;
	int8_t x200 = -1;
	volatile int32_t t49 = 7778;

	t49 = (x197&((x198<x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MAX;
	int8_t x203 = INT8_MAX;
	uint8_t x204 = UINT8_MAX;

	t50 = (x201&((x202<x203)<x204));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = 7601;
	int32_t x206 = INT32_MIN;
	int8_t x207 = 2;
	static volatile int64_t x208 = INT64_MAX;
	volatile int32_t t51 = -289912;

	t51 = (x205&((x206<x207)<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x211 = INT8_MIN;
	static uint64_t x212 = 76181059857100829LLU;

	t52 = (x209&((x210<x211)<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = 429862728LLU;
	uint64_t x214 = UINT64_MAX;
	static uint64_t t53 = 96860616LLU;

	t53 = (x213&((x214<x215)<x216));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	uint8_t x218 = 10U;
	uint32_t x219 = UINT32_MAX;
	int32_t x220 = -6202114;
	volatile int32_t t54 = 3;

	t54 = (x217&((x218<x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x222 = UINT64_MAX;
	int16_t x223 = -1;
	int16_t x224 = INT16_MIN;

	t55 = (x221&((x222<x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = UINT16_MAX;
	uint8_t x227 = 1U;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -5875080;

	t56 = (x225&((x226<x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;
	volatile int64_t t57 = -91358LL;

	t57 = (x229&((x230<x231)<x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 6U;
	static uint16_t x234 = 2877U;
	int32_t x235 = INT32_MIN;
	int32_t x236 = -1;
	uint32_t t58 = 1768U;

	t58 = (x233&((x234<x235)<x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x237 = UINT32_MAX;
	volatile uint64_t x238 = 0LLU;
	uint8_t x240 = 2U;
	uint32_t t59 = 1U;

	t59 = (x237&((x238<x239)<x240));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 21102807685935224LLU;
	int16_t x243 = -5;
	volatile int64_t x244 = 1703329856548LL;
	volatile uint64_t t60 = 56613944450697031LLU;

	t60 = (x241&((x242<x243)<x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MAX;
	uint16_t x246 = 15U;
	int32_t x247 = -65772;
	static volatile int16_t x248 = INT16_MIN;
	int32_t t61 = 673827156;

	t61 = (x245&((x246<x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = 1433561367823LL;
	uint8_t x251 = 22U;
	volatile uint8_t x252 = 1U;
	volatile int64_t t62 = 2184280471020933259LL;

	t62 = (x249&((x250<x251)<x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x255 = 1;
	volatile int32_t t63 = -28504212;

	t63 = (x253&((x254<x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	static volatile int8_t x258 = 16;
	static int64_t x259 = -1LL;
	static int64_t t64 = -643733LL;

	t64 = (x257&((x258<x259)<x260));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MAX;
	int16_t x262 = INT16_MAX;
	volatile int16_t x263 = -1394;
	uint64_t x264 = 3650262797720562LLU;

	t65 = (x261&((x262<x263)<x264));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	volatile int64_t x266 = 494LL;
	uint8_t x267 = UINT8_MAX;
	volatile int64_t x268 = INT64_MIN;
	volatile int32_t t66 = -31134536;

	t66 = (x265&((x266<x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	volatile int16_t x270 = INT16_MAX;
	volatile int8_t x271 = INT8_MIN;
	uint32_t x272 = UINT32_MAX;
	volatile int32_t t67 = 6926;

	t67 = (x269&((x270<x271)<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	uint32_t x274 = 284U;
	uint16_t x275 = UINT16_MAX;
	int8_t x276 = 11;

	t68 = (x273&((x274<x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 4U;
	int16_t x278 = -1642;
	volatile int16_t x279 = INT16_MIN;
	static int8_t x280 = -1;
	int32_t t69 = -714;

	t69 = (x277&((x278<x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	uint32_t x282 = UINT32_MAX;
	int32_t x284 = INT32_MIN;

	t70 = (x281&((x282<x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = -1;
	int32_t x288 = -1;
	int32_t t71 = 0;

	t71 = (x285&((x286<x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = -1;
	static int16_t x291 = INT16_MIN;
	int16_t x292 = -1;

	t72 = (x289&((x290<x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = -1LL;
	uint64_t x295 = 27001378288378LLU;
	uint16_t x296 = 2U;
	volatile int32_t t73 = -188;

	t73 = (x293&((x294<x295)<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	uint32_t x298 = 2096754108U;
	int64_t x299 = -1LL;
	int8_t x300 = INT8_MAX;
	static uint32_t t74 = 2605U;

	t74 = (x297&((x298<x299)<x300));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -30;
	int8_t x302 = INT8_MIN;
	int8_t x303 = -1;
	static int32_t x304 = -26260;
	volatile int32_t t75 = 7;

	t75 = (x301&((x302<x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MAX;
	int32_t t76 = -309962122;

	t76 = (x305&((x306<x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x310 = -30;
	static int32_t x311 = INT32_MIN;
	volatile int8_t x312 = INT8_MAX;
	volatile int32_t t77 = -112653634;

	t77 = (x309&((x310<x311)<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x313 = -359;
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = INT16_MIN;
	volatile int32_t t78 = 2458;

	t78 = (x313&((x314<x315)<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -46282780157010084LL;
	int64_t x318 = INT64_MIN;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = -1;

	t79 = (x317&((x318<x319)<x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -1743;
	volatile int8_t x323 = -1;
	int8_t x324 = INT8_MAX;

	t80 = (x321&((x322<x323)<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MAX;
	int16_t x327 = INT16_MIN;
	int32_t x328 = -663;
	int32_t t81 = -14027;

	t81 = (x325&((x326<x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	volatile int8_t x330 = INT8_MAX;
	int8_t x331 = INT8_MAX;
	int32_t x332 = -2078172;
	int32_t t82 = 7;

	t82 = (x329&((x330<x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	static int16_t x334 = INT16_MAX;
	int8_t x335 = -1;
	uint64_t x336 = 6469454014355127479LLU;

	t83 = (x333&((x334<x335)<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	volatile int32_t x339 = INT32_MIN;
	int8_t x340 = -5;

	t84 = (x337&((x338<x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x342 = -20554;
	static volatile uint32_t x343 = UINT32_MAX;
	volatile int16_t x344 = -1;
	volatile uint32_t t85 = 3U;

	t85 = (x341&((x342<x343)<x344));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MAX;
	volatile int64_t t86 = -3723686965LL;

	t86 = (x345&((x346<x347)<x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = 12;
	int8_t x350 = INT8_MIN;
	uint16_t x351 = UINT16_MAX;
	int64_t x352 = INT64_MIN;
	int32_t t87 = 3;

	t87 = (x349&((x350<x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = UINT16_MAX;
	uint64_t x354 = UINT64_MAX;
	uint16_t x356 = UINT16_MAX;
	static int32_t t88 = -15482739;

	t88 = (x353&((x354<x355)<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = 17U;
	volatile int32_t x359 = -1;
	uint32_t x360 = 2057U;

	t89 = (x357&((x358<x359)<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	static uint32_t x362 = 75518108U;
	volatile uint16_t x363 = 31215U;
	static uint64_t x364 = UINT64_MAX;
	int32_t t90 = 2;

	t90 = (x361&((x362<x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 2130013365517709LLU;
	volatile int16_t x366 = -4234;
	uint8_t x368 = 3U;

	t91 = (x365&((x366<x367)<x368));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = 12;
	volatile int16_t x370 = INT16_MIN;
	int32_t x371 = -2018853;
	int8_t x372 = -1;
	int32_t t92 = 113710;

	t92 = (x369&((x370<x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 16U;
	int16_t x374 = INT16_MIN;
	int16_t x376 = -1;
	int32_t t93 = -3528;

	t93 = (x373&((x374<x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	static volatile int16_t x378 = INT16_MIN;
	static volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MAX;
	int32_t t94 = 2606;

	t94 = (x377&((x378<x379)<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x382 = -7;
	int32_t x383 = 23978;
	uint16_t x384 = UINT16_MAX;

	t95 = (x381&((x382<x383)<x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x386 = INT64_MAX;
	volatile uint8_t x388 = 122U;
	volatile int32_t t96 = -146042211;

	t96 = (x385&((x386<x387)<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x390 = 8U;
	int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MIN;
	int64_t t97 = -2751168766LL;

	t97 = (x389&((x390<x391)<x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MAX;
	static uint32_t x394 = 55202U;
	static uint8_t x395 = 15U;
	uint64_t x396 = 1LLU;

	t98 = (x393&((x394<x395)<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 0U;
	volatile int16_t x398 = -513;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MAX;

	t99 = (x397&((x398<x399)<x400));

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

