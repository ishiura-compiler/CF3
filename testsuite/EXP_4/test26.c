#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 0U;
static volatile uint64_t t0 = 1029984LLU;
int32_t t1 = 7893;
uint16_t x28 = 5947U;
uint16_t x46 = UINT16_MAX;
uint64_t x48 = UINT64_MAX;
int64_t x50 = -1LL;
volatile uint16_t x51 = UINT16_MAX;
static int64_t x52 = INT64_MIN;
int16_t x55 = 1095;
int64_t x65 = INT64_MIN;
uint16_t x73 = UINT16_MAX;
int16_t x74 = INT16_MIN;
int8_t x75 = 6;
uint32_t x79 = 13U;
static int32_t x87 = INT32_MIN;
uint32_t x89 = 1235925U;
int8_t x94 = INT8_MIN;
int32_t x100 = INT32_MIN;
uint8_t x102 = UINT8_MAX;
int64_t x104 = 4211013302LL;
volatile uint32_t x105 = 75U;
uint8_t x110 = 7U;
int8_t x119 = INT8_MIN;
volatile uint16_t x120 = UINT16_MAX;
int64_t x124 = -1LL;
static volatile uint64_t t25 = 5LLU;
volatile int16_t x137 = INT16_MIN;
volatile int8_t x139 = -4;
volatile int64_t x141 = INT64_MIN;
int32_t x142 = -1;
volatile int16_t x143 = -3;
uint64_t x145 = 3015115075556081590LLU;
int16_t x148 = 0;
volatile int32_t x151 = 91810;
volatile int64_t x152 = INT64_MIN;
volatile uint64_t x157 = UINT64_MAX;
uint8_t x159 = UINT8_MAX;
volatile uint64_t x160 = UINT64_MAX;
int8_t x167 = 1;
volatile uint32_t x168 = UINT32_MAX;
volatile uint32_t t34 = 381464U;
static uint64_t x169 = 814226473060174431LLU;
static volatile uint64_t x172 = UINT64_MAX;
int32_t x180 = -603116091;
uint16_t x187 = 31U;
uint64_t t39 = 104LLU;
int8_t x194 = -1;
static uint16_t x195 = 0U;
int8_t x202 = INT8_MIN;
int32_t x208 = -1;
volatile uint8_t x212 = UINT8_MAX;
static uint64_t x222 = 129461730128LLU;
static uint64_t t46 = 1662152851227008LLU;
static int32_t x236 = INT32_MIN;
uint16_t x246 = UINT16_MAX;
static volatile uint32_t t52 = 38852685U;
static int16_t x253 = -1;
uint32_t x254 = 1426342U;
int32_t x257 = INT32_MAX;
static uint64_t x259 = 497565189LLU;
int32_t x260 = 2194;
volatile uint64_t t54 = 356709409912605LLU;
volatile uint64_t x267 = 46309323479303000LLU;
uint64_t t57 = 85479240035806559LLU;
static uint32_t t58 = 80187397U;
static int32_t x278 = INT32_MAX;
int64_t x283 = INT64_MAX;
volatile int64_t x284 = INT64_MIN;
int16_t x289 = INT16_MIN;
uint64_t x290 = 1058279593794LLU;
int32_t x296 = INT32_MIN;
int16_t x313 = 4;
int16_t x314 = INT16_MIN;
uint16_t x315 = 7U;
int64_t t64 = -138479725129327498LL;
int16_t x318 = INT16_MIN;
int32_t x327 = INT32_MIN;
volatile int32_t t67 = -1;
uint64_t t68 = 1418043766030908LLU;
static int16_t x342 = INT16_MIN;
uint16_t x344 = 5U;
static int8_t x345 = 34;
static int16_t x348 = INT16_MAX;
int32_t t70 = -53;
int8_t x354 = 0;
uint32_t x358 = 371640U;
static int64_t x360 = -1LL;
int64_t x369 = INT64_MIN;
uint16_t x372 = 0U;
int32_t x386 = -1;
volatile int8_t x398 = -7;
int32_t x402 = -170771431;
int8_t x409 = INT8_MIN;
static int64_t x417 = INT64_MIN;
int8_t x419 = -4;
int64_t t84 = 31LL;
volatile int32_t x423 = 694;
int64_t x424 = -1945119400LL;
volatile int32_t x428 = -1;
int64_t t86 = 82325LL;
int64_t x432 = -44696245622374LL;
static int8_t x436 = INT8_MAX;
volatile uint64_t x459 = 137LLU;
volatile uint64_t t92 = 2377406107928LLU;
uint32_t x465 = UINT32_MAX;
volatile uint16_t x479 = UINT16_MAX;
int64_t x480 = INT64_MIN;
static uint16_t x487 = 1602U;


