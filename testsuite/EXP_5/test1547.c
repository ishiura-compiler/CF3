#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 3966U;
static uint8_t x8 = 15U;
uint8_t x12 = UINT8_MAX;
volatile int32_t t2 = -229306;
uint64_t x13 = UINT64_MAX;
int32_t x16 = 16;
volatile int32_t t4 = 571897;
volatile uint32_t x27 = UINT32_MAX;
static uint8_t x29 = 49U;
uint64_t x30 = UINT64_MAX;
int32_t x36 = -989167982;
int32_t t7 = -1407;
volatile uint8_t x37 = 0U;
static volatile int32_t t8 = 14;
int64_t x41 = INT64_MIN;
int32_t x49 = -1;
static volatile int64_t x57 = INT64_MIN;
static volatile uint16_t x65 = 20246U;
int8_t x80 = INT8_MAX;
uint8_t x100 = 3U;
int64_t x101 = INT64_MIN;
int64_t x106 = 8172LL;
int64_t x107 = 11175LL;
volatile uint16_t x111 = UINT16_MAX;
volatile int64_t t26 = 10514263699506654LL;
uint16_t x117 = 12U;
uint16_t x119 = UINT16_MAX;
static volatile int32_t t29 = 5;
int64_t x129 = INT64_MAX;
int64_t x130 = 93899603LL;
static int32_t x131 = INT32_MAX;
volatile int64_t t30 = 18511319LL;
uint64_t t33 = 26562777744LLU;
uint32_t t34 = 20282898U;
int64_t x155 = INT64_MAX;
volatile int32_t t36 = 503;
int32_t x158 = -1;
uint16_t x159 = UINT16_MAX;
int16_t x162 = -713;
static int16_t x172 = 7;
volatile int16_t x173 = 19;
int32_t x178 = -1;
int8_t x179 = INT8_MIN;
uint64_t t41 = 1035819LLU;
volatile uint32_t t42 = 33830U;
int64_t x189 = 322LL;
static int32_t x191 = -1;
int64_t t44 = 13150991537LL;
int8_t x203 = INT8_MIN;
int16_t x205 = 26;
volatile int32_t t47 = 39;
uint8_t x209 = 3U;
static uint64_t x215 = 7LLU;
uint32_t x216 = 10820U;
int32_t x221 = INT32_MIN;
int16_t x232 = -1;
uint64_t x244 = UINT64_MAX;
uint16_t x246 = 236U;
int32_t x251 = INT32_MAX;
int8_t x252 = 2;
int64_t x258 = -1LL;
static int64_t t58 = -3704174458LL;
int16_t x264 = INT16_MIN;
int8_t x273 = -1;
static int64_t x277 = 14LL;
volatile uint64_t x279 = 4351691327896LLU;
volatile int64_t x281 = INT64_MIN;
static uint8_t x282 = 90U;
int16_t x286 = -1039;
int8_t x293 = INT8_MAX;
uint8_t x294 = 17U;
int16_t x296 = -1;
int64_t x302 = INT64_MAX;
int64_t x306 = INT64_MAX;
uint64_t x307 = 3900LLU;
int16_t x319 = -1;
static int32_t t70 = 37;
int32_t x321 = INT32_MIN;
volatile int64_t t71 = -1LL;
volatile int32_t t74 = 1;
uint32_t x347 = 230253U;
uint32_t x348 = 249U;
static int64_t x361 = INT64_MIN;
static int64_t t81 = -9LL;
static int16_t x373 = INT16_MIN;
int16_t x376 = INT16_MIN;
uint64_t x379 = 311391381310026LLU;
uint32_t x380 = 1383315692U;
int8_t x385 = INT8_MAX;
int32_t x386 = INT32_MAX;
int32_t x392 = 914;
int8_t x399 = -1;
int64_t t90 = -511862121771LL;
static int8_t x412 = INT8_MIN;
static int32_t x414 = -37532;
static uint8_t x416 = UINT8_MAX;
int32_t t92 = -334;
int16_t x420 = INT16_MAX;
volatile int32_t t94 = 720678;
int64_t x429 = INT64_MIN;
int32_t x430 = INT32_MIN;
int8_t x431 = INT8_MAX;
int32_t x432 = -270406193;
uint16_t x434 = UINT16_MAX;
volatile uint64_t x436 = 27LLU;
int64_t x437 = INT64_MIN;
uint32_t x440 = UINT32_MAX;
volatile int64_t t99 = -385462103LL;


