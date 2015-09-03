#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 75189395LLU;
int16_t x9 = -1;
static uint32_t x10 = UINT32_MAX;
volatile uint64_t x20 = 102031LLU;
int64_t x22 = -1LL;
int16_t x32 = INT16_MIN;
static volatile uint32_t t10 = 485U;
static uint8_t x46 = UINT8_MAX;
volatile int16_t x51 = -375;
int64_t x55 = -1LL;
int16_t x57 = INT16_MIN;
volatile int32_t x64 = INT32_MIN;
int8_t x66 = INT8_MAX;
volatile int8_t x74 = -3;
uint32_t x78 = UINT32_MAX;
static volatile uint64_t x80 = UINT64_MAX;
int8_t x86 = INT8_MAX;
uint8_t x92 = UINT8_MAX;
static int16_t x94 = INT16_MIN;
volatile int64_t t23 = -269319618LL;
volatile uint8_t x99 = UINT8_MAX;
int64_t x100 = INT64_MAX;
uint16_t x104 = UINT16_MAX;
static int64_t t25 = 41347LL;
volatile int16_t x106 = INT16_MAX;
int16_t x107 = -140;
uint8_t x115 = 4U;
int8_t x126 = INT8_MIN;
uint8_t x128 = UINT8_MAX;
int64_t t31 = 7LL;
static int8_t x135 = INT8_MAX;
volatile uint64_t t35 = 8597192727826887283LLU;
int32_t x148 = -1;
static int8_t x149 = INT8_MIN;
static int16_t x152 = INT16_MIN;
int32_t x159 = -35329065;
int64_t t42 = -456135100753727LL;
static volatile uint32_t x179 = 218361277U;
int32_t x183 = -1;
static int16_t x186 = INT16_MIN;
volatile uint32_t x188 = 1827U;
static int32_t x189 = 45851196;
uint64_t t47 = 8961379979625151819LLU;
int32_t x200 = INT32_MIN;
volatile int8_t x205 = INT8_MIN;
int8_t x206 = 2;
uint64_t t51 = 1105088502332376LLU;
uint16_t x221 = 1889U;
int64_t x230 = -1LL;
int8_t x231 = INT8_MIN;
volatile int64_t x240 = INT64_MIN;
int8_t x248 = INT8_MAX;
uint64_t x249 = UINT64_MAX;
volatile int64_t t62 = 43942LL;
int32_t x257 = INT32_MAX;
static volatile int32_t t63 = 639;
int64_t x262 = INT64_MIN;
static int64_t t64 = 17536289678LL;
uint64_t t65 = 2944LLU;
int8_t x270 = 26;
int32_t x274 = INT32_MIN;
uint64_t t67 = 808LLU;
static volatile int16_t x280 = INT16_MIN;
int8_t x285 = INT8_MIN;
volatile int16_t x288 = 1;
volatile int8_t x289 = INT8_MAX;
int64_t x291 = INT64_MIN;
int64_t t71 = -184LL;
volatile uint16_t x295 = 0U;
int64_t x297 = 8277194153475LL;
int64_t x306 = 26LL;
static volatile int16_t x316 = INT16_MAX;
volatile int64_t t77 = 22652486LL;
int16_t x321 = INT16_MAX;
int32_t x324 = INT32_MIN;
static uint16_t x329 = UINT16_MAX;
static uint8_t x332 = UINT8_MAX;
uint8_t x335 = 0U;
int16_t x347 = -88;
volatile int64_t x348 = INT64_MAX;
uint8_t x358 = UINT8_MAX;
volatile uint16_t x360 = 9545U;
volatile int64_t t87 = 114283LL;
volatile int8_t x365 = 1;
int64_t t89 = -3574LL;
int32_t x378 = INT32_MAX;
static volatile int32_t t91 = 158;
int64_t x382 = INT64_MIN;
int16_t x384 = -248;
int64_t x388 = INT64_MIN;
static uint64_t x392 = UINT64_MAX;
int32_t x394 = INT32_MIN;
int32_t x395 = -1;
uint16_t x397 = 6U;
int16_t x399 = -73;
static uint64_t x402 = 929045269956753851LLU;
static int16_t x403 = INT16_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint16_t x2 = 6U;
	int64_t x3 = INT64_MAX;
	int16_t x4 = INT16_MIN;
	volatile int64_t t0 = 25LL;

	t0 = ((x1&x2)+(x3%x4));

	if (t0 != 32767LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	uint16_t x6 = UINT16_MAX;
	static uint64_t x7 = 4380870621439LLU;
	int64_t x8 = -23756606851LL;

	t1 = ((x5&x6)+(x7%x8));

	if (t1 != 4380870686974LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = INT16_MAX;
	static int64_t x12 = -1LL;
	int64_t t2 = 81610LL;

	t2 = ((x9&x10)+(x11%x12));

	if (t2 != 4294967295LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 102U;
	uint16_t x14 = 3889U;
	int8_t x15 = INT8_MIN;
	volatile int8_t x16 = INT8_MIN;
	int32_t t3 = 501443662;

	t3 = ((x13&x14)+(x15%x16));

	if (t3 != 32) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1;
	static int16_t x18 = -15772;
	int16_t x19 = INT16_MIN;
	volatile uint64_t t4 = 2227693649LLU;

	t4 = ((x17&x18)+(x19%x20));

	if (t4 != 18181LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MIN;
	volatile int64_t t5 = 15LL;

	t5 = ((x21&x22)+(x23%x24));

	if (t5 != 126LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 351467357182664LL;
	uint16_t x26 = 6U;
	int32_t x27 = INT32_MIN;
	static int8_t x28 = INT8_MIN;
	volatile int64_t t6 = 1LL;

	t6 = ((x25&x26)+(x27%x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -114825095LL;
	static int32_t x30 = INT32_MIN;
	static int8_t x31 = INT8_MIN;
	volatile int64_t t7 = 5877449LL;

	t7 = ((x29&x30)+(x31%x32));

	if (t7 != -2147483776LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -6;
	int64_t x34 = INT64_MAX;
	uint64_t x35 = 115485761LLU;
	static int8_t x36 = 23;
	uint64_t t8 = 14136065LLU;

	t8 = ((x33&x34)+(x35%x36));

	if (t8 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 12829U;
	int16_t x38 = INT16_MAX;
	volatile int8_t x39 = -1;
	volatile uint64_t x40 = 47023975238580LLU;
	uint64_t t9 = 8LLU;

	t9 = ((x37&x38)+(x39%x40));

	if (t9 != 37995193686304LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	uint16_t x42 = 38U;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = 1U;

	t10 = ((x41&x42)+(x43%x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 12U;
	volatile uint64_t x47 = UINT64_MAX;
	static int16_t x48 = -1;
	static volatile uint64_t t11 = 1343618856419318455LLU;

	t11 = ((x45&x46)+(x47%x48));

	if (t11 != 12LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	static int8_t x50 = -22;
	uint32_t x52 = UINT32_MAX;
	uint32_t t12 = 36033U;

	t12 = ((x49&x50)+(x51%x52));

	if (t12 != 4294966793U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MAX;
	uint16_t x56 = 13454U;
	volatile int64_t t13 = -8939633LL;

	t13 = ((x53&x54)+(x55%x56));

	if (t13 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -34;
	static int32_t x59 = INT32_MIN;
	volatile uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 64093158LLU;

	t14 = ((x57&x58)+(x59%x60));

	if (t14 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 3326LLU;
	int32_t x62 = -61218430;
	int16_t x63 = 47;
	static volatile uint64_t t15 = 4LLU;

	t15 = ((x61&x62)+(x63%x64));

	if (t15 != 177LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	static int32_t x67 = INT32_MIN;
	static int64_t x68 = INT64_MIN;
	int64_t t16 = 870LL;

	t16 = ((x65&x66)+(x67%x68));

	if (t16 != -2147483521LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	int64_t t17 = -13940LL;

	t17 = ((x69&x70)+(x71%x72));

	if (t17 != -65536LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -13843621060818LL;
	int8_t x75 = -8;
	static int16_t x76 = -1;
	int64_t t18 = -1LL;

	t18 = ((x73&x74)+(x75%x76));

	if (t18 != -13843621060820LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	volatile int32_t x79 = 7735164;
	volatile uint64_t t19 = 4343724LLU;

	t19 = ((x77&x78)+(x79%x80));

	if (t19 != 2155218812LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	uint16_t x83 = 8U;
	int64_t x84 = -29187945807LL;
	volatile int64_t t20 = -25055LL;

	t20 = ((x81&x82)+(x83%x84));

	if (t20 != 136LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = UINT64_MAX;
	uint8_t x87 = 5U;
	int64_t x88 = INT64_MAX;
	uint64_t t21 = 5856LLU;

	t21 = ((x85&x86)+(x87%x88));

	if (t21 != 132LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = UINT16_MAX;
	int32_t x90 = INT32_MAX;
	static int32_t x91 = -1;
	int32_t t22 = -1308;

	t22 = ((x89&x90)+(x91%x92));

	if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	static int8_t x95 = INT8_MAX;
	int32_t x96 = -1;

	t23 = ((x93&x94)+(x95%x96));

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -1;
	uint64_t x98 = 703LLU;
	volatile uint64_t t24 = 29212065888LLU;

	t24 = ((x97&x98)+(x99%x100));

	if (t24 != 958LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 610U;
	uint8_t x102 = UINT8_MAX;
	static int64_t x103 = -1LL;

	t25 = ((x101&x102)+(x103%x104));

	if (t25 != 97LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	volatile uint64_t x108 = 1629073LLU;
	static uint64_t t26 = 197269559569LLU;

	t26 = ((x105&x106)+(x107%x108));

	if (t26 != 1545643LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 1945501306772945LLU;
	volatile uint32_t x110 = 65794U;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = 282U;
	static uint64_t t27 = 5349635884980LLU;

	t27 = ((x109&x110)+(x111%x112));

	if (t27 != 188LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = INT64_MIN;
	int64_t x116 = INT64_MAX;
	int64_t t28 = -4LL;

	t28 = ((x113&x114)+(x115%x116));

	if (t28 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MAX;
	static int16_t x118 = INT16_MAX;
	uint16_t x119 = 0U;
	int16_t x120 = INT16_MAX;
	static int32_t t29 = -910047;

	t29 = ((x117&x118)+(x119%x120));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	uint32_t x122 = 127U;
	static uint32_t x123 = 2448U;
	int64_t x124 = 1848534173681949LL;
	int64_t t30 = 26957234LL;

	t30 = ((x121&x122)+(x123%x124));

	if (t30 != 2575LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	static int16_t x127 = INT16_MIN;

	t31 = ((x125&x126)+(x127%x128));

	if (t31 != -256LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = UINT64_MAX;
	static volatile uint8_t x130 = UINT8_MAX;
	uint32_t x131 = 14826078U;
	int32_t x132 = INT32_MAX;
	static volatile uint64_t t32 = 17445195492969LLU;

	t32 = ((x129&x130)+(x131%x132));

	if (t32 != 14826333LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	uint32_t x134 = 1U;
	static uint8_t x136 = 7U;
	volatile int64_t t33 = -473995668LL;

	t33 = ((x133&x134)+(x135%x136));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 17243U;
	uint16_t x138 = 4697U;
	static int64_t x139 = -1LL;
	int32_t x140 = 112672952;
	volatile int64_t t34 = 470346LL;

	t34 = ((x137&x138)+(x139%x140));

	if (t34 != 600LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 0LLU;
	int8_t x142 = INT8_MAX;
	volatile int16_t x143 = INT16_MIN;
	int8_t x144 = -14;

	t35 = ((x141&x142)+(x143%x144));

	if (t35 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 17U;
	volatile uint16_t x146 = 2812U;
	uint64_t x147 = 27248995LLU;
	uint64_t t36 = 122304867LLU;

	t36 = ((x145&x146)+(x147%x148));

	if (t36 != 27249011LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = 326;
	volatile int8_t x151 = INT8_MIN;
	int32_t t37 = 85;

	t37 = ((x149&x150)+(x151%x152));

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	uint64_t x154 = 80972LLU;
	int32_t x155 = 260317055;
	int8_t x156 = INT8_MIN;
	uint64_t t38 = 975907755LLU;

	t38 = ((x153&x154)+(x155%x156));

	if (t38 != 65663LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	uint32_t x158 = 282879U;
	int16_t x160 = -1;
	static volatile uint32_t t39 = 907403033U;

	t39 = ((x157&x158)+(x159%x160));

	if (t39 != 20735U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MIN;
	int64_t x163 = 234610928592LL;
	int16_t x164 = INT16_MIN;
	int64_t t40 = 18157LL;

	t40 = ((x161&x162)+(x163%x164));

	if (t40 != -2147472432LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 2U;
	uint8_t x166 = 9U;
	static uint64_t x167 = 3LLU;
	int64_t x168 = INT64_MAX;
	volatile uint64_t t41 = 271899LLU;

	t41 = ((x165&x166)+(x167%x168));

	if (t41 != 3LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	volatile int64_t x170 = 402LL;
	int8_t x171 = -31;
	volatile int8_t x172 = 1;

	t42 = ((x169&x170)+(x171%x172));

	if (t42 != 402LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MAX;
	int32_t x174 = INT32_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	volatile int64_t x176 = 3223604459350492LL;
	static int64_t t43 = 1113663779858673LL;

	t43 = ((x173&x174)+(x175%x176));

	if (t43 != 4295000062LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	static uint8_t x178 = UINT8_MAX;
	int8_t x180 = -11;
	uint32_t t44 = 3314522U;

	t44 = ((x177&x178)+(x179%x180));

	if (t44 != 218361532U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MIN;
	int16_t x184 = 308;
	volatile int32_t t45 = -116492079;

	t45 = ((x181&x182)+(x183%x184));

	if (t45 != -32769) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MIN;
	int8_t x187 = INT8_MAX;
	volatile int64_t t46 = -125915346595687LL;

	t46 = ((x185&x186)+(x187%x188));

	if (t46 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = 1090U;
	int64_t x191 = -1409248LL;
	uint64_t x192 = 26124482LLU;

	t47 = ((x189&x190)+(x191%x192));

	if (t47 != 931850LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = -1;
	static int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MAX;
	int32_t t48 = 54;

	t48 = ((x197&x198)+(x199%x200));

	if (t48 != -2147483521) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x201 = INT32_MAX;
	int8_t x202 = INT8_MIN;
	static volatile int16_t x203 = -1;
	int16_t x204 = INT16_MIN;
	static volatile int32_t t49 = -1195021;

	t49 = ((x201&x202)+(x203%x204));

	if (t49 != 2147483519) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MIN;
	int64_t t50 = -1681647LL;

	t50 = ((x205&x206)+(x207%x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -1;
	static int16_t x210 = 8;
	uint8_t x211 = 20U;
	uint64_t x212 = 857LLU;

	t51 = ((x209&x210)+(x211%x212));

	if (t51 != 28LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	int8_t x214 = 1;
	volatile int8_t x215 = INT8_MIN;
	int32_t x216 = -1;
	static volatile int32_t t52 = 24805343;

	t52 = ((x213&x214)+(x215%x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	int32_t x219 = -1;
	int32_t x220 = -1;
	int32_t t53 = INT32_MIN;

	t53 = ((x217&x218)+(x219%x220));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x222 = 135U;
	int64_t x223 = -1LL;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t54 = 216922842LLU;

	t54 = ((x221&x222)+(x223%x224));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MAX;
	volatile uint32_t x226 = UINT32_MAX;
	uint16_t x227 = 214U;
	static int32_t x228 = -1;
	int64_t t55 = -829137790572LL;

	t55 = ((x225&x226)+(x227%x228));

	if (t55 != 4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x229 = 7U;
	static uint16_t x232 = UINT16_MAX;
	volatile int64_t t56 = -32530LL;

	t56 = ((x229&x230)+(x231%x232));

	if (t56 != -121LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MIN;
	static int64_t x234 = -33715768LL;
	uint32_t x235 = UINT32_MAX;
	uint16_t x236 = 3U;
	int64_t t57 = INT64_MIN;

	t57 = ((x233&x234)+(x235%x236));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x237 = -1;
	int32_t x238 = 269056;
	int16_t x239 = 0;
	volatile int64_t t58 = -357108479LL;

	t58 = ((x237&x238)+(x239%x240));

	if (t58 != 269056LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1LL;
	int32_t x242 = 2;
	int16_t x243 = INT16_MIN;
	int64_t x244 = 132564288651729LL;
	int64_t t59 = 620845LL;

	t59 = ((x241&x242)+(x243%x244));

	if (t59 != -32766LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = 2073084472LLU;
	int64_t x246 = -1LL;
	int64_t x247 = INT64_MAX;
	volatile uint64_t t60 = 24072LLU;

	t60 = ((x245&x246)+(x247%x248));

	if (t60 != 2073084472LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x250 = 60023U;
	volatile uint32_t x251 = 15348288U;
	volatile uint16_t x252 = 7U;
	static volatile uint64_t t61 = 796804LLU;

	t61 = ((x249&x250)+(x251%x252));

	if (t61 != 60027LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = 18387;
	volatile int64_t x254 = INT64_MIN;
	int64_t x255 = INT64_MIN;
	int64_t x256 = -1LL;

	t62 = ((x253&x254)+(x255%x256));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x258 = 356U;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MAX;

	t63 = ((x257&x258)+(x259%x260));

	if (t63 != 354) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = 894U;
	static uint32_t x263 = UINT32_MAX;
	volatile int8_t x264 = -1;

	t64 = ((x261&x262)+(x263%x264));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = 1139685113982LL;
	static int16_t x266 = INT16_MAX;
	volatile int8_t x267 = -1;
	uint64_t x268 = UINT64_MAX;

	t65 = ((x265&x266)+(x267%x268));

	if (t65 != 16510LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x269 = INT64_MIN;
	static uint8_t x271 = UINT8_MAX;
	static int64_t x272 = INT64_MIN;
	static int64_t t66 = -25005182LL;

	t66 = ((x269&x270)+(x271%x272));

	if (t66 != 255LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 0U;
	uint64_t x275 = 7974084547LLU;
	volatile uint64_t x276 = UINT64_MAX;

	t67 = ((x273&x274)+(x275%x276));

	if (t67 != 7974084547LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 25U;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t t68 = 1;

	t68 = ((x277&x278)+(x279%x280));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x281 = -212;
	static int16_t x282 = INT16_MAX;
	uint64_t x283 = UINT64_MAX;
	int8_t x284 = INT8_MAX;
	uint64_t t69 = 499977342926LLU;

	t69 = ((x281&x282)+(x283%x284));

	if (t69 != 32557LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x286 = 2U;
	static uint16_t x287 = 12948U;
	int32_t t70 = -795;

	t70 = ((x285&x286)+(x287%x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x290 = INT32_MAX;
	int32_t x292 = -1;

	t71 = ((x289&x290)+(x291%x292));

	if (t71 != 127LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MAX;
	uint64_t x294 = 32LLU;
	uint8_t x296 = 4U;
	uint64_t t72 = 735LLU;

	t72 = ((x293&x294)+(x295%x296));

	if (t72 != 32LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x298 = UINT64_MAX;
	int32_t x299 = 3410934;
	uint32_t x300 = 3U;
	static volatile uint64_t t73 = 877580LLU;

	t73 = ((x297&x298)+(x299%x300));

	if (t73 != 8277194153475LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x301 = 354856557361614326LL;
	uint16_t x302 = 82U;
	static uint32_t x303 = 12334U;
	volatile int8_t x304 = INT8_MAX;
	static volatile int64_t t74 = -931512889LL;

	t74 = ((x301&x302)+(x303%x304));

	if (t74 != 97LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x305 = -1;
	int32_t x307 = INT32_MAX;
	int32_t x308 = -1;
	volatile int64_t t75 = 35431190LL;

	t75 = ((x305&x306)+(x307%x308));

	if (t75 != 26LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x309 = 933U;
	static int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MIN;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t76 = 59;

	t76 = ((x309&x310)+(x311%x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = 265493382567630166LL;
	static int64_t x314 = -24LL;
	volatile uint8_t x315 = 5U;

	t77 = ((x313&x314)+(x315%x316));

	if (t77 != 265493382567630149LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = -1;
	int8_t x318 = -1;
	int16_t x319 = 31;
	int32_t x320 = INT32_MIN;
	int32_t t78 = 2;

	t78 = ((x317&x318)+(x319%x320));

	if (t78 != 30) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x322 = INT64_MIN;
	volatile int8_t x323 = INT8_MIN;
	volatile int64_t t79 = 6457082254LL;

	t79 = ((x321&x322)+(x323%x324));

	if (t79 != -128LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 1950U;
	uint32_t x326 = 119U;
	int64_t x327 = INT64_MIN;
	int64_t x328 = -1LL;
	int64_t t80 = -139560124983216745LL;

	t80 = ((x325&x326)+(x327%x328));

	if (t80 != 22LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x330 = 14169;
	int32_t x331 = -1;
	volatile int32_t t81 = 75277;

	t81 = ((x329&x330)+(x331%x332));

	if (t81 != 14168) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MIN;
	uint64_t x334 = 183804LLU;
	uint64_t x336 = 1LLU;
	volatile uint64_t t82 = 78737LLU;

	t82 = ((x333&x334)+(x335%x336));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x337 = UINT16_MAX;
	int64_t x338 = -1LL;
	uint32_t x339 = 0U;
	int32_t x340 = INT32_MIN;
	int64_t t83 = -230910095654378LL;

	t83 = ((x337&x338)+(x339%x340));

	if (t83 != 65535LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x345 = -5623;
	int16_t x346 = INT16_MIN;
	volatile int64_t t84 = -417627194578235559LL;

	t84 = ((x345&x346)+(x347%x348));

	if (t84 != -32856LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = UINT8_MAX;
	uint32_t x354 = 1513U;
	int32_t x355 = 12103;
	static uint32_t x356 = UINT32_MAX;
	uint32_t t85 = 8316U;

	t85 = ((x353&x354)+(x355%x356));

	if (t85 != 12336U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x357 = UINT16_MAX;
	int8_t x359 = -2;
	int32_t t86 = -1411;

	t86 = ((x357&x358)+(x359%x360));

	if (t86 != 253) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = UINT16_MAX;
	uint16_t x362 = 1541U;
	static int64_t x363 = -1LL;
	uint32_t x364 = 14765293U;

	t87 = ((x361&x362)+(x363%x364));

	if (t87 != 1540LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x366 = 126U;
	int8_t x367 = -37;
	int16_t x368 = -1;
	uint32_t t88 = 3627U;

	t88 = ((x365&x366)+(x367%x368));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	static int8_t x370 = 0;
	int64_t x371 = 1782509410LL;
	int64_t x372 = INT64_MIN;

	t89 = ((x369&x370)+(x371%x372));

	if (t89 != 1782509410LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x373 = UINT8_MAX;
	uint64_t x374 = 3056725359LLU;
	uint16_t x375 = 12450U;
	int32_t x376 = 2792;
	uint64_t t90 = 4602LLU;

	t90 = ((x373&x374)+(x375%x376));

	if (t90 != 1393LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 0U;
	int32_t x379 = -1;
	int8_t x380 = INT8_MIN;

	t91 = ((x377&x378)+(x379%x380));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -197064;
	int8_t x383 = INT8_MAX;
	int64_t t92 = -29745LL;

	t92 = ((x381&x382)+(x383%x384));

	if (t92 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 3U;
	volatile uint16_t x386 = 125U;
	int64_t x387 = INT64_MIN;
	static int64_t t93 = -3067749456047LL;

	t93 = ((x385&x386)+(x387%x388));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = 54210517;
	static int64_t x391 = 371313774173780858LL;
	uint64_t t94 = 424LLU;

	t94 = ((x389&x390)+(x391%x392));

	if (t94 != 371313774227979130LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = 206403U;
	uint32_t x396 = 429777246U;
	uint32_t t95 = 421154U;

	t95 = ((x393&x394)+(x395%x396));

	if (t95 != 426972081U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x398 = 0U;
	int64_t x400 = -43011641LL;
	static int64_t t96 = -107LL;

	t96 = ((x397&x398)+(x399%x400));

	if (t96 != -73LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 7U;
	int32_t x404 = INT32_MIN;
	volatile uint64_t t97 = 32568661516018816LLU;

	t97 = ((x401&x402)+(x403%x404));

	if (t97 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x405 = INT16_MIN;
	uint32_t x406 = UINT32_MAX;
	uint8_t x407 = UINT8_MAX;
	int32_t x408 = INT32_MIN;
	uint32_t t98 = 2U;

	t98 = ((x405&x406)+(x407%x408));

	if (t98 != 4294934783U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x409 = -29;
	static int64_t x410 = -7308838979LL;
	volatile int16_t x411 = 175;
	uint64_t x412 = 10546951925572576LLU;
	volatile uint64_t t99 = 8474192015242LLU;

	t99 = ((x409&x410)+(x411%x412));

	if (t99 != 18446744066400712784LLU) { NG(); } else { ; }
	
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

