#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 0U;
int64_t x2 = INT64_MIN;
static volatile int32_t x3 = 0;
volatile int32_t x5 = INT32_MAX;
volatile uint32_t x6 = 1465U;
static uint32_t x21 = 875441528U;
static volatile int16_t x23 = 102;
volatile int64_t t5 = -37166547538440LL;
int32_t x26 = -63470;
int8_t x36 = INT8_MIN;
static uint32_t t8 = 7U;
volatile uint32_t t9 = 1185U;
uint16_t x41 = 5U;
volatile uint64_t t10 = 8479044798LLU;
uint32_t x48 = 1U;
volatile int64_t t12 = -3805535244764018LL;
int8_t x57 = INT8_MAX;
uint32_t x58 = UINT32_MAX;
int32_t x59 = 996794;
static volatile uint64_t x65 = 48LLU;
int8_t x70 = 6;
int32_t x71 = 449644329;
int64_t x75 = INT64_MIN;
volatile int32_t t19 = -16469;
uint32_t x84 = 450U;
int8_t x85 = 6;
static int64_t x88 = -1LL;
int16_t x107 = INT16_MIN;
static int32_t t25 = 114;
static int64_t x109 = -1852LL;
int8_t x114 = INT8_MIN;
int64_t t27 = 24124948LL;
int32_t x130 = INT32_MIN;
volatile int8_t x137 = INT8_MIN;
int32_t x141 = INT32_MAX;
static volatile int8_t x159 = -1;
volatile int8_t x162 = 1;
static int32_t x167 = -1;
int16_t x172 = -1;
uint32_t x173 = 1035209351U;
int64_t t41 = -819086LL;
uint32_t x182 = UINT32_MAX;
uint64_t x188 = UINT64_MAX;
volatile int8_t x190 = INT8_MIN;
volatile uint64_t x194 = UINT64_MAX;
volatile int64_t x195 = -691453944148787460LL;
int64_t x196 = INT64_MAX;
int32_t t46 = 1;
int16_t x203 = -1;
uint16_t x209 = 2U;
static volatile int32_t t49 = -316396829;
uint64_t x214 = UINT64_MAX;
int16_t x220 = 11249;
int16_t x229 = 0;
int16_t x230 = 1;
int32_t x232 = -1;
static uint8_t x236 = 15U;
uint64_t t54 = 1791174068983699903LLU;
int8_t x240 = -1;
volatile uint64_t x243 = 8538802594493721LLU;
int8_t x253 = -1;
uint64_t x254 = 678LLU;
volatile int16_t x257 = INT16_MIN;
volatile uint64_t t67 = 254586888894087LLU;
int32_t x292 = -1;
uint8_t x293 = 4U;
int8_t x303 = INT8_MIN;
static uint8_t x308 = 12U;
volatile int16_t x309 = INT16_MIN;
int64_t t73 = 392742866884LL;
static uint16_t x316 = 6U;
volatile uint64_t t74 = 3688233699LLU;
volatile int32_t x323 = 589559;
uint16_t x324 = 53U;
int8_t x325 = INT8_MAX;
int16_t x334 = -1;
uint64_t t78 = 193233991LLU;
int64_t x339 = INT64_MAX;
uint32_t x345 = UINT32_MAX;
static uint8_t x347 = 1U;
volatile uint64_t x350 = 1900285LLU;
int8_t x358 = 54;
uint16_t x360 = UINT16_MAX;
int8_t x373 = INT8_MAX;
volatile uint32_t x377 = 10763U;
uint16_t x378 = UINT16_MAX;
volatile uint8_t x382 = UINT8_MAX;
int8_t x386 = -1;
int16_t x405 = -2536;
int8_t x408 = -1;
uint32_t t95 = 8U;
volatile int64_t t96 = -850727LL;
uint32_t x433 = 340U;