void f0(void) {
	uint8_t x1 = 42U;
	uint8_t x3 = UINT8_MAX;
	int16_t x4 = -1;
	int32_t t0 = -48623;

	t0 = (x1^((x2<=x3)-x4));

	if (t0 != 43) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static uint64_t x6 = 258202288887479LLU;
	int64_t x7 = -19324687LL;
	static int32_t t1 = 44;

	t1 = (x5^((x6<=x7)-x8));

	if (t1 != 2147483634) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	int32_t x10 = -1;
	static volatile int8_t x11 = 3;

	t2 = (x9^((x10<=x11)-x12));

	if (t2 != -65283) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -9;
	int64_t x15 = -1LL;
	uint64_t t3 = 44219LLU;

	t3 = (x13^((x14<=x15)-x16));

	if (t3 != 14LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -33;
	uint16_t x22 = 6U;
	volatile uint16_t x23 = 14U;
	int32_t x24 = INT32_MAX;

	t4 = (x21^((x22<=x23)-x24));

	if (t4 != 2147483613) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	volatile int64_t x26 = INT64_MIN;
	int64_t x28 = INT64_MAX;
	volatile int64_t t5 = -33237605LL;

	t5 = (x25^((x26<=x27)-x28));

	if (t5 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x31 = -960983103;
	int64_t x32 = -1LL;
	volatile int64_t t6 = -375LL;

	t6 = (x29^((x30<=x31)-x32));

	if (t6 != 48LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -1;
	uint8_t x34 = 113U;
	uint8_t x35 = UINT8_MAX;

	t7 = (x33^((x34<=x35)-x36));

	if (t7 != -989167984) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x38 = 6268U;
	uint8_t x39 = UINT8_MAX;
	volatile uint16_t x40 = UINT16_MAX;

	t8 = (x37^((x38<=x39)-x40));

	if (t8 != -65535) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x42 = 1U;
	volatile int16_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	static int64_t t9 = 205947730798512LL;

	t9 = (x41^((x42<=x43)-x44));

	if (t9 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	uint32_t x46 = UINT32_MAX;
	static int64_t x47 = INT64_MAX;
	uint8_t x48 = 31U;
	int32_t t10 = -140743;

	t10 = (x45^((x46<=x47)-x48));

	if (t10 != 2147483618) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = INT32_MIN;
	uint16_t x51 = 14U;
	int16_t x52 = INT16_MIN;
	int32_t t11 = 909;

	t11 = (x49^((x50<=x51)-x52));

	if (t11 != -32770) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x58 = INT64_MAX;
	int16_t x59 = -1;
	int8_t x60 = -1;
	int64_t t12 = 1233009LL;

	t12 = (x57^((x58<=x59)-x60));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	static uint64_t x62 = 87334LLU;
	volatile int32_t x63 = INT32_MIN;
	uint8_t x64 = 14U;
	volatile int64_t t13 = 5124LL;

	t13 = (x61^((x62<=x63)-x64));

	if (t13 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x66 = INT64_MAX;
	int32_t x67 = -318;
	int32_t x68 = 137;
	static volatile int32_t t14 = 465863199;

	t14 = (x65^((x66<=x67)-x68));

	if (t14 != -20383) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = INT8_MIN;
	int32_t x70 = -1;
	volatile int32_t x71 = -1;
	int8_t x72 = INT8_MAX;
	int32_t t15 = 0;

	t15 = (x69^((x70<=x71)-x72));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x73 = 425LLU;
	static int32_t x74 = INT32_MAX;
	static int8_t x75 = -1;
	volatile int32_t x76 = -2;
	uint64_t t16 = 2086623763867304776LLU;

	t16 = (x73^((x74<=x75)-x76));

	if (t16 != 427LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	volatile int32_t x79 = INT32_MIN;
	static int32_t t17 = 2568833;

	t17 = (x77^((x78<=x79)-x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	static int64_t x82 = -1LL;
	volatile int8_t x83 = 3;
	int64_t x84 = -1LL;
	int64_t t18 = -637520103LL;

	t18 = (x81^((x82<=x83)-x84));

	if (t18 != -2147483646LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	int32_t x86 = -1;
	int64_t x87 = INT64_MIN;
	int64_t x88 = 569801213603LL;
	int64_t t19 = -26723000LL;

	t19 = (x85^((x86<=x87)-x88));

	if (t19 != 569801213602LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 5;
	volatile int32_t x90 = -1;
	uint16_t x91 = 2079U;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t20 = 1248;

	t20 = (x89^((x90<=x91)-x92));

	if (t20 != -249) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	int16_t x94 = -1;
	static int16_t x95 = -1;
	volatile uint64_t x96 = 312541LLU;
	volatile uint64_t t21 = 109139704111421LLU;

	t21 = (x93^((x94<=x95)-x96));

	if (t21 != 312539LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = -27731977LL;
	uint32_t x98 = 1439569U;
	volatile int8_t x99 = INT8_MIN;
	int64_t t22 = -5468562197LL;

	t22 = (x97^((x98<=x99)-x100));

	if (t22 != 27731977LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x102 = -1;
	int32_t x103 = 2680035;
	static int16_t x104 = INT16_MAX;
	int64_t t23 = 865005LL;

	t23 = (x101^((x102<=x103)-x104));

	if (t23 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 2U;
	int32_t x108 = -1;
	volatile int32_t t24 = -60383;

	t24 = (x105^((x106<=x107)-x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MAX;
	int16_t x112 = 31;
	int64_t t25 = -252301421LL;

	t25 = (x109^((x110<=x111)-x112));

	if (t25 != 9223372036854775778LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -10964706LL;
	int64_t x114 = -1LL;
	int8_t x115 = INT8_MAX;
	volatile int8_t x116 = INT8_MIN;

	t26 = (x113^((x114<=x115)-x116));

	if (t26 != -10964577LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x118 = -1;
	int16_t x120 = INT16_MIN;
	volatile int32_t t27 = 967032916;

	t27 = (x117^((x118<=x119)-x120));

	if (t27 != 32781) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = 2323239131808LLU;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MAX;
	static int32_t t28 = 730;

	t28 = (x121^((x122<=x123)-x124));

	if (t28 != 32641) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	volatile int8_t x126 = -1;
	int64_t x127 = -31824306721507492LL;
	int8_t x128 = INT8_MAX;

	t29 = (x125^((x126<=x127)-x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x132 = 60716806U;

	t30 = (x129^((x130<=x131)-x132));

	if (t30 != 9223372032620525316LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -1;
	int16_t x134 = -1206;
	int16_t x135 = -5;
	int32_t x136 = 279;
	int32_t t31 = -49880126;

	t31 = (x133^((x134<=x135)-x136));

	if (t31 != 277) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = -11;
	static int64_t x138 = INT64_MAX;
	uint64_t x139 = 240309103158093LLU;
	uint8_t x140 = 10U;
	int32_t t32 = 2;

	t32 = (x137^((x138<=x139)-x140));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = INT8_MAX;
	int16_t x142 = -3841;
	int16_t x143 = INT16_MIN;
	uint64_t x144 = UINT64_MAX;

	t33 = (x141^((x142<=x143)-x144));

	if (t33 != 126LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MAX;
	int8_t x148 = 0;

	t34 = (x145^((x146<=x147)-x148));

	if (t34 != 4294967294U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int16_t x150 = -14314;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = 51197365957294722LLU;
	volatile uint64_t t35 = 629042650244952250LLU;

	t35 = (x149^((x150<=x151)-x152));

	if (t35 != 18395546709205842561LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 7764U;
	int32_t x154 = -1;
	volatile int16_t x156 = INT16_MIN;

	t36 = (x153^((x154<=x155)-x156));

	if (t36 != 40533) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MIN;
	int64_t x160 = INT64_MAX;
	volatile int64_t t37 = 2188479991542LL;

	t37 = (x157^((x158<=x159)-x160));

	if (t37 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MIN;
	int64_t x163 = -1LL;
	uint8_t x164 = UINT8_MAX;
	int32_t t38 = -1;

	t38 = (x161^((x162<=x163)-x164));

	if (t38 != 2147483394) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x169 = UINT16_MAX;
	uint8_t x170 = UINT8_MAX;
	volatile int64_t x171 = -1LL;
	volatile int32_t t39 = 1;

	t39 = (x169^((x170<=x171)-x172));

	if (t39 != -65530) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x174 = -3;
	uint8_t x175 = UINT8_MAX;
	static int64_t x176 = -1LL;
	int64_t t40 = 7349430117LL;

	t40 = (x173^((x174<=x175)-x176));

	if (t40 != 17LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 9099979259751152885LLU;
	int16_t x180 = -1;

	t41 = (x177^((x178<=x179)-x180));

	if (t41 != 9099979259751152884LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -1;
	int32_t x182 = INT32_MIN;
	static int32_t x183 = INT32_MIN;
	uint32_t x184 = UINT32_MAX;

	t42 = (x181^((x182<=x183)-x184));

	if (t42 != 4294967293U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	static uint32_t x186 = 19U;
	int64_t x187 = 87828165060665LL;
	static int32_t x188 = 118334;
	int32_t t43 = 682;

	t43 = (x185^((x186<=x187)-x188));

	if (t43 != 2147365315) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x190 = INT64_MIN;
	volatile int8_t x192 = 22;

	t44 = (x189^((x190<=x191)-x192));

	if (t44 != -343LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 15708U;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = INT64_MIN;
	uint32_t x200 = 3250070U;
	volatile uint32_t t45 = 36923U;

	t45 = (x197^((x198<=x199)-x200));

	if (t45 != 4291712310U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = 15067U;
	int8_t x202 = -1;
	int32_t x204 = INT32_MAX;
	static int32_t t46 = -303574040;

	t46 = (x201^((x202<=x203)-x204));

	if (t46 != -2147468582) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = INT32_MAX;
	int8_t x208 = INT8_MIN;

	t47 = (x205^((x206<=x207)-x208));

	if (t47 != 154) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x210 = 4;
	static uint16_t x211 = 15946U;
	int8_t x212 = 13;
	int32_t t48 = -312371;

	t48 = (x209^((x210<=x211)-x212));

	if (t48 != -9) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = -1;
	int16_t x214 = 44;
	uint32_t t49 = 2U;

	t49 = (x213^((x214<=x215)-x216));

	if (t49 != 10819U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x217 = UINT64_MAX;
	static int64_t x218 = -2448551361939343146LL;
	int8_t x219 = 1;
	uint8_t x220 = UINT8_MAX;
	uint64_t t50 = 9930881333LLU;

	t50 = (x217^((x218<=x219)-x220));

	if (t50 != 253LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x222 = UINT32_MAX;
	volatile uint32_t x223 = 69335551U;
	volatile uint32_t x224 = 15315976U;
	uint32_t t51 = 36U;

	t51 = (x221^((x222<=x223)-x224));

	if (t51 != 2132167672U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x225 = INT32_MAX;
	int32_t x226 = -1;
	static uint8_t x227 = 5U;
	int64_t x228 = -1LL;
	volatile int64_t t52 = -937889482195LL;

	t52 = (x225^((x226<=x227)-x228));

	if (t52 != 2147483645LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	static uint8_t x231 = UINT8_MAX;
	int32_t t53 = -6414037;

	t53 = (x229^((x230<=x231)-x232));

	if (t53 != -2147483646) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = UINT64_MAX;
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = 1644489467313LL;
	int8_t x240 = -13;
	static volatile uint64_t t54 = 17LLU;

	t54 = (x237^((x238<=x239)-x240));

	if (t54 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -61332632;
	static uint16_t x242 = UINT16_MAX;
	uint32_t x243 = 97228517U;
	uint64_t t55 = 410LLU;

	t55 = (x241^((x242<=x243)-x244));

	if (t55 != 18446744073648218986LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x245 = UINT8_MAX;
	uint8_t x247 = UINT8_MAX;
	int8_t x248 = -1;
	volatile int32_t t56 = 7357;

	t56 = (x245^((x246<=x247)-x248));

	if (t56 != 253) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MIN;
	volatile uint64_t x250 = UINT64_MAX;
	volatile int32_t t57 = 203785;

	t57 = (x249^((x250<=x251)-x252));

	if (t57 != 32766) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = 39238724637LL;
	int8_t x259 = -1;
	int32_t x260 = INT32_MAX;

	t58 = (x257^((x258<=x259)-x260));

	if (t58 != -40218170337LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = INT64_MIN;
	uint32_t x262 = 58U;
	uint32_t x263 = UINT32_MAX;
	volatile int64_t t59 = -3329620LL;

	t59 = (x261^((x262<=x263)-x264));

	if (t59 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = 13;
	int32_t x270 = -75052;
	int16_t x271 = -12;
	int8_t x272 = -17;
	int32_t t60 = -59;

	t60 = (x269^((x270<=x271)-x272));

	if (t60 != 31) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x274 = INT16_MIN;
	static int32_t x275 = -671807618;
	int8_t x276 = -1;
	int32_t t61 = 12292;

	t61 = (x273^((x274<=x275)-x276));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x278 = INT32_MIN;
	static uint16_t x280 = UINT16_MAX;
	volatile int64_t t62 = 71301200623475707LL;

	t62 = (x277^((x278<=x279)-x280));

	if (t62 != -65521LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = 16932128604LL;
	static int64_t t63 = 3LL;

	t63 = (x281^((x282<=x283)-x284));

	if (t63 != 9223372019922647205LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x285 = 3U;
	int32_t x287 = -956;
	int16_t x288 = INT16_MIN;
	volatile uint32_t t64 = 16964U;

	t64 = (x285^((x286<=x287)-x288));

	if (t64 != 32770U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x295 = INT8_MIN;
	volatile int32_t t65 = -9446;

	t65 = (x293^((x294<=x295)-x296));

	if (t65 != 126) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x297 = 80906226560945069LLU;
	uint64_t x298 = 27LLU;
	uint8_t x299 = 0U;
	uint16_t x300 = UINT16_MAX;
	static uint64_t t66 = 158193050409400958LLU;

	t66 = (x297^((x298<=x299)-x300));

	if (t66 != 18365837847148579756LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x301 = 1174U;
	uint32_t x303 = UINT32_MAX;
	uint8_t x304 = 0U;
	static uint32_t t67 = 1581905U;

	t67 = (x301^((x302<=x303)-x304));

	if (t67 != 1174U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x305 = UINT8_MAX;
	int64_t x308 = 40193788472293626LL;
	int64_t t68 = 13742LL;

	t68 = (x305^((x306<=x307)-x308));

	if (t68 != -40193788472293383LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = INT16_MIN;
	uint64_t x314 = 86557564233LLU;
	uint16_t x315 = UINT16_MAX;
	volatile int8_t x316 = INT8_MIN;
	volatile int32_t t69 = -62807372;

	t69 = (x313^((x314<=x315)-x316));

	if (t69 != -32640) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MIN;
	volatile int16_t x318 = -1;
	static int8_t x320 = INT8_MAX;

	t70 = (x317^((x318<=x319)-x320));

	if (t70 != 2147483522) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x322 = INT64_MAX;
	volatile int16_t x323 = INT16_MAX;
	int64_t x324 = -3LL;

	t71 = (x321^((x322<=x323)-x324));

	if (t71 != -2147483645LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = INT16_MAX;
	volatile int32_t x326 = -1;
	int32_t x327 = INT32_MIN;
	int8_t x328 = -1;
	static int32_t t72 = 478;

	t72 = (x325^((x326<=x327)-x328));

	if (t72 != 32766) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x329 = 2U;
	uint16_t x330 = 30626U;
	int8_t x331 = -1;
	int32_t x332 = -801;
	static volatile int32_t t73 = 23;

	t73 = (x329^((x330<=x331)-x332));

	if (t73 != 803) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x333 = INT16_MIN;
	volatile int8_t x334 = INT8_MAX;
	int16_t x335 = -1;
	static int8_t x336 = 2;

	t74 = (x333^((x334<=x335)-x336));

	if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = -914;
	int64_t x338 = -5624LL;
	int64_t x339 = -6909646563LL;
	int16_t x340 = INT16_MIN;
	int32_t t75 = 224064;

	t75 = (x337^((x338<=x339)-x340));

	if (t75 != -33682) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x341 = 59623547651255459LL;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = 2U;
	uint64_t x344 = 13531538308LLU;
	volatile uint64_t t76 = 1008386259863LLU;

	t76 = (x341^((x342<=x343)-x344));

	if (t76 != 18387120513667657950LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x345 = UINT64_MAX;
	uint64_t x346 = 4066388LLU;
	uint64_t t77 = 38327335LLU;

	t77 = (x345^((x346<=x347)-x348));

	if (t77 != 18446744069414584568LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x349 = -70067574;
	uint64_t x350 = 1LLU;
	int8_t x351 = -1;
	static int8_t x352 = -46;
	int32_t t78 = 28860;

	t78 = (x349^((x350<=x351)-x352));

	if (t78 != -70067547) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x357 = 189129530U;
	volatile int64_t x358 = 58312669LL;
	int32_t x359 = INT32_MIN;
	uint64_t x360 = UINT64_MAX;
	static uint64_t t79 = 116517178618314LLU;

	t79 = (x357^((x358<=x359)-x360));

	if (t79 != 189129531LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x362 = 0;
	int16_t x363 = INT16_MAX;
	uint16_t x364 = 8U;
	volatile int64_t t80 = 7925LL;

	t80 = (x361^((x362<=x363)-x364));

	if (t80 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x365 = INT64_MIN;
	uint32_t x366 = 46539U;
	uint64_t x367 = 5422LLU;
	int16_t x368 = -797;

	t81 = (x365^((x366<=x367)-x368));

	if (t81 != -9223372036854775011LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MAX;
	int8_t x370 = 8;
	volatile int16_t x371 = -2;
	uint16_t x372 = 1U;
	static volatile int32_t t82 = -292105312;

	t82 = (x369^((x370<=x371)-x372));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x374 = -1;
	volatile uint8_t x375 = 0U;
	volatile int32_t t83 = -4401;

	t83 = (x373^((x374<=x375)-x376));

	if (t83 != -65535) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = INT16_MIN;
	volatile uint32_t t84 = 3419U;

	t84 = (x377^((x378<=x379)-x380));

	if (t84 != 764167956U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x387 = INT16_MIN;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t85 = 30;

	t85 = (x385^((x386<=x387)-x388));

	if (t85 != -130) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x389 = 273390778021728LLU;
	static int16_t x390 = 1;
	static volatile int32_t x391 = 14795556;
	volatile uint64_t t86 = 11267702LLU;

	t86 = (x389^((x390<=x391)-x392));

	if (t86 != 18446470682931530511LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x393 = 14515630LL;
	uint8_t x394 = 91U;
	int32_t x395 = INT32_MIN;
	volatile int64_t x396 = -3LL;
	static int64_t t87 = 162384835350LL;

	t87 = (x393^((x394<=x395)-x396));

	if (t87 != 14515629LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x397 = 194406613835428503LLU;
	int8_t x398 = -1;
	int64_t x400 = 37183684LL;
	uint64_t t88 = 0LLU;

	t88 = (x397^((x398<=x399)-x400));

	if (t88 != 18252337459908914602LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x401 = -1;
	volatile uint16_t x402 = 18319U;
	uint32_t x403 = 2U;
	static volatile int64_t x404 = -26000982772941295LL;
	volatile int64_t t89 = -2LL;

	t89 = (x401^((x402<=x403)-x404));

	if (t89 != -26000982772941296LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = INT64_MAX;
	int16_t x406 = -1;
	uint8_t x407 = UINT8_MAX;
	static int8_t x408 = INT8_MAX;

	t90 = (x405^((x406<=x407)-x408));

	if (t90 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x409 = -7;
	int32_t x410 = 17574;
	uint8_t x411 = 0U;
	volatile int32_t t91 = 772;

	t91 = (x409^((x410<=x411)-x412));

	if (t91 != -135) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x413 = INT32_MIN;
	int32_t x415 = INT32_MAX;

	t92 = (x413^((x414<=x415)-x416));

	if (t92 != 2147483394) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x417 = 99841424959091LL;
	uint32_t x418 = 182972856U;
	uint8_t x419 = 92U;
	volatile int64_t t93 = -505887LL;

	t93 = (x417^((x418<=x419)-x420));

	if (t93 != -99841424972174LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x421 = 11;
	static uint8_t x422 = UINT8_MAX;
	static int32_t x423 = INT32_MIN;
	volatile int8_t x424 = -5;

	t94 = (x421^((x422<=x423)-x424));

	if (t94 != 14) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t t95 = -168272940887792565LL;

	t95 = (x429^((x430<=x431)-x432));

	if (t95 != -9223372036584369614LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x433 = INT64_MAX;
	static uint16_t x435 = UINT16_MAX;
	volatile uint64_t t96 = 54826294LLU;

	t96 = (x433^((x434<=x435)-x436));

	if (t96 != 9223372036854775833LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x438 = 36251U;
	int16_t x439 = INT16_MIN;
	int64_t t97 = 5641LL;

	t97 = (x437^((x438<=x439)-x440));

	if (t97 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = INT64_MAX;
	int8_t x442 = -1;
	volatile uint32_t x443 = 716U;
	volatile uint64_t x444 = UINT64_MAX;
	uint64_t t98 = 843LLU;

	t98 = (x441^((x442<=x443)-x444));

	if (t98 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x445 = 10U;
	int8_t x446 = INT8_MAX;
	volatile int16_t x447 = INT16_MAX;
	int64_t x448 = INT64_MAX;

	t99 = (x445^((x446<=x447)-x448));

	if (t99 != -9223372036854775800LL) { NG(); } else { ; }
	
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

