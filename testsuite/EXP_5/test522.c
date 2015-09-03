#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -1;
uint16_t x26 = 9U;
int8_t x28 = INT8_MIN;
uint32_t x43 = 1U;
volatile int32_t t11 = 445;
static int16_t x59 = -1302;
static int32_t x60 = -1;
int8_t x74 = -27;
int64_t x75 = -34916906840300LL;
int8_t x82 = INT8_MIN;
int16_t x96 = -1;
int64_t x98 = INT64_MIN;
uint16_t x99 = UINT16_MAX;
volatile int64_t t21 = 27873763841208357LL;
volatile uint8_t x102 = UINT8_MAX;
int64_t t23 = 1878226716903940LL;
uint8_t x110 = 58U;
static uint64_t x112 = 11075165233712LLU;
volatile int8_t x113 = -15;
uint32_t x114 = 56942U;
int64_t x118 = 4LL;
volatile int64_t t26 = -399938959109059LL;
uint32_t t28 = 6086U;
int16_t x136 = INT16_MIN;
static uint16_t x145 = 1599U;
static uint16_t x146 = 1U;
uint16_t x149 = UINT16_MAX;
volatile uint32_t x152 = UINT32_MAX;
int8_t x169 = INT8_MIN;
int32_t x179 = INT32_MIN;
static int64_t x187 = INT64_MAX;
int64_t t40 = 0LL;
int64_t x189 = INT64_MIN;
volatile int64_t x194 = INT64_MIN;
int16_t x197 = INT16_MIN;
int32_t x201 = -508657;
int32_t x204 = -433019922;
volatile uint16_t x207 = UINT16_MAX;
static uint8_t x213 = 4U;
static int32_t x214 = -844;
int16_t x216 = INT16_MAX;
static volatile int32_t t47 = 1154;
static int64_t x217 = INT64_MAX;
volatile int64_t t48 = -355181171192719082LL;
static int8_t x225 = -1;
uint8_t x228 = 4U;
volatile uint32_t t50 = 116U;
static uint8_t x232 = 1U;
int32_t x239 = -1;
int32_t x243 = 215163022;
volatile int32_t x244 = INT32_MIN;
uint32_t t54 = 1U;
static volatile int32_t x264 = -825437005;
int32_t x271 = -55789726;
static uint32_t x273 = 124U;
uint64_t x281 = UINT64_MAX;
volatile int64_t t63 = -2366241LL;
uint8_t x293 = 1U;
volatile uint16_t x295 = 3U;
uint64_t x310 = UINT64_MAX;
static int64_t t69 = 3022LL;
int8_t x319 = -1;
int8_t x324 = -1;
static int64_t x326 = 207LL;
uint8_t x327 = UINT8_MAX;
int16_t x336 = INT16_MIN;
static int64_t x337 = -1LL;
int8_t x340 = -1;
volatile uint32_t x342 = 63524U;
int8_t x369 = INT8_MIN;
volatile int16_t x374 = -2591;
int32_t x377 = -1;
static volatile uint32_t x387 = 112254588U;
int32_t x389 = INT32_MIN;
static int16_t x394 = INT16_MIN;
int32_t x396 = -1;
uint64_t x398 = 209811LLU;
uint64_t t89 = 520851974915LLU;
int8_t x409 = INT8_MAX;
uint32_t x411 = 707848953U;
volatile uint16_t x415 = UINT16_MAX;
uint64_t x448 = 25LLU;
static uint32_t x449 = UINT32_MAX;
int64_t t97 = -1875404589721LL;
int32_t x453 = INT32_MAX;
uint32_t x456 = 302565731U;
uint32_t t98 = 1581U;
int64_t t99 = -5329155712000LL;