void f0(void) {
	int8_t x1 = 45;
	static volatile uint64_t x3 = 8656813105454LLU;
	int16_t x4 = INT16_MIN;

	t0 = (x1^(x2-(x3+x4)));

	if (t0 != 18446735416896478975LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -50636;
	uint8_t x6 = UINT8_MAX;
	static int16_t x7 = INT16_MIN;
	static uint8_t x8 = 0U;

	t1 = (x5^(x6-(x7+x8)));

	if (t1 != -17717) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int8_t x10 = INT8_MIN;
	static volatile int8_t x11 = -1;
	volatile uint16_t x12 = 184U;
	static int32_t t2 = -1211;

	t2 = (x9^(x10-(x11+x12)));

	if (t2 != 310) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	volatile int8_t x14 = -10;
	int8_t x15 = INT8_MAX;
	volatile uint16_t x16 = 16U;
	int32_t t3 = -874;

	t3 = (x13^(x14-(x15+x16)));

	if (t3 != -32616) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int8_t x18 = 7;
	int8_t x19 = -34;
	uint8_t x20 = 59U;
	static volatile int32_t t4 = 66445370;

	t4 = (x17^(x18-(x19+x20)));

	if (t4 != 17) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = 101U;
	int32_t x26 = INT32_MIN;
	uint32_t x27 = 595671U;
	uint32_t t5 = 18727U;

	t5 = (x25^(x26-(x27+x28)));

	if (t5 != 2146881931U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = UINT16_MAX;
	volatile uint64_t x34 = 401038216LLU;
	static volatile int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	volatile uint64_t t6 = 17291LLU;

	t6 = (x33^(x34-(x35+x36)));

	if (t6 != 401023991LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = INT32_MIN;
	static int8_t x38 = -1;
	int16_t x39 = INT16_MIN;
	volatile uint64_t x40 = UINT64_MAX;
	volatile uint64_t t7 = 2658504LLU;

	t7 = (x37^(x38-(x39+x40)));

	if (t7 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1;
	int8_t x42 = INT8_MIN;
	uint8_t x43 = 10U;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t8 = 75617;

	t8 = (x41^(x42-(x43+x44)));

	if (t8 != -32631) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MAX;
	uint8_t x47 = 35U;
	volatile uint64_t t9 = 699736617LLU;

	t9 = (x45^(x46-(x47+x48)));

	if (t9 != 9223372036854710306LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int64_t t10 = -4647LL;

	t10 = (x49^(x50-(x51+x52)));

	if (t10 != 9223372036854710527LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 23;
	uint32_t x54 = UINT32_MAX;
	uint64_t x56 = 53493LLU;
	volatile uint64_t t11 = 522858915903264LLU;

	t11 = (x53^(x54-(x55+x56)));

	if (t11 != 4294912724LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x66 = INT16_MIN;
	int64_t x67 = 148387852940LL;
	int64_t x68 = -1LL;
	volatile int64_t t12 = -328832911LL;

	t12 = (x65^(x66-(x67+x68)));

	if (t12 != 9223371888466890101LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 104160642648043LLU;
	int8_t x70 = INT8_MAX;
	int16_t x71 = -3467;
	uint32_t x72 = 53U;
	static volatile uint64_t t13 = 410415156538220406LLU;

	t13 = (x69^(x70-(x71+x72)));

	if (t13 != 104160642648638LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x76 = 390576U;
	volatile uint32_t t14 = 1195795251U;

	t14 = (x73^(x74-(x75+x76)));

	if (t14 != 4294538677U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = UINT16_MAX;
	uint8_t x78 = 98U;
	uint8_t x80 = UINT8_MAX;
	volatile uint32_t t15 = 1212U;

	t15 = (x77^(x78-(x79+x80)));

	if (t15 != 4294901929U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = INT32_MIN;
	volatile int8_t x86 = -1;
	static int16_t x88 = 38;
	volatile int32_t t16 = 175266;

	t16 = (x85^(x86-(x87+x88)));

	if (t16 != -39) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x90 = 28629U;
	int32_t x91 = INT32_MAX;
	int8_t x92 = INT8_MIN;
	uint32_t t17 = 12494006U;

	t17 = (x89^(x90-(x91+x92)));

	if (t17 != 2148707203U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = 0;
	uint32_t x95 = UINT32_MAX;
	static int16_t x96 = -20;
	uint32_t t18 = 49222786U;

	t18 = (x93^(x94-(x95+x96)));

	if (t18 != 4294967189U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = 4U;
	int64_t x98 = -1LL;
	int8_t x99 = 7;
	volatile int64_t t19 = 2LL;

	t19 = (x97^(x98-(x99+x100)));

	if (t19 != 2147483644LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = INT16_MIN;
	int16_t x103 = -1;
	volatile int64_t t20 = 15032127917LL;

	t20 = (x101^(x102-(x103+x104)));

	if (t20 != 4210985546LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x106 = INT8_MAX;
	int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MAX;
	volatile uint32_t t21 = 453955527U;

	t21 = (x105^(x106-(x107+x108)));

	if (t21 != 203U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = -1LL;
	uint32_t x111 = UINT32_MAX;
	int64_t x112 = INT64_MIN;
	int64_t t22 = -15LL;

	t22 = (x109^(x110-(x111+x112)));

	if (t22 != -9223372032559808521LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 268U;
	volatile int64_t x114 = -1LL;
	volatile uint16_t x115 = 17076U;
	uint8_t x116 = 4U;
	volatile int64_t t23 = -451713506189448912LL;

	t23 = (x113^(x114-(x115+x116)));

	if (t23 != -17333LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -2;
	int32_t x118 = -50194;
	int32_t t24 = 31449298;

	t24 = (x117^(x118-(x119+x120)));

	if (t24 != 115601) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x121 = 2168684407700LLU;
	int16_t x122 = -620;
	static int64_t x123 = -1361017773LL;

	t25 = (x121^(x122-(x123+x124)));

	if (t25 != 2167863153366LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x129 = 109;
	uint8_t x130 = 12U;
	volatile int16_t x131 = -9;
	int32_t x132 = -12678489;
	int32_t t26 = -52;

	t26 = (x129^(x130-(x131+x132)));

	if (t26 != 12678403) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x138 = 112U;
	int32_t x140 = -4;
	uint32_t t27 = 1486087U;

	t27 = (x137^(x138-(x139+x140)));

	if (t27 != 4294934648U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x144 = UINT32_MAX;
	volatile int64_t t28 = -258625367291LL;

	t28 = (x141^(x142-(x143+x144)));

	if (t28 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x146 = 12766003LLU;
	int64_t x147 = -13134LL;
	volatile uint64_t t29 = 243839852827LLU;

	t29 = (x145^(x146-(x147+x148)));

	if (t29 != 3015115075560341815LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = UINT64_MAX;
	int8_t x150 = INT8_MAX;
	uint64_t t30 = 844757LLU;

	t30 = (x149^(x150-(x151+x152)));

	if (t30 != 9223372036854867490LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x153 = 2U;
	volatile int16_t x154 = 5131;
	uint16_t x155 = UINT16_MAX;
	uint64_t x156 = 2083941320LLU;
	uint64_t t31 = 31860726227LLU;

	t31 = (x153^(x154-(x155+x156)));

	if (t31 != 18446744071625549894LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x158 = INT8_MIN;
	uint64_t t32 = 13LLU;

	t32 = (x157^(x158-(x159+x160)));

	if (t32 != 381LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = 49344170214587766LLU;
	volatile int8_t x162 = INT8_MIN;
	volatile uint32_t x163 = UINT32_MAX;
	int32_t x164 = 0;
	volatile uint64_t t33 = 524858954LLU;

	t33 = (x161^(x162-(x163+x164)));

	if (t33 != 49344166678725367LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MIN;
	int32_t x166 = 1172104;

	t34 = (x165^(x166-(x167+x168)));

	if (t34 != 2148655752U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x170 = 7U;
	int64_t x171 = INT64_MAX;
	static volatile uint64_t t35 = 217405822471LLU;

	t35 = (x169^(x170-(x171+x172)));

	if (t35 != 10037598509914950230LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = -1698LL;
	static int32_t x174 = -1;
	int64_t x175 = 6320703280031441LL;
	int16_t x176 = 6593;
	static int64_t t36 = 390727602LL;

	t36 = (x173^(x174-(x175+x176)));

	if (t36 != 6320703280039475LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x177 = -1;
	int64_t x178 = INT64_MIN;
	int32_t x179 = 600678;
	volatile int64_t t37 = 7LL;

	t37 = (x177^(x178-(x179+x180)));

	if (t37 != 9223372036252260394LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	volatile int16_t x182 = -1;
	int16_t x183 = -249;
	static uint16_t x184 = 5U;
	volatile int32_t t38 = 400028992;

	t38 = (x181^(x182-(x183+x184)));

	if (t38 != -141) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x185 = -3614760841647602LL;
	uint32_t x186 = 12161U;
	volatile uint64_t x188 = 461564LLU;

	t39 = (x185^(x186-(x187+x188)));

	if (t39 != 3614760841825896LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = INT8_MAX;
	int8_t x190 = -2;
	static int32_t x191 = INT32_MAX;
	volatile int64_t x192 = 1112852LL;
	int64_t t40 = 15031LL;

	t40 = (x189^(x190-(x191+x192)));

	if (t40 != -2148596588LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = 8183;
	static uint64_t x196 = 1274829510LLU;
	uint64_t t41 = 549LLU;

	t41 = (x193^(x194-(x195+x196)));

	if (t41 != 18446744072434727630LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = -31;
	volatile uint8_t x203 = 11U;
	int32_t x204 = -1;
	int32_t t42 = -16913439;

	t42 = (x201^(x202-(x203+x204)));

	if (t42 != 151) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = 1071889;
	int8_t x206 = INT8_MIN;
	static int16_t x207 = INT16_MIN;
	int32_t t43 = -480715;

	t43 = (x205^(x206-(x207+x208)));

	if (t43 != 1057936) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = INT64_MAX;
	static int32_t x210 = -1;
	int32_t x211 = INT32_MIN;
	volatile int64_t t44 = 10293792419LL;

	t44 = (x209^(x210-(x211+x212)));

	if (t44 != 9223372034707292415LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x213 = 6U;
	volatile int8_t x214 = 3;
	int64_t x215 = 7286212931LL;
	int32_t x216 = INT32_MAX;
	volatile int64_t t45 = -2159426329LL;

	t45 = (x213^(x214-(x215+x216)));

	if (t45 != -9433696569LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = INT64_MIN;
	volatile int32_t x223 = 144282;
	int8_t x224 = INT8_MIN;

	t46 = (x221^(x222-(x223+x224)));

	if (t46 != 9223372166316361782LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = INT32_MIN;
	volatile uint8_t x226 = UINT8_MAX;
	int8_t x227 = -2;
	int16_t x228 = 13;
	volatile int32_t t47 = 9;

	t47 = (x225^(x226-(x227+x228)));

	if (t47 != -2147483404) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = INT32_MIN;
	static int32_t x230 = 1;
	volatile int16_t x231 = INT16_MAX;
	static uint8_t x232 = UINT8_MAX;
	volatile int32_t t48 = -1;

	t48 = (x229^(x230-(x231+x232)));

	if (t48 != 2147450627) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x234 = -1;
	int64_t x235 = INT64_MAX;
	uint64_t t49 = 137228391522184LLU;

	t49 = (x233^(x234-(x235+x236)));

	if (t49 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = 2358704800470437939LL;
	int16_t x238 = -1;
	uint16_t x239 = 1719U;
	int64_t x240 = -1LL;
	volatile int64_t t50 = 6640LL;

	t50 = (x237^(x238-(x239+x240)));

	if (t50 != -2358704800470439558LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x245 = UINT64_MAX;
	volatile uint8_t x247 = UINT8_MAX;
	volatile int16_t x248 = INT16_MIN;
	static volatile uint64_t t51 = 2375LLU;

	t51 = (x245^(x246-(x247+x248)));

	if (t51 != 18446744073709453567LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x249 = 368912U;
	volatile uint32_t x250 = 988U;
	int16_t x251 = -35;
	int8_t x252 = 1;

	t52 = (x249^(x250-(x251+x252)));

	if (t52 != 369390U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x255 = -1;
	int8_t x256 = 13;
	static volatile uint32_t t53 = 1530730550U;

	t53 = (x253^(x254-(x255+x256)));

	if (t53 != 4293540965U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x258 = -1;

	t54 = (x257^(x258-(x259+x260)));

	if (t54 != 18446744072059635351LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x261 = -1;
	int16_t x262 = INT16_MIN;
	volatile uint8_t x263 = 2U;
	int64_t x264 = INT64_MIN;
	volatile int64_t t55 = 31444211LL;

	t55 = (x261^(x262-(x263+x264)));

	if (t55 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MAX;
	volatile int16_t x268 = -1;
	uint64_t t56 = 18LLU;

	t56 = (x265^(x266-(x267+x268)));

	if (t56 != 46309324829146280LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x269 = -1;
	int16_t x270 = -1904;
	uint8_t x271 = UINT8_MAX;
	static uint64_t x272 = 104376LLU;

	t57 = (x269^(x270-(x271+x272)));

	if (t57 != 106534LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = INT8_MIN;
	uint32_t x274 = 188U;
	static volatile int8_t x275 = INT8_MIN;
	volatile int8_t x276 = 14;

	t58 = (x273^(x274-(x275+x276)));

	if (t58 != 4294966958U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x277 = UINT8_MAX;
	uint64_t x279 = 410599348LLU;
	int32_t x280 = INT32_MIN;
	static uint64_t t59 = 19638LLU;

	t59 = (x277^(x278-(x279+x280)));

	if (t59 != 3884368052LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = INT8_MIN;
	static int8_t x282 = -2;
	volatile int64_t t60 = -1190914LL;

	t60 = (x281^(x282-(x283+x284)));

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x291 = INT16_MIN;
	uint64_t x292 = 145178858LLU;
	uint64_t t61 = 11338152LLU;

	t61 = (x289^(x290-(x291+x292)));

	if (t61 != 18446743015575115352LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x293 = UINT32_MAX;
	int8_t x294 = -25;
	static uint8_t x295 = 67U;
	static uint32_t t62 = 1131655U;

	t62 = (x293^(x294-(x295+x296)));

	if (t62 != 2147483739U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x297 = INT16_MIN;
	static int32_t x298 = INT32_MAX;
	int16_t x299 = -1;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t63 = 7;

	t63 = (x297^(x298-(x299+x300)));

	if (t63 != -2147451135) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x316 = INT64_MIN;

	t64 = (x313^(x314-(x315+x316)));

	if (t64 != 9223372036854743037LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x317 = 150U;
	uint16_t x319 = UINT16_MAX;
	volatile int64_t x320 = -1LL;
	static int64_t t65 = 1465LL;

	t65 = (x317^(x318-(x319+x320)));

	if (t65 != -98156LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MIN;
	uint8_t x328 = 27U;
	volatile int64_t t66 = 18757836LL;

	t66 = (x325^(x326-(x327+x328)));

	if (t66 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x329 = INT16_MIN;
	volatile int16_t x330 = -1;
	volatile uint8_t x331 = 11U;
	volatile int16_t x332 = 2;

	t67 = (x329^(x330-(x331+x332)));

	if (t67 != 32754) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = UINT64_MAX;
	static uint16_t x338 = 25U;
	uint64_t x339 = 4LLU;
	int16_t x340 = 438;

	t68 = (x337^(x338-(x339+x340)));

	if (t68 != 416LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x341 = UINT16_MAX;
	int64_t x343 = INT64_MIN;
	static int64_t t69 = 49736842983715150LL;

	t69 = (x341^(x342-(x343+x344)));

	if (t69 != 9223372036854743044LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x346 = INT16_MAX;
	int8_t x347 = INT8_MIN;

	t70 = (x345^(x346-(x347+x348)));

	if (t70 != 162) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x353 = INT32_MIN;
	int16_t x355 = -222;
	int16_t x356 = INT16_MIN;
	volatile int32_t t71 = -237632495;

	t71 = (x353^(x354-(x355+x356)));

	if (t71 != -2147450658) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x357 = INT64_MIN;
	static int16_t x359 = INT16_MAX;
	volatile int64_t t72 = 24171349LL;

	t72 = (x357^(x358-(x359+x360)));

	if (t72 != -9223372036854436934LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = 294;
	int64_t x367 = -1LL;
	int64_t x368 = -1LL;
	volatile int64_t t73 = 3903068198LL;

	t73 = (x365^(x366-(x367+x368)));

	if (t73 != -32472LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x370 = -6;
	int16_t x371 = 5469;
	int64_t t74 = -206083260594683306LL;

	t74 = (x369^(x370-(x371+x372)));

	if (t74 != 9223372036854770333LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x373 = UINT32_MAX;
	int64_t x374 = 1395030LL;
	volatile uint32_t x375 = 30U;
	int8_t x376 = INT8_MIN;
	static volatile int64_t t75 = 217904503655280LL;

	t75 = (x373^(x374-(x375+x376)));

	if (t75 != -1395129LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x377 = INT64_MAX;
	uint16_t x378 = 1730U;
	volatile int16_t x379 = -10;
	uint32_t x380 = 198U;
	int64_t t76 = -182711066068688LL;

	t76 = (x377^(x378-(x379+x380)));

	if (t76 != 9223372036854774265LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x381 = 1U;
	int32_t x382 = 94824;
	volatile int32_t x383 = INT32_MAX;
	static int8_t x384 = 0;
	int32_t t77 = -34;

	t77 = (x381^(x382-(x383+x384)));

	if (t77 != -2147388824) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x385 = INT8_MIN;
	static int16_t x387 = INT16_MAX;
	static volatile uint64_t x388 = 132594002LLU;
	static volatile uint64_t t78 = 910215781743464LLU;

	t78 = (x385^(x386-(x387+x388)));

	if (t78 != 132626734LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x389 = 13493443LL;
	uint32_t x390 = UINT32_MAX;
	int8_t x391 = INT8_MIN;
	int16_t x392 = INT16_MIN;
	int64_t t79 = -2LL;

	t79 = (x389^(x390-(x391+x392)));

	if (t79 != 13460668LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x397 = 2470U;
	int8_t x399 = 15;
	volatile int64_t x400 = INT64_MIN;
	volatile int64_t t80 = -32989692806002401LL;

	t80 = (x397^(x398-(x399+x400)));

	if (t80 != 9223372036854773324LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x401 = INT16_MIN;
	uint8_t x403 = 58U;
	volatile uint32_t x404 = 8217234U;
	volatile uint32_t t81 = 247U;

	t81 = (x401^(x402-(x403+x404)));

	if (t81 != 179001677U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x405 = UINT8_MAX;
	uint64_t x406 = 25104666630751LLU;
	int64_t x407 = -4788926263232568LL;
	int8_t x408 = 11;
	static uint64_t t82 = 2830LLU;

	t82 = (x405^(x406-(x407+x408)));

	if (t82 != 4814030929863283LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x410 = 170223505LLU;
	uint8_t x411 = 111U;
	uint32_t x412 = 1U;
	uint64_t t83 = 902817536LLU;

	t83 = (x409^(x410-(x411+x412)));

	if (t83 != 18446744073539328161LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x418 = 226U;
	static volatile int32_t x420 = -1;

	t84 = (x417^(x418-(x419+x420)));

	if (t84 != -9223372036854775577LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x421 = INT32_MIN;
	int32_t x422 = -11946;
	volatile int64_t t85 = -636LL;

	t85 = (x421^(x422-(x423+x424)));

	if (t85 != -202376888LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x425 = INT16_MIN;
	uint16_t x426 = 5U;
	int64_t x427 = -1LL;

	t86 = (x425^(x426-(x427+x428)));

	if (t86 != -32761LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x429 = INT8_MIN;
	int16_t x430 = -1;
	int64_t x431 = -26976084LL;
	int64_t t87 = 1031236495033515758LL;

	t87 = (x429^(x430-(x431+x432)));

	if (t87 != -44696272598471LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x433 = -6543204835858546LL;
	static uint8_t x434 = UINT8_MAX;
	uint16_t x435 = UINT16_MAX;
	volatile int64_t t88 = 6225259842102242LL;

	t88 = (x433^(x434-(x435+x436)));

	if (t88 != 6543204835911439LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = -1;
	int16_t x438 = 599;
	static int16_t x439 = INT16_MIN;
	uint64_t x440 = 14LLU;
	volatile uint64_t t89 = 219840308LLU;

	t89 = (x437^(x438-(x439+x440)));

	if (t89 != 18446744073709518262LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x445 = INT64_MIN;
	volatile int64_t x446 = 1LL;
	int8_t x447 = INT8_MAX;
	static volatile int8_t x448 = INT8_MIN;
	int64_t t90 = -11701LL;

	t90 = (x445^(x446-(x447+x448)));

	if (t90 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x453 = 231;
	int8_t x454 = 16;
	int32_t x455 = INT32_MIN;
	static volatile int16_t x456 = INT16_MAX;
	volatile int32_t t91 = -4218732;

	t91 = (x453^(x454-(x455+x456)));

	if (t91 != 2147451126) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x457 = UINT64_MAX;
	static int8_t x458 = -1;
	volatile uint8_t x460 = UINT8_MAX;

	t92 = (x457^(x458-(x459+x460)));

	if (t92 != 392LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x461 = 7U;
	uint16_t x462 = 4898U;
	volatile int32_t x463 = 4481174;
	uint8_t x464 = 52U;
	static uint32_t t93 = 873U;

	t93 = (x461^(x462-(x463+x464)));

	if (t93 != 4290490975U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x466 = -51;
	int8_t x467 = INT8_MIN;
	static int32_t x468 = 45514291;
	volatile uint32_t t94 = 82022U;

	t94 = (x465^(x466-(x467+x468)));

	if (t94 != 45514213U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x473 = INT16_MIN;
	volatile int32_t x474 = INT32_MAX;
	volatile uint16_t x475 = UINT16_MAX;
	int8_t x476 = INT8_MAX;
	volatile int32_t t95 = 2810;

	t95 = (x473^(x474-(x475+x476)));

	if (t95 != -2147385471) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x477 = 1629997653948243020LLU;
	volatile int64_t x478 = INT64_MIN;
	volatile uint64_t t96 = 659416543003632LLU;

	t96 = (x477^(x478-(x479+x480)));

	if (t96 != 16816746419761257549LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x481 = INT32_MIN;
	volatile int32_t x482 = -1;
	int16_t x483 = INT16_MIN;
	uint64_t x484 = 21879192134LLU;
	static volatile uint64_t t97 = 88LLU;

	t97 = (x481^(x482-(x483+x484)));

	if (t97 != 23217997241LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x485 = INT32_MIN;
	int16_t x486 = 32;
	int32_t x488 = INT32_MIN;
	volatile int32_t t98 = 18865;

	t98 = (x485^(x486-(x487+x488)));

	if (t98 != -1570) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x489 = INT8_MAX;
	volatile int32_t x490 = 11;
	int64_t x491 = -1LL;
	int64_t x492 = -1LL;
	volatile int64_t t99 = 3443LL;

	t99 = (x489^(x490-(x491+x492)));

	if (t99 != 114LL) { NG(); } else { ; }
	
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

