#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = UINT32_MAX;
uint8_t x8 = 29U;
int64_t x11 = INT64_MIN;
int8_t x14 = 13;
volatile int8_t x15 = 1;
static uint32_t x18 = 0U;
static volatile int16_t x22 = INT16_MIN;
int64_t x28 = -63918153832490481LL;
uint32_t x35 = 5814615U;
static uint8_t x40 = UINT8_MAX;
uint16_t x43 = 5640U;
volatile int64_t t10 = INT64_MIN;
int32_t x50 = INT32_MIN;
volatile int8_t x53 = INT8_MAX;
static int32_t x58 = INT32_MAX;
volatile int64_t t14 = 260699361225LL;
int8_t x68 = INT8_MIN;
int8_t x74 = INT8_MIN;
static uint8_t x77 = 4U;
volatile int32_t x80 = INT32_MAX;
int8_t x83 = INT8_MIN;
int16_t x88 = -246;
int32_t x90 = -141401264;
uint8_t x93 = 4U;
int64_t x96 = INT64_MIN;
uint8_t x101 = 0U;
volatile int32_t t24 = 1501;
volatile int16_t x109 = INT16_MIN;
int16_t x115 = INT16_MIN;
volatile int32_t t27 = -3605282;
uint64_t x121 = 341428517486LLU;
volatile uint16_t x123 = UINT16_MAX;
uint8_t x131 = 26U;
static volatile int32_t t31 = -1241344;
int64_t x133 = INT64_MIN;
static uint32_t x139 = UINT32_MAX;
static volatile int8_t x144 = INT8_MIN;
static volatile uint64_t t34 = 1874961776LLU;
int32_t x147 = -1;
uint8_t x150 = 5U;
uint8_t x157 = 5U;
int32_t t37 = 2929258;
int8_t x163 = -1;
int16_t x164 = 79;
int64_t x167 = -1LL;
uint16_t x169 = UINT16_MAX;
int32_t x170 = 304543;
static uint8_t x173 = 25U;
uint32_t x176 = 4U;
static volatile int32_t t41 = -181169;
uint32_t x180 = 1280074U;
volatile int32_t t43 = -1241664;
static int32_t x191 = INT32_MIN;
volatile int8_t x198 = -1;
static int32_t x216 = -1;
int8_t x218 = -1;
uint64_t x219 = UINT64_MAX;
volatile int64_t x222 = -1LL;
int16_t x223 = INT16_MIN;
uint64_t x225 = 19445728943432504LLU;
uint64_t x229 = 0LLU;
volatile int32_t x234 = INT32_MIN;
static int32_t t54 = -7724;
uint8_t x238 = UINT8_MAX;
uint64_t x240 = UINT64_MAX;
volatile uint64_t x243 = 5061065LLU;
volatile int32_t t56 = 76115687;
int16_t x246 = 12;
volatile int32_t x251 = INT32_MIN;
int64_t x256 = 1705LL;
volatile uint64_t x260 = UINT64_MAX;
static volatile int64_t t60 = -1LL;
int32_t x264 = -1;
uint64_t x266 = UINT64_MAX;
int8_t x267 = INT8_MIN;
int64_t x270 = 3776810273103LL;
int8_t x271 = 0;
static int32_t t64 = 31656;
int32_t t66 = 19168443;
static volatile int8_t x285 = INT8_MAX;
int16_t x295 = -1;
uint8_t x300 = UINT8_MAX;
static int32_t x302 = INT32_MAX;
int8_t x308 = INT8_MIN;
int16_t x310 = INT16_MAX;
uint16_t x319 = 24U;
uint16_t x326 = UINT16_MAX;
uint32_t t77 = 11U;
volatile int64_t x330 = INT64_MIN;
int32_t x331 = -8;
int64_t t78 = INT64_MAX;
int32_t x334 = INT32_MIN;
int64_t x340 = -1LL;
volatile uint32_t x341 = 752120U;
int8_t x342 = -1;
volatile uint32_t x348 = UINT32_MAX;
int64_t x350 = INT64_MAX;
int64_t x352 = INT64_MIN;
volatile int32_t t84 = -629556693;
int32_t x362 = INT32_MAX;
static volatile int16_t x363 = 8;
int16_t x372 = -362;
static int8_t x381 = INT8_MIN;
int8_t x388 = INT8_MAX;
static volatile uint16_t x393 = 22712U;
uint8_t x408 = 0U;
static int32_t t94 = -11060;
static int16_t x415 = -5;
volatile uint16_t x417 = UINT16_MAX;
static uint64_t x421 = UINT64_MAX;
volatile uint64_t x422 = 5390613LLU;
volatile uint64_t t98 = UINT64_MAX;
int64_t x426 = -3640577335198118LL;