void f0(void) {
	int16_t x5 = -2301;
	int8_t x6 = INT8_MAX;
	int64_t x7 = INT64_MIN;
	uint8_t x8 = UINT8_MAX;
	int64_t t0 = 6699202924660565LL;

	t0 = (x5-((x6/x7)-x8));

	if (t0 != -2046LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 1925U;
	volatile uint32_t x11 = 41U;
	int32_t x12 = -126363076;
	volatile uint32_t t1 = 41U;

	t1 = (x9-((x10/x11)-x12));

	if (t1 != 4063850846U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -10;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = 1358155;
	uint32_t x16 = UINT32_MAX;
	uint32_t t2 = 106503U;

	t2 = (x13-((x14/x15)-x16));

	if (t2 != 4294964123U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = -3;
	int64_t x22 = 2738132395519396LL;
	int32_t x23 = -1;
	volatile uint16_t x24 = UINT16_MAX;
	int64_t t3 = -11708812476130770LL;

	t3 = (x21-((x22/x23)-x24));

	if (t3 != 2738132395584928LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = -16;
	int64_t x27 = INT64_MIN;
	static volatile int64_t t4 = 2065322543198838LL;

	t4 = (x25-((x26/x27)-x28));

	if (t4 != -144LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MIN;
	volatile int8_t x31 = -1;
	int64_t x32 = -1LL;
	int64_t t5 = 61586LL;

	t5 = (x29-((x30/x31)-x32));

	if (t5 != 126LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = -1;
	int16_t x34 = -1;
	volatile uint16_t x35 = 12710U;
	static int64_t x36 = -18557489858241737LL;
	static int64_t t6 = -225805626378756LL;

	t6 = (x33-((x34/x35)-x36));

	if (t6 != -18557489858241738LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x37 = 29U;
	static uint32_t x38 = UINT32_MAX;
	volatile int32_t x39 = INT32_MIN;
	int64_t x40 = -1LL;
	int64_t t7 = -1614570634LL;

	t7 = (x37-((x38/x39)-x40));

	if (t7 != 27LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = -1LL;
	uint32_t x44 = 7407U;
	volatile int64_t t8 = -3406046814240434493LL;

	t8 = (x41-((x42/x43)-x44));

	if (t8 != -2147476240LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	uint64_t x46 = 1389199565167250464LLU;
	int32_t x47 = INT32_MIN;
	int32_t x48 = 182306;
	volatile uint64_t t9 = 260663470234619LLU;

	t9 = (x45-((x46/x47)-x48));

	if (t9 != 182178LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 0U;
	int8_t x50 = -1;
	int64_t x51 = INT64_MAX;
	int32_t x52 = INT32_MAX;
	volatile int64_t t10 = 1610477LL;

	t10 = (x49-((x50/x51)-x52));

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = 1633763;
	volatile uint8_t x54 = 3U;
	volatile int16_t x55 = INT16_MAX;
	uint16_t x56 = 5U;

	t11 = (x53-((x54/x55)-x56));

	if (t11 != 1633768) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MAX;
	uint8_t x58 = 59U;
	int64_t t12 = -126LL;

	t12 = (x57-((x58/x59)-x60));

	if (t12 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = INT64_MIN;
	volatile uint16_t x62 = 10U;
	volatile uint64_t x63 = 2LLU;
	volatile int16_t x64 = -116;
	uint64_t t13 = 1LLU;

	t13 = (x61-((x62/x63)-x64));

	if (t13 != 9223372036854775687LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	static int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MAX;
	volatile int32_t x68 = 9;
	int64_t t14 = -240LL;

	t14 = (x65-((x66/x67)-x68));

	if (t14 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 1;
	volatile uint8_t x70 = UINT8_MAX;
	static int8_t x71 = -1;
	int32_t x72 = 9204726;
	int32_t t15 = -395010;

	t15 = (x69-((x70/x71)-x72));

	if (t15 != 9204982) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = UINT8_MAX;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t16 = 4094618225271854056LLU;

	t16 = (x73-((x74/x75)-x76));

	if (t16 != 254LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = 27;
	volatile int64_t x78 = INT64_MAX;
	volatile int8_t x79 = -50;
	uint32_t x80 = UINT32_MAX;
	static volatile int64_t t17 = 8131601412LL;

	t17 = (x77-((x78/x79)-x80));

	if (t17 != 184467445032062838LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	static int64_t x83 = 42555779422115LL;
	uint32_t x84 = 4339U;
	int64_t t18 = 78111146281LL;

	t18 = (x81-((x82/x83)-x84));

	if (t18 != -28429LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x85 = INT16_MAX;
	int8_t x86 = 54;
	static volatile int16_t x87 = -1;
	int16_t x88 = -1;
	static volatile int32_t t19 = 301772207;

	t19 = (x85-((x86/x87)-x88));

	if (t19 != 32820) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x93 = UINT8_MAX;
	static uint32_t x94 = UINT32_MAX;
	volatile int16_t x95 = INT16_MIN;
	uint32_t t20 = 21U;

	t20 = (x93-((x94/x95)-x96));

	if (t20 != 253U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 39U;
	volatile int8_t x100 = -1;

	t21 = (x97-((x98/x99)-x100));

	if (t21 != 140739635871782LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 826LLU;
	volatile int16_t x103 = -1;
	static int64_t x104 = 870LL;
	static volatile uint64_t t22 = 524912773951405LLU;

	t22 = (x101-((x102/x103)-x104));

	if (t22 != 1951LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = INT16_MIN;
	static int32_t x106 = -28574378;
	static int16_t x107 = 12;
	int64_t x108 = INT64_MIN;

	t23 = (x105-((x106/x107)-x108));

	if (t23 != -9223372036852427378LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x109 = INT64_MAX;
	static volatile int8_t x111 = -1;
	volatile uint64_t t24 = 243664931754373LLU;

	t24 = (x109-((x110/x111)-x112));

	if (t24 != 9223383112020009577LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x115 = -1;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t25 = 1062123LLU;

	t25 = (x113-((x114/x115)-x116));

	if (t25 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 3U;
	static uint8_t x119 = 1U;
	uint32_t x120 = UINT32_MAX;

	t26 = (x117-((x118/x119)-x120));

	if (t26 != 4294967294LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 249LLU;
	static int8_t x122 = -15;
	int64_t x123 = 130923LL;
	int16_t x124 = -1;
	uint64_t t27 = 521096671895LLU;

	t27 = (x121-((x122/x123)-x124));

	if (t27 != 248LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = -1;
	int32_t x132 = INT32_MAX;

	t28 = (x129-((x130/x131)-x132));

	if (t28 != 2147483645U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 2U;
	int64_t x134 = -4311816LL;
	int32_t x135 = -1;
	static volatile int64_t t29 = -14LL;

	t29 = (x133-((x134/x135)-x136));

	if (t29 != -4344582LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = -14361LL;
	volatile uint64_t x138 = 84139995LLU;
	static volatile int16_t x139 = INT16_MIN;
	static volatile uint8_t x140 = 1U;
	static volatile uint64_t t30 = 120085862409956386LLU;

	t30 = (x137-((x138/x139)-x140));

	if (t30 != 18446744073709537256LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x147 = -1;
	static volatile int64_t x148 = INT64_MIN;
	int64_t t31 = -8886308005527LL;

	t31 = (x145-((x146/x147)-x148));

	if (t31 != -9223372036854774208LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x150 = -1LL;
	int16_t x151 = -821;
	static volatile int64_t t32 = -1LL;

	t32 = (x149-((x150/x151)-x152));

	if (t32 != 4295032830LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = 4U;
	volatile int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MAX;
	uint32_t x156 = UINT32_MAX;
	static volatile uint32_t t33 = 189833029U;

	t33 = (x153-((x154/x155)-x156));

	if (t33 != 3U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = 4U;
	static int8_t x158 = INT8_MAX;
	int8_t x159 = 3;
	int64_t x160 = -567533015LL;
	static volatile int64_t t34 = -787373810034038LL;

	t34 = (x157-((x158/x159)-x160));

	if (t34 != -567533053LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x161 = INT64_MAX;
	uint64_t x162 = UINT64_MAX;
	static uint64_t x163 = 270355289166177LLU;
	int64_t x164 = -313673548LL;
	volatile uint64_t t35 = 12LLU;

	t35 = (x161-((x162/x163)-x164));

	if (t35 != 9223372036541034028LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 13LLU;
	static int16_t x172 = INT16_MAX;
	uint64_t t36 = 64044182583591LLU;

	t36 = (x169-((x170/x171)-x172));

	if (t36 != 17737253917028447655LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x174 = -1;
	volatile int8_t x175 = -1;
	uint8_t x176 = UINT8_MAX;
	uint32_t t37 = 338158567U;

	t37 = (x173-((x174/x175)-x176));

	if (t37 != 253U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x177 = 1;
	static uint32_t x178 = UINT32_MAX;
	volatile uint8_t x180 = 12U;
	static volatile uint32_t t38 = 128879U;

	t38 = (x177-((x178/x179)-x180));

	if (t38 != 12U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = -1;
	int16_t x182 = -347;
	int16_t x183 = INT16_MIN;
	int64_t x184 = -456LL;
	volatile int64_t t39 = -434792915344698396LL;

	t39 = (x181-((x182/x183)-x184));

	if (t39 != -457LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x185 = 917509949156LL;
	uint32_t x186 = 1911636U;
	static int32_t x188 = INT32_MIN;

	t40 = (x185-((x186/x187)-x188));

	if (t40 != 915362465508LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x190 = -5;
	uint64_t x191 = 2LLU;
	static uint16_t x192 = 59U;
	uint64_t t41 = 27677255382531LLU;

	t41 = (x189-((x190/x191)-x192));

	if (t41 != 62LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x193 = INT64_MIN;
	int64_t x195 = 101LL;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t42 = 11905130LLU;

	t42 = (x193-((x194/x195)-x196));

	if (t42 != 9314692552071159725LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x198 = -112561790355LL;
	volatile int8_t x199 = INT8_MIN;
	int64_t x200 = -1LL;
	static int64_t t43 = 1993918985276LL;

	t43 = (x197-((x198/x199)-x200));

	if (t43 != -879421756LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x202 = INT16_MIN;
	int16_t x203 = 5;
	volatile int32_t t44 = 10154671;

	t44 = (x201-((x202/x203)-x204));

	if (t44 != -433522026) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x205 = INT64_MAX;
	int32_t x206 = 64356248;
	int32_t x208 = -1;
	int64_t t45 = -1053026513121040603LL;

	t45 = (x205-((x206/x207)-x208));

	if (t45 != 9223372036854774824LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x209 = -220036677377LL;
	int64_t x210 = INT64_MAX;
	int8_t x211 = INT8_MAX;
	int32_t x212 = 72876707;
	static volatile int64_t t46 = -23419LL;

	t46 = (x209-((x210/x211)-x212));

	if (t46 != -72625196631948511LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x215 = UINT16_MAX;

	t47 = (x213-((x214/x215)-x216));

	if (t47 != 32771) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x218 = 23701647U;
	static volatile int8_t x219 = INT8_MIN;
	int16_t x220 = 1;

	t48 = (x217-((x218/x219)-x220));

	if (t48 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x221 = 8184U;
	static uint64_t x222 = 3668517618153264834LLU;
	static volatile uint64_t x223 = 1730546778880541272LLU;
	static int32_t x224 = INT32_MIN;
	uint64_t t49 = 50127LLU;

	t49 = (x221-((x222/x223)-x224));

	if (t49 != 18446744071562076150LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x226 = UINT32_MAX;
	int32_t x227 = 12704;

	t50 = (x225-((x226/x227)-x228));

	if (t50 != 4294629220U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x229 = UINT8_MAX;
	uint32_t x230 = 26562U;
	int8_t x231 = 62;
	uint32_t t51 = 19895130U;

	t51 = (x229-((x230/x231)-x232));

	if (t51 != 4294967124U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x237 = 2024U;
	volatile uint16_t x238 = UINT16_MAX;
	uint16_t x240 = 3045U;
	static uint32_t t52 = 108074052U;

	t52 = (x237-((x238/x239)-x240));

	if (t52 != 70604U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = -110;
	uint32_t x242 = UINT32_MAX;
	static uint32_t t53 = 587026645U;

	t53 = (x241-((x242/x243)-x244));

	if (t53 != 2147483519U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = 0;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = -33;

	t54 = (x245-((x246/x247)-x248));

	if (t54 != 4294967262U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x249 = UINT32_MAX;
	uint32_t x250 = UINT32_MAX;
	int64_t x251 = INT64_MAX;
	int8_t x252 = -1;
	int64_t t55 = -19387LL;

	t55 = (x249-((x250/x251)-x252));

	if (t55 != 4294967294LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x253 = 2027U;
	static uint64_t x254 = UINT64_MAX;
	uint32_t x255 = 76077019U;
	int64_t x256 = -1LL;
	uint64_t t56 = 4LLU;

	t56 = (x253-((x254/x255)-x256));

	if (t56 != 18446743831234962548LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	int16_t x260 = -1;
	int32_t t57 = -3007013;

	t57 = (x257-((x258/x259)-x260));

	if (t57 != -130) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = -27618;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	volatile int64_t t58 = 112516055906LL;

	t58 = (x261-((x262/x263)-x264));

	if (t58 != -825464623LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x269 = UINT64_MAX;
	static volatile uint64_t x270 = 6584578503LLU;
	int32_t x272 = 3;
	volatile uint64_t t59 = 0LLU;

	t59 = (x269-((x270/x271)-x272));

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x274 = 0U;
	uint32_t x275 = 53U;
	int16_t x276 = INT16_MAX;
	static volatile uint32_t t60 = 44U;

	t60 = (x273-((x274/x275)-x276));

	if (t60 != 32891U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x277 = UINT32_MAX;
	static int32_t x278 = INT32_MIN;
	int32_t x279 = 4;
	static int16_t x280 = INT16_MIN;
	uint32_t t61 = 44215379U;

	t61 = (x277-((x278/x279)-x280));

	if (t61 != 536838143U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x282 = -3LL;
	volatile int8_t x283 = INT8_MIN;
	volatile int64_t x284 = -2024885906300LL;
	volatile uint64_t t62 = 0LLU;

	t62 = (x281-((x282/x283)-x284));

	if (t62 != 18446742048823645315LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = INT64_MIN;
	volatile int64_t x286 = -776519747LL;
	int8_t x287 = INT8_MAX;
	static uint32_t x288 = 822716075U;

	t63 = (x285-((x286/x287)-x288));

	if (t63 != -9223372036025945405LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x289 = UINT16_MAX;
	int8_t x290 = INT8_MIN;
	static int8_t x291 = INT8_MIN;
	static uint32_t x292 = 4033U;
	static volatile uint32_t t64 = 1U;

	t64 = (x289-((x290/x291)-x292));

	if (t64 != 69567U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x294 = 31U;
	int8_t x296 = INT8_MIN;
	volatile uint32_t t65 = 489U;

	t65 = (x293-((x294/x295)-x296));

	if (t65 != 4294967159U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = -375;
	volatile int32_t x298 = INT32_MIN;
	volatile int32_t x299 = 7;
	volatile int32_t x300 = -2902;
	int32_t t66 = -11;

	t66 = (x297-((x298/x299)-x300));

	if (t66 != 306780101) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = UINT8_MAX;
	int16_t x306 = 13;
	int8_t x307 = INT8_MAX;
	static uint32_t x308 = UINT32_MAX;
	volatile uint32_t t67 = 1210390296U;

	t67 = (x305-((x306/x307)-x308));

	if (t67 != 254U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x311 = UINT64_MAX;
	int32_t x312 = INT32_MIN;
	uint64_t t68 = 18870485LLU;

	t68 = (x309-((x310/x311)-x312));

	if (t68 != 18446744071562067839LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x313 = 2025U;
	uint8_t x314 = 0U;
	static int64_t x315 = -2LL;
	int16_t x316 = INT16_MIN;

	t69 = (x313-((x314/x315)-x316));

	if (t69 != -30743LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MAX;
	uint64_t x318 = 284740659797478894LLU;
	int16_t x320 = 3526;
	volatile uint64_t t70 = 17262809LLU;

	t70 = (x317-((x318/x319)-x320));

	if (t70 != 2147487173LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = 1U;
	static int32_t t71 = -7;

	t71 = (x321-((x322/x323)-x324));

	if (t71 != 126) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x325 = 488683;
	static volatile int16_t x328 = INT16_MIN;
	static volatile int64_t t72 = 866693187LL;

	t72 = (x325-((x326/x327)-x328));

	if (t72 != 455915LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x330 = -1;
	static int64_t x331 = INT64_MAX;
	volatile int16_t x332 = -1;
	volatile uint64_t t73 = 49586654850404LLU;

	t73 = (x329-((x330/x331)-x332));

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x333 = -686131946LL;
	volatile int16_t x334 = INT16_MAX;
	int16_t x335 = INT16_MAX;
	static volatile int64_t t74 = 39LL;

	t74 = (x333-((x334/x335)-x336));

	if (t74 != -686164715LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MAX;
	volatile int64_t t75 = 155902344232LL;

	t75 = (x337-((x338/x339)-x340));

	if (t75 != 4294967296LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x341 = 2U;
	int16_t x343 = -96;
	uint8_t x344 = 12U;
	uint32_t t76 = 10805713U;

	t76 = (x341-((x342/x343)-x344));

	if (t76 != 14U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = 2;
	int16_t x346 = INT16_MIN;
	uint8_t x347 = 33U;
	int32_t x348 = 3;
	volatile int32_t t77 = 1095502;

	t77 = (x345-((x346/x347)-x348));

	if (t77 != 997) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x349 = 16148U;
	static volatile int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	int32_t x352 = -193357715;
	volatile int32_t t78 = 63620;

	t78 = (x349-((x350/x351)-x352));

	if (t78 != -193341567) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = INT64_MIN;
	static int16_t x354 = -1;
	int32_t x355 = INT32_MAX;
	uint8_t x356 = 1U;
	int64_t t79 = -6168693LL;

	t79 = (x353-((x354/x355)-x356));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x365 = INT64_MIN;
	static volatile uint64_t x366 = 80244428LLU;
	uint64_t x367 = UINT64_MAX;
	volatile uint32_t x368 = 81504992U;
	volatile uint64_t t80 = 193572889059138436LLU;

	t80 = (x365-((x366/x367)-x368));

	if (t80 != 9223372036936280800LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x370 = 181LLU;
	int64_t x371 = INT64_MIN;
	static int8_t x372 = INT8_MIN;
	uint64_t t81 = 346038466515479LLU;

	t81 = (x369-((x370/x371)-x372));

	if (t81 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = INT32_MIN;
	int64_t x375 = 73LL;
	int8_t x376 = INT8_MIN;
	static int64_t t82 = 28057392476705LL;

	t82 = (x373-((x374/x375)-x376));

	if (t82 != -2147483741LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x378 = INT32_MIN;
	uint64_t x379 = 55754759092696LLU;
	uint64_t x380 = 340519604710220616LLU;
	uint64_t t83 = 3299LLU;

	t83 = (x377-((x378/x379)-x380));

	if (t83 != 340519604709889760LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x381 = 3751202371482943LL;
	static volatile int64_t x382 = INT64_MIN;
	volatile int64_t x383 = -10344518LL;
	static int16_t x384 = INT16_MIN;
	volatile int64_t t84 = 23490LL;

	t84 = (x381-((x382/x383)-x384));

	if (t84 != 3750310752136752LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = -4061605046311LL;
	uint8_t x386 = 62U;
	uint32_t x388 = 211951672U;
	int64_t t85 = -237646143297106600LL;

	t85 = (x385-((x386/x387)-x388));

	if (t85 != -4065688061935LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x390 = INT64_MIN;
	uint32_t x391 = 535511105U;
	int64_t x392 = -205983561152950LL;
	int64_t t86 = 1022250782842173935LL;

	t86 = (x389-((x390/x391)-x392));

	if (t86 != -205968485143097LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x393 = 28418U;
	int64_t x395 = -29930219LL;
	volatile int64_t t87 = 28LL;

	t87 = (x393-((x394/x395)-x396));

	if (t87 != 28417LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = 325U;
	int8_t x399 = INT8_MIN;
	volatile int64_t x400 = INT64_MIN;
	uint64_t t88 = 264684103316LLU;

	t88 = (x397-((x398/x399)-x400));

	if (t88 != 9223372036854776133LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = UINT32_MAX;
	int8_t x406 = 2;
	uint64_t x407 = 4344251407784LLU;
	volatile uint64_t x408 = 111445837LLU;

	t89 = (x405-((x406/x407)-x408));

	if (t89 != 4406413132LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x410 = INT32_MAX;
	volatile uint8_t x412 = 11U;
	static uint32_t t90 = 4609U;

	t90 = (x409-((x410/x411)-x412));

	if (t90 != 135U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x413 = -7;
	static uint32_t x414 = UINT32_MAX;
	int64_t x416 = 12310101577510714LL;
	static int64_t t91 = 80LL;

	t91 = (x413-((x414/x415)-x416));

	if (t91 != 12310101577445170LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = 1252099650751LL;
	int16_t x418 = 1791;
	int32_t x419 = 663392;
	static uint32_t x420 = 11628U;
	volatile int64_t t92 = -179LL;

	t92 = (x417-((x418/x419)-x420));

	if (t92 != 1247804695083LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x429 = 12088U;
	int16_t x430 = INT16_MIN;
	static int64_t x431 = INT64_MAX;
	int32_t x432 = 2087;
	int64_t t93 = -45782297740LL;

	t93 = (x429-((x430/x431)-x432));

	if (t93 != 14175LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = INT64_MIN;
	volatile int16_t x434 = INT16_MAX;
	uint64_t x435 = UINT64_MAX;
	static int16_t x436 = INT16_MIN;
	uint64_t t94 = 178LLU;

	t94 = (x433-((x434/x435)-x436));

	if (t94 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x437 = UINT64_MAX;
	static int32_t x438 = INT32_MIN;
	uint64_t x439 = UINT64_MAX;
	uint32_t x440 = 462917141U;
	uint64_t t95 = 23LLU;

	t95 = (x437-((x438/x439)-x440));

	if (t95 != 462917140LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = INT16_MAX;
	uint8_t x446 = 70U;
	int8_t x447 = INT8_MIN;
	static volatile uint64_t t96 = 35158824919715857LLU;

	t96 = (x445-((x446/x447)-x448));

	if (t96 != 32792LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x450 = -1LL;
	volatile int32_t x451 = INT32_MIN;
	uint8_t x452 = 22U;

	t97 = (x449-((x450/x451)-x452));

	if (t97 != 4294967317LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x454 = 30U;
	int8_t x455 = INT8_MIN;

	t98 = (x453-((x454/x455)-x456));

	if (t98 != 2450049378U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x457 = -1LL;
	volatile int16_t x458 = 40;
	int8_t x459 = 7;
	uint32_t x460 = UINT32_MAX;

	t99 = (x457-((x458/x459)-x460));

	if (t99 != -7LL) { NG(); } else { ; }
	
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