void f0(void) {
	uint64_t x4 = 30LLU;
	static uint64_t t0 = 63858954LLU;

	t0 = ((x1|x2)^(x3+x4));

	if (t0 != 9223372036854775838LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = 29575125471927152LL;
	static uint32_t x8 = 962925U;
	static volatile int64_t t1 = 161077687LL;

	t1 = ((x5|x6)^(x7+x8));

	if (t1 != 29575123325432610LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 7U;
	uint16_t x10 = 2U;
	uint64_t x11 = 298725686865LLU;
	int64_t x12 = 69835142LL;
	static uint64_t t2 = 250086309LLU;

	t2 = ((x9|x10)^(x11+x12));

	if (t2 != 298795522000LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 62;
	int64_t x14 = 1LL;
	int64_t x15 = 7232769629721LL;
	int16_t x16 = -1;
	volatile int64_t t3 = 18849787955897838LL;

	t3 = ((x13|x14)^(x15+x16));

	if (t3 != 7232769629735LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 3U;
	uint8_t x18 = UINT8_MAX;
	volatile int32_t x19 = INT32_MIN;
	static int8_t x20 = INT8_MAX;
	static int32_t t4 = 1407;

	t4 = ((x17|x18)^(x19+x20));

	if (t4 != -2147483520) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = 63059243U;
	static int64_t x24 = -7LL;

	t5 = ((x21|x22)^(x23+x24));

	if (t5 != 938360100LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	uint32_t x27 = 390164U;
	static int32_t x28 = INT32_MIN;
	volatile uint64_t t6 = 707941627137LLU;

	t6 = ((x25|x26)^(x27+x28));

	if (t6 != 18446744071561677803LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 8474538LL;
	volatile int64_t x30 = -1LL;
	uint16_t x31 = UINT16_MAX;
	static uint8_t x32 = 51U;
	volatile int64_t t7 = 788905189LL;

	t7 = ((x29|x30)^(x31+x32));

	if (t7 != -65587LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 3197U;
	int16_t x34 = INT16_MAX;
	volatile int8_t x35 = -1;

	t8 = ((x33|x34)^(x35+x36));

	if (t8 != 4294934656U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile int16_t x38 = INT16_MAX;
	static int32_t x39 = INT32_MIN;
	uint32_t x40 = 44648U;

	t9 = ((x37|x38)^(x39+x40));

	if (t9 != 2147438999U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	volatile uint16_t x43 = 1260U;
	int32_t x44 = INT32_MIN;

	t10 = ((x41|x42)^(x43+x44));

	if (t10 != 2147482387LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 0U;
	static int64_t x46 = INT64_MAX;
	uint8_t x47 = 2U;
	volatile int64_t t11 = 41313LL;

	t11 = ((x45|x46)^(x47+x48));

	if (t11 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MAX;
	uint8_t x51 = 37U;
	static int64_t x52 = INT64_MIN;

	t12 = ((x49|x50)^(x51+x52));

	if (t12 != 9223372034707292250LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 0;
	uint32_t x54 = 469021969U;
	int8_t x55 = INT8_MIN;
	uint32_t x56 = UINT32_MAX;
	static volatile uint32_t t13 = 4U;

	t13 = ((x53|x54)^(x55+x56));

	if (t13 != 3825945198U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = 155970073U;

	t14 = ((x57|x58)^(x59+x60));

	if (t14 != 4293970502U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -1;
	uint8_t x62 = 9U;
	int32_t x63 = -2;
	int16_t x64 = INT16_MIN;
	int32_t t15 = 8351953;

	t15 = ((x61|x62)^(x63+x64));

	if (t15 != 32769) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 0LLU;
	int8_t x67 = -1;
	uint16_t x68 = UINT16_MAX;
	volatile uint64_t t16 = 8693835234058508097LLU;

	t16 = ((x65|x66)^(x67+x68));

	if (t16 != 65486LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 9U;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -1337;

	t17 = ((x69|x70)^(x71+x72));

	if (t17 != 449709863) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile int64_t t18 = -48146160LL;

	t18 = ((x73|x74)^(x75+x76));

	if (t18 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MAX;
	static volatile int8_t x79 = INT8_MIN;
	static int16_t x80 = -1;

	t19 = ((x77|x78)^(x79+x80));

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	uint16_t x82 = UINT16_MAX;
	int16_t x83 = INT16_MIN;
	uint32_t t20 = 107700U;

	t20 = ((x81|x82)^(x83+x84));

	if (t20 != 4294934077U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = UINT64_MAX;
	int8_t x87 = INT8_MIN;
	volatile uint64_t t21 = 21589235LLU;

	t21 = ((x85|x86)^(x87+x88));

	if (t21 != 128LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	static uint32_t x90 = UINT32_MAX;
	volatile uint16_t x91 = 0U;
	volatile int64_t x92 = INT64_MIN;
	static volatile int64_t t22 = -231LL;

	t22 = ((x89|x90)^(x91+x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 7055140U;
	static volatile uint16_t x94 = 560U;
	int8_t x95 = INT8_MIN;
	static int16_t x96 = INT16_MIN;
	uint32_t t23 = 31962U;

	t23 = ((x93|x94)^(x95+x96));

	if (t23 != 4287944884U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x101 = 13U;
	int64_t x102 = INT64_MIN;
	static volatile int16_t x103 = INT16_MIN;
	volatile int64_t x104 = INT64_MAX;
	volatile int64_t t24 = -2300725LL;

	t24 = ((x101|x102)^(x103+x104));

	if (t24 != -32782LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = 53;
	volatile uint16_t x106 = 13U;
	int32_t x108 = -1;

	t25 = ((x105|x106)^(x107+x108));

	if (t25 != -32830) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x110 = UINT16_MAX;
	volatile uint64_t x111 = UINT64_MAX;
	static volatile int16_t x112 = INT16_MAX;
	volatile uint64_t t26 = 6089132LLU;

	t26 = ((x109|x110)^(x111+x112));

	if (t26 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	int64_t x115 = 4345288793491727LL;
	int64_t x116 = INT64_MIN;

	t27 = ((x113|x114)^(x115+x116));

	if (t27 != 9219026748061283983LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x117 = 1030731025U;
	volatile int32_t x118 = 8;
	static uint32_t x119 = 403135U;
	int8_t x120 = INT8_MIN;
	uint32_t t28 = 2U;

	t28 = ((x117|x118)^(x119+x120));

	if (t28 != 1030329126U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x126 = UINT8_MAX;
	volatile int64_t x127 = INT64_MIN;
	volatile int16_t x128 = INT16_MAX;
	volatile int64_t t29 = 0LL;

	t29 = ((x125|x126)^(x127+x128));

	if (t29 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x129 = 632280669LLU;
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MAX;
	static volatile uint64_t t30 = 13602051951368091LLU;

	t30 = ((x129|x130)^(x131+x132));

	if (t30 != 1515202978LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MAX;
	int8_t x135 = 33;
	static int8_t x136 = 1;
	static volatile int32_t t31 = -7472;

	t31 = ((x133|x134)^(x135+x136));

	if (t31 != -2147483555) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x138 = UINT32_MAX;
	uint32_t x139 = UINT32_MAX;
	volatile int8_t x140 = 3;
	volatile uint32_t t32 = 279U;

	t32 = ((x137|x138)^(x139+x140));

	if (t32 != 4294967293U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x142 = -1;
	static uint32_t x143 = UINT32_MAX;
	volatile int16_t x144 = -1860;
	static volatile uint32_t t33 = 23U;

	t33 = ((x141|x142)^(x143+x144));

	if (t33 != 1860U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = INT64_MAX;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	volatile uint8_t x148 = 25U;
	volatile int64_t t34 = -1731580254364LL;

	t34 = ((x145|x146)^(x147+x148));

	if (t34 != -281LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 125899U;
	int8_t x150 = INT8_MAX;
	volatile uint32_t x151 = 1118071815U;
	static int32_t x152 = -6647476;
	volatile uint32_t t35 = 444006880U;

	t35 = ((x149|x150)^(x151+x152));

	if (t35 != 1111430828U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x153 = 744U;
	uint8_t x154 = UINT8_MAX;
	int64_t x155 = -1LL;
	uint32_t x156 = UINT32_MAX;
	volatile int64_t t36 = 383278636121LL;

	t36 = ((x153|x154)^(x155+x156));

	if (t36 != 4294966529LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = INT32_MIN;
	int8_t x158 = INT8_MIN;
	volatile int64_t x160 = 183071055560355393LL;
	volatile int64_t t37 = -17125644376LL;

	t37 = ((x157|x158)^(x159+x160));

	if (t37 != -183071055560355392LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = INT64_MAX;
	int64_t x163 = -904016LL;
	int8_t x164 = INT8_MIN;
	int64_t t38 = 2121604948LL;

	t38 = ((x161|x162)^(x163+x164));

	if (t38 != -9223372036853871665LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = UINT8_MAX;
	int32_t x166 = INT32_MIN;
	static int8_t x168 = -60;
	volatile int32_t t39 = -412215619;

	t39 = ((x165|x166)^(x167+x168));

	if (t39 != 2147483452) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MAX;
	volatile int64_t x171 = -1LL;
	static int64_t t40 = -14302332176860LL;

	t40 = ((x169|x170)^(x171+x172));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x174 = UINT8_MAX;
	uint8_t x175 = 0U;
	int64_t x176 = INT64_MIN;

	t41 = ((x173|x174)^(x175+x176));

	if (t41 != -9223372035819566337LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 14U;
	static volatile int64_t x183 = INT64_MAX;
	volatile int32_t x184 = -1;
	volatile int64_t t42 = -69028LL;

	t42 = ((x181|x182)^(x183+x184));

	if (t42 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = -5;
	uint8_t x186 = 21U;
	static int32_t x187 = 204890856;
	uint64_t t43 = 58213229181468LLU;

	t43 = ((x185|x186)^(x187+x188));

	if (t43 != 18446744073504660760LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x189 = INT64_MIN;
	uint8_t x191 = UINT8_MAX;
	static uint8_t x192 = 54U;
	static int64_t t44 = -5885256099LL;

	t44 = ((x189|x190)^(x191+x192));

	if (t44 != -331LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x193 = INT8_MAX;
	static volatile uint64_t t45 = 168545LLU;

	t45 = ((x193|x194)^(x195+x196));

	if (t45 != 9914825981003563268LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = 24;
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	static int8_t x200 = 0;

	t46 = ((x197|x198)^(x199+x200));

	if (t46 != 2147450904) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 15738U;
	static uint8_t x202 = 2U;
	static uint8_t x204 = 1U;
	static volatile uint32_t t47 = 29U;

	t47 = ((x201|x202)^(x203+x204));

	if (t47 != 15738U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	volatile uint32_t x206 = 4089U;
	uint16_t x207 = UINT16_MAX;
	static int64_t x208 = -1LL;
	int64_t t48 = -383649115180253073LL;

	t48 = ((x205|x206)^(x207+x208));

	if (t48 != 4294901761LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x210 = 153184158;
	int32_t x211 = -1;
	static int8_t x212 = INT8_MAX;

	t49 = ((x209|x210)^(x211+x212));

	if (t49 != 153184224) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x213 = -36;
	uint16_t x215 = UINT16_MAX;
	uint32_t x216 = 2945U;
	uint64_t t50 = 3270011LLU;

	t50 = ((x213|x214)^(x215+x216));

	if (t50 != 18446744073709483135LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -398;
	int64_t x218 = -535547628067223LL;
	static int32_t x219 = 501;
	int64_t t51 = -105LL;

	t51 = ((x217|x218)^(x219+x220));

	if (t51 != -11363LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = -1;
	volatile uint8_t x222 = UINT8_MAX;
	int32_t x223 = INT32_MAX;
	int32_t x224 = -37250;
	static volatile int32_t t52 = 2759;

	t52 = ((x221|x222)^(x223+x224));

	if (t52 != -2147446398) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x231 = INT16_MIN;
	int32_t t53 = -239455567;

	t53 = ((x229|x230)^(x231+x232));

	if (t53 != -32770) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x233 = 434820037067429279LLU;
	int8_t x234 = -42;
	int64_t x235 = -1LL;

	t54 = ((x233|x234)^(x235+x236));

	if (t54 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x237 = UINT16_MAX;
	static int32_t x238 = -1;
	int16_t x239 = INT16_MIN;
	int32_t t55 = -46445126;

	t55 = ((x237|x238)^(x239+x240));

	if (t55 != 32768) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x241 = -1LL;
	int8_t x242 = 8;
	int64_t x244 = -1LL;
	uint64_t t56 = 14481LLU;

	t56 = ((x241|x242)^(x243+x244));

	if (t56 != 18438205271115057895LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x245 = -1;
	static int8_t x246 = INT8_MIN;
	volatile uint16_t x247 = UINT16_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t57 = -46535;

	t57 = ((x245|x246)^(x247+x248));

	if (t57 != 2147418112) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MIN;
	int32_t x250 = -27309;
	int16_t x251 = INT16_MAX;
	static int8_t x252 = -1;
	volatile int32_t t58 = -1238;

	t58 = ((x249|x250)^(x251+x252));

	if (t58 != -5459) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x255 = 273LLU;
	uint32_t x256 = 254202232U;
	uint64_t t59 = 106897886620513267LLU;

	t59 = ((x253|x254)^(x255+x256));

	if (t59 != 18446744073455349110LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x258 = -163;
	static int64_t x259 = -1LL;
	volatile uint16_t x260 = UINT16_MAX;
	static volatile int64_t t60 = -6933LL;

	t60 = ((x257|x258)^(x259+x260));

	if (t60 != -65373LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x261 = INT64_MAX;
	uint64_t x262 = UINT64_MAX;
	int8_t x263 = INT8_MIN;
	static uint8_t x264 = 0U;
	uint64_t t61 = 6783LLU;

	t61 = ((x261|x262)^(x263+x264));

	if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = 19;
	int32_t x266 = INT32_MIN;
	uint32_t x267 = 10519137U;
	int16_t x268 = 1231;
	volatile uint32_t t62 = 98444U;

	t62 = ((x265|x266)^(x267+x268));

	if (t62 != 2158004003U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = -3;
	volatile int16_t x271 = INT16_MIN;
	static int8_t x272 = -1;
	uint32_t t63 = 1351U;

	t63 = ((x269|x270)^(x271+x272));

	if (t63 != 32768U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MIN;
	static int64_t x274 = -11LL;
	int16_t x275 = -1;
	int8_t x276 = -3;
	volatile int64_t t64 = 16LL;

	t64 = ((x273|x274)^(x275+x276));

	if (t64 != 9LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MAX;
	static volatile uint64_t x278 = 229LLU;
	volatile uint32_t x279 = 7146626U;
	uint16_t x280 = 1308U;
	static uint64_t t65 = 123792567303LLU;

	t65 = ((x277|x278)^(x279+x280));

	if (t65 != 7147873LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = -14;
	int32_t x282 = INT32_MAX;
	int8_t x283 = 1;
	int16_t x284 = -1;
	volatile int32_t t66 = -123542195;

	t66 = ((x281|x282)^(x283+x284));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x285 = INT8_MIN;
	uint32_t x286 = UINT32_MAX;
	uint64_t x287 = UINT64_MAX;
	volatile uint32_t x288 = 342U;

	t67 = ((x285|x286)^(x287+x288));

	if (t67 != 4294966954LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x289 = INT64_MAX;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MAX;
	volatile int64_t t68 = -203853789LL;

	t68 = ((x289|x290)^(x291+x292));

	if (t68 != -127LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x294 = -7;
	uint64_t x295 = UINT64_MAX;
	int8_t x296 = -14;
	uint64_t t69 = 7286185984LLU;

	t69 = ((x293|x294)^(x295+x296));

	if (t69 != 12LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = 124U;
	int16_t x298 = INT16_MIN;
	int32_t x299 = -175493;
	static volatile int8_t x300 = -1;
	volatile int32_t t70 = 20792;

	t70 = ((x297|x298)^(x299+x300));

	if (t70 != 184838) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x301 = 3229U;
	int32_t x302 = 3;
	uint32_t x304 = 1740763U;
	volatile uint32_t t71 = 6U;

	t71 = ((x301|x302)^(x303+x304));

	if (t71 != 1737668U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x305 = UINT16_MAX;
	uint64_t x306 = 31581567LLU;
	volatile uint64_t x307 = 4271808879120108LLU;
	static volatile uint64_t t72 = 817978432051628673LLU;

	t72 = ((x305|x306)^(x307+x308));

	if (t72 != 4271808885305607LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	volatile int64_t x312 = -13364734191440535LL;

	t73 = ((x309|x310)^(x311+x312));

	if (t73 != 13364734191440745LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MIN;
	uint64_t x314 = 68350745330LLU;
	int16_t x315 = 6056;

	t74 = ((x313|x314)^(x315+x316));

	if (t74 != 9223372105205517660LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = 481947LL;
	uint8_t x322 = 0U;
	volatile int64_t t75 = -56LL;

	t75 = ((x321|x322)^(x323+x324));

	if (t75 != 1025463LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x326 = INT32_MIN;
	int32_t x327 = INT32_MAX;
	volatile int8_t x328 = -1;
	int32_t t76 = 4580;

	t76 = ((x325|x326)^(x327+x328));

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = -35205LL;
	int16_t x330 = INT16_MAX;
	volatile uint32_t x331 = 133U;
	static int16_t x332 = -100;
	volatile int64_t t77 = -43669LL;

	t77 = ((x329|x330)^(x331+x332));

	if (t77 != -32802LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x333 = -5274;
	static int8_t x335 = INT8_MIN;
	uint64_t x336 = UINT64_MAX;

	t78 = ((x333|x334)^(x335+x336));

	if (t78 != 128LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = INT32_MIN;
	static int64_t x338 = INT64_MAX;
	static int32_t x340 = -1;
	static int64_t t79 = 204992LL;

	t79 = ((x337|x338)^(x339+x340));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x341 = 1936U;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	int32_t x344 = -463827;
	int32_t t80 = 5251341;

	t80 = ((x341|x342)^(x343+x344));

	if (t80 != 519101) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x346 = 1332U;
	uint16_t x348 = UINT16_MAX;
	uint32_t t81 = 2449U;

	t81 = ((x345|x346)^(x347+x348));

	if (t81 != 4294901759U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int16_t x351 = 708;
	uint16_t x352 = 6U;
	uint64_t t82 = 260582608757076607LLU;

	t82 = ((x349|x350)^(x351+x352));

	if (t82 != 1899573LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x357 = INT8_MAX;
	uint32_t x359 = 171681U;
	static uint32_t t83 = 75U;

	t83 = ((x357|x358)^(x359+x360));

	if (t83 != 237279U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x361 = INT64_MAX;
	volatile int16_t x362 = INT16_MIN;
	int8_t x363 = 6;
	uint64_t x364 = 5LLU;
	volatile uint64_t t84 = 973109451907346755LLU;

	t84 = ((x361|x362)^(x363+x364));

	if (t84 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x369 = 1U;
	int32_t x370 = INT32_MIN;
	static volatile int32_t x371 = INT32_MIN;
	uint32_t x372 = 1303799U;
	volatile uint32_t t85 = 450U;

	t85 = ((x369|x370)^(x371+x372));

	if (t85 != 1303798U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x374 = -1;
	static int16_t x375 = 955;
	static uint32_t x376 = UINT32_MAX;
	static volatile uint32_t t86 = 29U;

	t86 = ((x373|x374)^(x375+x376));

	if (t86 != 4294966341U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x379 = INT8_MIN;
	static uint16_t x380 = 1325U;
	volatile uint32_t t87 = 27294874U;

	t87 = ((x377|x378)^(x379+x380));

	if (t87 != 64338U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = INT32_MAX;
	volatile int8_t x383 = INT8_MIN;
	int16_t x384 = -1;
	int32_t t88 = 20565475;

	t88 = ((x381|x382)^(x383+x384));

	if (t88 != -2147483520) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = INT8_MAX;
	volatile uint32_t x387 = 2076U;
	volatile int16_t x388 = INT16_MIN;
	volatile uint32_t t89 = 11998U;

	t89 = ((x385|x386)^(x387+x388));

	if (t89 != 30691U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = INT16_MAX;
	int8_t x390 = -5;
	int8_t x391 = -1;
	int64_t x392 = -1LL;
	static int64_t t90 = 17324165LL;

	t90 = ((x389|x390)^(x391+x392));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x401 = 26621U;
	int8_t x402 = 0;
	uint32_t x403 = UINT32_MAX;
	volatile int32_t x404 = 122073812;
	volatile uint32_t t91 = 10552U;

	t91 = ((x401|x402)^(x403+x404));

	if (t91 != 122082606U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x406 = UINT16_MAX;
	static uint64_t x407 = 7032469758252LLU;
	volatile uint64_t t92 = 55179066LLU;

	t92 = ((x405|x406)^(x407+x408));

	if (t92 != 18446737041239793364LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x409 = 1U;
	int32_t x410 = INT32_MIN;
	volatile uint8_t x411 = 12U;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t93 = -3498;

	t93 = ((x409|x410)^(x411+x412));

	if (t93 != 2147483533) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = -1;
	volatile int32_t x414 = -5376;
	static uint32_t x415 = 133U;
	static int8_t x416 = 0;
	volatile uint32_t t94 = 302979U;

	t94 = ((x413|x414)^(x415+x416));

	if (t94 != 4294967162U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x417 = UINT32_MAX;
	int8_t x418 = 0;
	int32_t x419 = -1;
	int8_t x420 = -1;

	t95 = ((x417|x418)^(x419+x420));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = INT8_MIN;
	volatile int16_t x426 = INT16_MIN;
	uint32_t x427 = 13U;
	static int64_t x428 = INT64_MIN;

	t96 = ((x425|x426)^(x427+x428));

	if (t96 != 9223372036854775693LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x429 = 132769LL;
	uint64_t x430 = 2901079286425099LLU;
	static volatile uint64_t x431 = UINT64_MAX;
	static uint8_t x432 = UINT8_MAX;
	uint64_t t97 = 7462055586LLU;

	t97 = ((x429|x430)^(x431+x432));

	if (t97 != 2901079286556245LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x434 = -1;
	int16_t x435 = INT16_MAX;
	static int32_t x436 = -1;
	uint32_t t98 = 44606413U;

	t98 = ((x433|x434)^(x435+x436));

	if (t98 != 4294934529U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = INT16_MIN;
	static uint32_t x438 = 116U;
	static int16_t x439 = -6744;
	int16_t x440 = INT16_MAX;
	volatile uint32_t t99 = 53270293U;

	t99 = ((x437|x438)^(x439+x440));

	if (t99 != 4294960595U) { NG(); } else { ; }
	
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