void f0(void) {
	static uint32_t x1 = 44868U;
	int64_t x2 = -61453LL;
	static volatile int32_t x3 = -66614391;
	int16_t x4 = -1;
	volatile uint32_t t0 = 8126971U;

	t0 = (x1-((x2|x3)<x4));

	if (t0 != 44867U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 109014724513544208LLU;
	int16_t x6 = INT16_MIN;
	uint64_t t1 = 0LLU;

	t1 = (x5-((x6|x7)<x8));

	if (t1 != 109014724513544208LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	int16_t x10 = -1;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -2427;

	t2 = (x9-((x10|x11)<x12));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	volatile int64_t x16 = INT64_MAX;
	int64_t t3 = 69839LL;

	t3 = (x13-((x14|x15)<x16));

	if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int64_t x19 = -1LL;
	int8_t x20 = -23;
	volatile int32_t t4 = 913035307;

	t4 = (x17-((x18|x19)<x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 125806U;
	int8_t x23 = -1;
	int64_t x24 = INT64_MIN;
	uint32_t t5 = 3958389U;

	t5 = (x21-((x22|x23)<x24));

	if (t5 != 125806U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = INT32_MAX;
	volatile int32_t t6 = -1377;

	t6 = (x25-((x26|x27)<x28));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = 9;
	volatile int64_t x30 = 0LL;
	int8_t x31 = -11;
	int64_t x32 = -22261361874LL;
	volatile int32_t t7 = 266024571;

	t7 = (x29-((x30|x31)<x32));

	if (t7 != 9) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 59358;
	static volatile uint32_t x34 = 12234532U;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = -6583155;

	t8 = (x33-((x34|x35)<x36));

	if (t8 != 59357) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int16_t x38 = -72;
	uint32_t x39 = 464U;
	static int64_t t9 = INT64_MAX;

	t9 = (x37-((x38|x39)<x40));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	static int64_t x42 = 65769341425LL;
	volatile uint32_t x44 = 2366541U;

	t10 = (x41-((x42|x43)<x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static uint16_t x46 = UINT16_MAX;
	uint64_t x47 = UINT64_MAX;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = 4861;

	t11 = (x45-((x46|x47)<x48));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	uint32_t x51 = UINT32_MAX;
	int64_t x52 = -1012848789LL;
	int32_t t12 = 9098;

	t12 = (x49-((x50|x51)<x52));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x54 = INT64_MIN;
	int16_t x55 = INT16_MIN;
	volatile int32_t x56 = -1;
	volatile int32_t t13 = -1;

	t13 = (x53-((x54|x55)<x56));

	if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static int8_t x59 = INT8_MIN;
	uint16_t x60 = 28U;

	t14 = (x57-((x58|x59)<x60));

	if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile uint32_t x62 = 3U;
	uint16_t x63 = 6865U;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 5095;

	t15 = (x61-((x62|x63)<x64));

	if (t15 != -32769) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = 204;
	int64_t x66 = -1LL;
	uint16_t x67 = 0U;
	int32_t t16 = -2876;

	t16 = (x65-((x66|x67)<x68));

	if (t16 != 204) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 2087332LLU;
	uint32_t x75 = 109883192U;
	uint16_t x76 = UINT16_MAX;
	uint64_t t17 = 842224LLU;

	t17 = (x73-((x74|x75)<x76));

	if (t17 != 2087332LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x78 = 657005752131LLU;
	static int8_t x79 = 5;
	volatile int32_t t18 = 50333954;

	t18 = (x77-((x78|x79)<x80));

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	int64_t x82 = -28LL;
	static int64_t x84 = -1LL;
	volatile uint32_t t19 = 362679483U;

	t19 = (x81-((x82|x83)<x84));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile int64_t x86 = INT64_MIN;
	uint8_t x87 = UINT8_MAX;
	volatile uint64_t t20 = 493428779194LLU;

	t20 = (x85-((x86|x87)<x88));

	if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 166822378463LL;
	volatile int32_t x91 = 1316;
	uint64_t x92 = UINT64_MAX;
	int64_t t21 = -53081204481989LL;

	t21 = (x89-((x90|x91)<x92));

	if (t21 != 166822378462LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x94 = INT16_MAX;
	int16_t x95 = INT16_MIN;
	volatile int32_t t22 = 3319815;

	t22 = (x93-((x94|x95)<x96));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	int16_t x99 = -1;
	int64_t x100 = -346463968LL;
	int32_t t23 = INT32_MIN;

	t23 = (x97-((x98|x99)<x100));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = 11193618LL;
	int16_t x103 = -1;
	volatile int32_t x104 = INT32_MAX;

	t24 = (x101-((x102|x103)<x104));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = 9587928;
	static int16_t x106 = 56;
	int32_t x107 = -1;
	uint32_t x108 = 254494U;
	int32_t t25 = -479386033;

	t25 = (x105-((x106|x107)<x108));

	if (t25 != 9587928) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = -1;
	volatile uint8_t x111 = UINT8_MAX;
	uint8_t x112 = 86U;
	int32_t t26 = 0;

	t26 = (x109-((x110|x111)<x112));

	if (t26 != -32769) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	volatile int32_t x114 = INT32_MIN;
	volatile int8_t x116 = -1;

	t27 = (x113-((x114|x115)<x116));

	if (t27 != 2147483646) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	int32_t x119 = -521203696;
	volatile int32_t x120 = -1;
	volatile int32_t t28 = -62616;

	t28 = (x117-((x118|x119)<x120));

	if (t28 != -32769) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x122 = INT32_MAX;
	uint16_t x124 = 4924U;
	static uint64_t t29 = 217333532LLU;

	t29 = (x121-((x122|x123)<x124));

	if (t29 != 341428517486LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	int32_t x126 = 10716346;
	uint8_t x127 = UINT8_MAX;
	static volatile int32_t x128 = -11270037;
	static volatile int32_t t30 = 89860;

	t30 = (x125-((x126|x127)<x128));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	volatile int32_t x130 = -682046170;
	static int32_t x132 = 15;

	t31 = (x129-((x130|x131)<x132));

	if (t31 != -129) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x134 = INT8_MIN;
	uint32_t x135 = UINT32_MAX;
	volatile int32_t x136 = 19309;
	static int64_t t32 = INT64_MIN;

	t32 = (x133-((x134|x135)<x136));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 5;
	int32_t x138 = INT32_MIN;
	volatile int64_t x140 = -1LL;
	static volatile int32_t t33 = 53613377;

	t33 = (x137-((x138|x139)<x140));

	if (t33 != 5) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x141 = 41LLU;
	int32_t x142 = INT32_MIN;
	static uint16_t x143 = 4550U;

	t34 = (x141-((x142|x143)<x144));

	if (t34 != 40LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 0LL;
	uint32_t x146 = 873939U;
	volatile uint64_t x148 = 419067826380568900LLU;
	volatile int64_t t35 = -118990401939LL;

	t35 = (x145-((x146|x147)<x148));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = UINT32_MAX;
	int64_t x151 = -36711957409553LL;
	static volatile int32_t x152 = -20814;
	volatile uint32_t t36 = 128345242U;

	t36 = (x149-((x150|x151)<x152));

	if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = INT16_MIN;
	volatile int8_t x159 = -1;
	static volatile int8_t x160 = INT8_MIN;

	t37 = (x157-((x158|x159)<x160));

	if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = INT32_MAX;
	static uint64_t x162 = 21514LLU;
	int32_t t38 = INT32_MAX;

	t38 = (x161-((x162|x163)<x164));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x165 = 132510027U;
	int16_t x166 = -1;
	uint8_t x168 = 2U;
	volatile uint32_t t39 = 60005481U;

	t39 = (x165-((x166|x167)<x168));

	if (t39 != 132510026U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x171 = INT16_MIN;
	static int64_t x172 = 2928051346LL;
	int32_t t40 = -3037762;

	t40 = (x169-((x170|x171)<x172));

	if (t40 != 65534) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MIN;

	t41 = (x173-((x174|x175)<x176));

	if (t41 != 25) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x177 = INT64_MAX;
	static uint32_t x178 = UINT32_MAX;
	uint8_t x179 = UINT8_MAX;
	int64_t t42 = INT64_MAX;

	t42 = (x177-((x178|x179)<x180));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 113U;
	int8_t x182 = INT8_MIN;
	int8_t x183 = -5;
	uint8_t x184 = 26U;

	t43 = (x181-((x182|x183)<x184));

	if (t43 != 112) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = INT16_MAX;
	int32_t x190 = 14117585;
	static int32_t x192 = -1;
	static volatile int32_t t44 = -250659330;

	t44 = (x189-((x190|x191)<x192));

	if (t44 != 32766) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 7U;
	int32_t x196 = INT32_MIN;
	uint64_t t45 = UINT64_MAX;

	t45 = (x193-((x194|x195)<x196));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x197 = INT64_MIN;
	int32_t x199 = INT32_MIN;
	volatile int64_t x200 = -51525739115LL;
	static int64_t t46 = INT64_MIN;

	t46 = (x197-((x198|x199)<x200));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x201 = INT32_MIN;
	uint64_t x202 = UINT64_MAX;
	uint32_t x203 = 21389990U;
	static uint8_t x204 = 3U;
	int32_t t47 = INT32_MIN;

	t47 = (x201-((x202|x203)<x204));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = -1;
	volatile int32_t x210 = INT32_MAX;
	int64_t x211 = -1LL;
	int64_t x212 = INT64_MIN;
	int32_t t48 = -1175;

	t48 = (x209-((x210|x211)<x212));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 14007U;
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = -42LL;
	uint32_t t49 = 1677U;

	t49 = (x213-((x214|x215)<x216));

	if (t49 != 14007U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x217 = -28508666;
	uint16_t x220 = UINT16_MAX;
	int32_t t50 = -150234312;

	t50 = (x217-((x218|x219)<x220));

	if (t50 != -28508666) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 3968685U;
	uint64_t x224 = 251LLU;
	uint32_t t51 = 450624288U;

	t51 = (x221-((x222|x223)<x224));

	if (t51 != 3968685U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x226 = 49317U;
	volatile int8_t x227 = -4;
	uint64_t x228 = 5799LLU;
	uint64_t t52 = 47044599513805LLU;

	t52 = (x225-((x226|x227)<x228));

	if (t52 != 19445728943432504LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x230 = UINT32_MAX;
	int32_t x231 = 4;
	int8_t x232 = 10;
	volatile uint64_t t53 = 23LLU;

	t53 = (x229-((x230|x231)<x232));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = 23;
	int8_t x235 = -13;
	uint16_t x236 = 5624U;

	t54 = (x233-((x234|x235)<x236));

	if (t54 != 22) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = UINT8_MAX;
	volatile int8_t x239 = -1;
	static volatile int32_t t55 = -4820874;

	t55 = (x237-((x238|x239)<x240));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MAX;
	static uint32_t x242 = UINT32_MAX;
	static int16_t x244 = INT16_MIN;

	t56 = (x241-((x242|x243)<x244));

	if (t56 != 126) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	int8_t x247 = 13;
	volatile uint64_t x248 = UINT64_MAX;
	volatile int32_t t57 = 15362448;

	t57 = (x245-((x246|x247)<x248));

	if (t57 != -129) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x249 = -1;
	int32_t x250 = INT32_MIN;
	uint32_t x252 = 963U;
	volatile int32_t t58 = 244029;

	t58 = (x249-((x250|x251)<x252));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = -1LL;
	uint8_t x254 = 7U;
	uint8_t x255 = UINT8_MAX;
	static int64_t t59 = -20290LL;

	t59 = (x253-((x254|x255)<x256));

	if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = -275130634742910LL;
	uint8_t x258 = 109U;
	static volatile uint16_t x259 = 1925U;

	t60 = (x257-((x258|x259)<x260));

	if (t60 != -275130634742911LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x261 = -1LL;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	static int64_t t61 = 1373562727741LL;

	t61 = (x261-((x262|x263)<x264));

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = -3;
	int32_t x268 = 11;
	volatile int32_t t62 = -660802068;

	t62 = (x265-((x266|x267)<x268));

	if (t62 != -3) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = 0;
	static int64_t x272 = 1677366LL;
	volatile int32_t t63 = 241;

	t63 = (x269-((x270|x271)<x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = 4347;
	static int64_t x274 = INT64_MAX;
	int16_t x275 = -150;
	int16_t x276 = -6;

	t64 = (x273-((x274|x275)<x276));

	if (t64 != 4347) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x277 = 1498;
	uint32_t x278 = 976383176U;
	int64_t x279 = INT64_MAX;
	static int16_t x280 = INT16_MIN;
	volatile int32_t t65 = 192360071;

	t65 = (x277-((x278|x279)<x280));

	if (t65 != 1498) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x281 = -1;
	uint64_t x282 = 486LLU;
	int32_t x283 = INT32_MIN;
	volatile int32_t x284 = -3;

	t66 = (x281-((x282|x283)<x284));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = -39;
	int32_t x288 = -1;
	int32_t t67 = -1;

	t67 = (x285-((x286|x287)<x288));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MIN;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MAX;
	volatile int16_t x292 = INT16_MIN;
	int32_t t68 = -7422843;

	t68 = (x289-((x290|x291)<x292));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = INT16_MIN;
	volatile uint64_t x294 = UINT64_MAX;
	int32_t x296 = INT32_MIN;
	static int32_t t69 = -1;

	t69 = (x293-((x294|x295)<x296));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x297 = -1;
	volatile int16_t x298 = -1;
	uint32_t x299 = 984634550U;
	volatile int32_t t70 = 447833607;

	t70 = (x297-((x298|x299)<x300));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = INT8_MIN;
	int16_t x303 = INT16_MAX;
	static int16_t x304 = -3;
	volatile int32_t t71 = -265164630;

	t71 = (x301-((x302|x303)<x304));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = 3U;
	volatile uint64_t x306 = UINT64_MAX;
	uint64_t x307 = UINT64_MAX;
	volatile int32_t t72 = 33834;

	t72 = (x305-((x306|x307)<x308));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -1;
	volatile uint8_t x311 = 0U;
	volatile int32_t x312 = INT32_MIN;
	static volatile int32_t t73 = 6181;

	t73 = (x309-((x310|x311)<x312));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	static int64_t x316 = -1075435674566021LL;
	volatile int32_t t74 = -66066;

	t74 = (x313-((x314|x315)<x316));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x317 = 481317U;
	uint32_t x318 = 21646U;
	static int32_t x320 = 30050310;
	static volatile uint32_t t75 = 357015U;

	t75 = (x317-((x318|x319)<x320));

	if (t75 != 481316U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = -31010;
	static uint32_t x323 = 93866895U;
	uint32_t x324 = 442372U;
	volatile int32_t t76 = -218;

	t76 = (x321-((x322|x323)<x324));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x325 = 11U;
	uint64_t x327 = 90344906LLU;
	static int8_t x328 = INT8_MIN;

	t77 = (x325-((x326|x327)<x328));

	if (t77 != 10U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x329 = INT64_MAX;
	int16_t x332 = INT16_MIN;

	t78 = (x329-((x330|x331)<x332));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x333 = UINT16_MAX;
	uint16_t x335 = 1415U;
	int16_t x336 = INT16_MIN;
	int32_t t79 = 539423;

	t79 = (x333-((x334|x335)<x336));

	if (t79 != 65534) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MAX;
	int32_t x338 = 41;
	int16_t x339 = INT16_MIN;
	static volatile int32_t t80 = 1;

	t80 = (x337-((x338|x339)<x340));

	if (t80 != 32766) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 674U;
	volatile uint32_t t81 = 2057123957U;

	t81 = (x341-((x342|x343)<x344));

	if (t81 != 752120U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = 6U;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = 3U;
	int32_t t82 = -48;

	t82 = (x345-((x346|x347)<x348));

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x349 = INT16_MAX;
	uint64_t x351 = 13621LLU;
	volatile int32_t t83 = 60087825;

	t83 = (x349-((x350|x351)<x352));

	if (t83 != 32766) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x353 = -431;
	static uint16_t x354 = UINT16_MAX;
	static int16_t x355 = -1;
	volatile uint32_t x356 = 44450U;

	t84 = (x353-((x354|x355)<x356));

	if (t84 != -431) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = 13;
	int32_t x358 = -169654;
	int32_t x359 = -1;
	volatile int8_t x360 = INT8_MIN;
	static int32_t t85 = -193627;

	t85 = (x357-((x358|x359)<x360));

	if (t85 != 13) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x361 = INT16_MAX;
	int64_t x364 = 6248800482723917LL;
	int32_t t86 = -7845955;

	t86 = (x361-((x362|x363)<x364));

	if (t86 != 32766) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = UINT8_MAX;
	uint16_t x366 = UINT16_MAX;
	static uint8_t x367 = 1U;
	uint16_t x368 = 10U;
	static volatile int32_t t87 = 675;

	t87 = (x365-((x366|x367)<x368));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	volatile uint8_t x370 = 5U;
	int8_t x371 = -1;
	int64_t t88 = INT64_MIN;

	t88 = (x369-((x370|x371)<x372));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x377 = 439489237872613LLU;
	int16_t x378 = 8;
	volatile uint16_t x379 = 4007U;
	int16_t x380 = 5806;
	uint64_t t89 = 3212686458349LLU;

	t89 = (x377-((x378|x379)<x380));

	if (t89 != 439489237872612LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x382 = 12U;
	int64_t x383 = INT64_MIN;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t90 = -1;

	t90 = (x381-((x382|x383)<x384));

	if (t90 != -129) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = -1;
	int16_t x387 = INT16_MIN;
	volatile int32_t t91 = -254179499;

	t91 = (x385-((x386|x387)<x388));

	if (t91 != 2147483646) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x394 = -36759LL;
	static int64_t x395 = INT64_MIN;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t92 = 23721;

	t92 = (x393-((x394|x395)<x396));

	if (t92 != 22711) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x397 = 0;
	uint16_t x398 = 6315U;
	static int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	volatile int32_t t93 = 444958;

	t93 = (x397-((x398|x399)<x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = -25;
	int8_t x406 = INT8_MIN;
	uint32_t x407 = 10917U;

	t94 = (x405-((x406|x407)<x408));

	if (t94 != -25) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x409 = 0LL;
	int16_t x410 = -1;
	static int8_t x411 = -1;
	uint64_t x412 = 1870667404321929LLU;
	volatile int64_t t95 = -704146LL;

	t95 = (x409-((x410|x411)<x412));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = INT8_MAX;
	volatile uint8_t x414 = 17U;
	static int16_t x416 = INT16_MIN;
	static int32_t t96 = 185129;

	t96 = (x413-((x414|x415)<x416));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x418 = INT32_MIN;
	int8_t x419 = 6;
	uint8_t x420 = UINT8_MAX;
	int32_t t97 = -231;

	t97 = (x417-((x418|x419)<x420));

	if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x423 = INT32_MIN;
	volatile uint32_t x424 = 157718U;

	t98 = (x421-((x422|x423)<x424));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x425 = INT16_MIN;
	uint64_t x427 = 29188055562LLU;
	int64_t x428 = -1LL;
	int32_t t99 = -2;

	t99 = (x425-((x426|x427)<x428));

	if (t99 != -32769) { NG(); } else { ; }
	
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

