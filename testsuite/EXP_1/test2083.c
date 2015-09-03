#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x5 = 7U;
int64_t x6 = INT64_MIN;
static volatile int8_t x9 = -3;
int8_t x10 = -1;
volatile uint64_t t2 = 47806168278LLU;
volatile int8_t x15 = INT8_MIN;
uint16_t x19 = 88U;
volatile uint32_t x29 = 193U;
int32_t x37 = -4520545;
int32_t t9 = 218785703;
volatile int64_t t10 = -2LL;
uint64_t t13 = 38056302LLU;
int16_t x65 = INT16_MIN;
static uint32_t x66 = 444U;
uint64_t t17 = 32977642LLU;
volatile uint64_t t18 = 23325039403LLU;
static uint64_t x80 = 1969566037487740LLU;
int8_t x85 = 0;
int8_t x87 = -1;
int8_t x89 = INT8_MIN;
int64_t t21 = 3LL;
int8_t x100 = -1;
volatile int64_t t22 = -19798338436395LL;
int64_t x103 = -7328210047626379LL;
uint32_t x104 = 578029U;
uint8_t x114 = 0U;
volatile uint64_t t26 = 74LLU;
int32_t x118 = -1;
static volatile uint64_t t27 = 16LLU;
static int32_t x124 = 4;
uint64_t x127 = UINT64_MAX;
int16_t x128 = -1;
int16_t x130 = INT16_MIN;
uint32_t x131 = UINT32_MAX;
int16_t x135 = INT16_MAX;
int64_t x136 = -1LL;
uint64_t t32 = 1966764217623368948LLU;
int16_t x142 = INT16_MAX;
int16_t x145 = INT16_MIN;
uint64_t x147 = 2004171511LLU;
static int16_t x156 = 113;
volatile int32_t t37 = -7058268;
int8_t x169 = -3;
int16_t x171 = INT16_MAX;
int64_t x174 = -1LL;
int16_t x177 = INT16_MAX;
volatile uint64_t t41 = 17133373350926825LLU;
int64_t t42 = INT64_MAX;
int16_t x190 = -1;
volatile uint64_t x198 = UINT64_MAX;
static uint64_t t44 = 548411LLU;
volatile int16_t x207 = INT16_MIN;
static uint32_t t46 = 8U;
int16_t x213 = INT16_MAX;
static int32_t x215 = INT32_MIN;
volatile uint64_t t47 = 60LLU;
volatile uint64_t t48 = 8685165731334115LLU;
static int16_t x224 = 68;
static int64_t x225 = 123555135LL;
volatile int16_t x226 = INT16_MAX;
uint16_t x228 = 1U;
volatile int64_t t50 = 1028027631111LL;
int8_t x235 = 13;
volatile uint64_t x240 = 41188860LLU;
int32_t x262 = INT32_MIN;
volatile int8_t x263 = INT8_MAX;
int8_t x276 = 0;
uint32_t x279 = 1U;
static int64_t x280 = INT64_MIN;
int32_t t62 = 45864356;
int32_t x288 = INT32_MAX;
int32_t x291 = INT32_MIN;
uint64_t x292 = 19LLU;
volatile uint8_t x294 = 2U;
volatile int16_t x299 = 2037;
volatile uint8_t x300 = UINT8_MAX;
static int8_t x304 = INT8_MIN;
int16_t x309 = -1;
volatile int8_t x311 = 27;
int64_t x313 = INT64_MIN;
volatile int8_t x319 = INT8_MIN;
int16_t x330 = INT16_MIN;
int16_t x331 = -6;
static int64_t t74 = -399040250LL;
int64_t x340 = -1LL;
int32_t x342 = -703129594;
static int16_t x343 = INT16_MAX;
int8_t x346 = INT8_MAX;
int16_t x347 = INT16_MAX;
int32_t x351 = -1;
volatile int64_t x352 = -1LL;
int32_t x361 = -1682;
uint64_t x364 = 19349218834612746LLU;
int16_t x371 = INT16_MIN;
int8_t x373 = INT8_MAX;
int64_t t84 = 43LL;
static int64_t t85 = -224LL;
static int16_t x387 = 17;
uint32_t x388 = 222529612U;
int16_t x389 = -1;
static uint8_t x390 = 26U;
volatile int8_t x395 = -1;
static volatile uint64_t t90 = 558082314829LLU;
static volatile uint8_t x402 = 11U;
volatile int64_t x403 = INT64_MAX;
volatile int16_t x407 = INT16_MAX;
int32_t x413 = INT32_MIN;
volatile int64_t t94 = -60789287413LL;
static int16_t x419 = -1;
volatile int32_t t95 = 5881078;
static int32_t x424 = INT32_MIN;
uint16_t x427 = 4401U;
volatile int64_t x428 = 7088590825876LL;
int8_t x430 = INT8_MIN;
static int32_t x432 = 90;
uint32_t x434 = UINT32_MAX;
uint64_t x435 = 72900894LLU;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	volatile uint8_t x2 = 6U;
	static uint64_t x3 = 1027618099LLU;
	static uint16_t x4 = 653U;
	volatile uint64_t t0 = 80860LLU;

	t0 = (((x1^x2)%x3)*x4);

	if (t0 != 137761375905LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = INT16_MAX;
	int8_t x8 = INT8_MIN;
	volatile int64_t t1 = 199LL;

	t1 = (((x5^x6)%x7)*x8);

	if (t1 != 128LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = INT16_MIN;
	uint64_t x12 = UINT64_MAX;

	t2 = (((x9^x10)%x11)*x12);

	if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	uint32_t x14 = UINT32_MAX;
	static volatile uint32_t x16 = 24U;
	uint32_t t3 = 5304380U;

	t3 = (((x13^x14)%x15)*x16);

	if (t3 != 3048U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 0;
	int8_t x18 = INT8_MAX;
	uint8_t x20 = 1U;
	volatile int32_t t4 = -59351643;

	t4 = (((x17^x18)%x19)*x20);

	if (t4 != 39) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	volatile uint64_t x22 = 7572LLU;
	int8_t x23 = 1;
	volatile int32_t x24 = INT32_MIN;
	volatile uint64_t t5 = 6205757LLU;

	t5 = (((x21^x22)%x23)*x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MIN;
	int16_t x27 = 1;
	int64_t x28 = INT64_MAX;
	int64_t t6 = 113839012LL;

	t6 = (((x25^x26)%x27)*x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = UINT32_MAX;
	int16_t x31 = -1;
	int16_t x32 = -1;
	uint32_t t7 = 2488806U;

	t7 = (((x29^x30)%x31)*x32);

	if (t7 != 194U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 7U;
	int64_t x34 = -1LL;
	uint64_t x35 = 54LLU;
	volatile uint64_t x36 = 183547347LLU;
	uint64_t t8 = 26109051421870LLU;

	t8 = (((x33^x34)%x35)*x36);

	if (t8 != 8076083268LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 178U;
	static uint16_t x39 = 100U;
	int16_t x40 = -664;

	t9 = (((x37^x38)%x39)*x40);

	if (t9 != 39176) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 14101912;
	volatile uint8_t x42 = 3U;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MAX;

	t10 = (((x41^x42)%x43)*x44);

	if (t10 != 30283631853884005LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	static int8_t x46 = -1;
	int16_t x47 = 6712;
	static int64_t x48 = -1LL;
	int64_t t11 = -4LL;

	t11 = (((x45^x46)%x47)*x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 4U;
	int8_t x50 = -2;
	volatile int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -152;

	t12 = (((x49^x50)%x51)*x52);

	if (t12 != -762) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = -1;
	int8_t x54 = INT8_MIN;
	static int64_t x55 = INT64_MAX;
	volatile uint64_t x56 = UINT64_MAX;

	t13 = (((x53^x54)%x55)*x56);

	if (t13 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int64_t x58 = 672456680614628LL;
	volatile int32_t x59 = INT32_MAX;
	uint64_t x60 = 4930687LLU;
	uint64_t t14 = 186709464780090087LLU;

	t14 = (((x57^x58)%x59)*x60);

	if (t14 != 18436615131379165645LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 30774966094LLU;
	uint32_t x62 = 817308U;
	uint8_t x63 = 55U;
	int32_t x64 = INT32_MAX;
	uint64_t t15 = 76173663584282LLU;

	t15 = (((x61^x62)%x63)*x64);

	if (t15 != 51539607528LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x67 = INT8_MIN;
	volatile uint16_t x68 = 5U;
	static uint32_t t16 = 899090617U;

	t16 = (((x65^x66)%x67)*x68);

	if (t16 != 4294805676U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = 2;
	uint64_t x70 = 5LLU;
	volatile int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MAX;

	t17 = (((x69^x70)%x71)*x72);

	if (t17 != 229369LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = UINT64_MAX;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = -1LL;
	static int32_t x76 = -1;

	t18 = (((x73^x74)%x75)*x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 0;
	int32_t x78 = -309609;
	uint64_t x79 = 4082139617LLU;
	static volatile uint64_t t19 = 161179837LLU;

	t19 = (((x77^x78)%x79)*x80);

	if (t19 != 6208247974483673696LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x86 = 59U;
	int8_t x88 = INT8_MIN;
	int32_t t20 = -3;

	t20 = (((x85^x86)%x87)*x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x90 = UINT32_MAX;
	volatile int64_t x91 = INT64_MIN;
	uint32_t x92 = 514U;

	t21 = (((x89^x90)%x91)*x92);

	if (t21 != 65278LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	volatile uint16_t x99 = 3U;

	t22 = (((x97^x98)%x99)*x100);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 107U;
	int64_t x102 = -1LL;
	volatile int64_t t23 = 0LL;

	t23 = (((x101^x102)%x103)*x104);

	if (t23 != -62427132LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = -1671;
	volatile int64_t x106 = INT64_MIN;
	static int8_t x107 = 1;
	uint64_t x108 = 36917321656408LLU;
	uint64_t t24 = 17867195162551237LLU;

	t24 = (((x105^x106)%x107)*x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = -109LL;
	uint16_t x110 = UINT16_MAX;
	uint32_t x111 = UINT32_MAX;
	uint64_t x112 = 125LLU;
	static uint64_t t25 = 4833767LLU;

	t25 = (((x109^x110)%x111)*x112);

	if (t25 != 18446744073701373116LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x113 = 1012;
	uint32_t x115 = 33821U;
	uint64_t x116 = 877861497LLU;

	t26 = (((x113^x114)%x115)*x116);

	if (t26 != 888395834964LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 1826;
	uint64_t x119 = 19756954750598LLU;
	volatile int64_t x120 = INT64_MAX;

	t27 = (((x117^x118)%x119)*x120);

	if (t27 != 9223360745547818453LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MAX;
	int32_t x122 = 4;
	int32_t x123 = -372665348;
	volatile int64_t t28 = 1656256958LL;

	t28 = (((x121^x122)%x123)*x124);

	if (t28 != 640531244LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = -1;
	uint32_t x126 = 50246U;
	volatile uint64_t t29 = 0LLU;

	t29 = (((x125^x126)%x127)*x128);

	if (t29 != 18446744069414634567LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = -79174120486LL;
	int8_t x132 = INT8_MAX;
	volatile int64_t t30 = 5905291560LL;

	t30 = (((x129^x130)%x131)*x132);

	if (t30 != 236818835988LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	uint64_t x134 = 52500987272LLU;
	uint64_t t31 = 1500418980LLU;

	t31 = (((x133^x134)%x135)*x136);

	if (t31 != 18446744073709547700LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -1;
	int32_t x138 = -1;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = 0;

	t32 = (((x137^x138)%x139)*x140);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 176U;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = 53949005857LLU;
	volatile uint64_t t33 = 316200104614753LLU;

	t33 = (((x141^x142)%x143)*x144);

	if (t33 != 1758252049885487LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x146 = INT16_MAX;
	volatile uint32_t x148 = 322986U;
	static uint64_t t34 = 393619181432366LLU;

	t34 = (((x145^x146)%x147)*x148);

	if (t34 != 336433504668756LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x149 = 42462U;
	volatile int16_t x150 = INT16_MIN;
	uint32_t x151 = 1302U;
	static uint8_t x152 = UINT8_MAX;
	uint32_t t35 = 17891148U;

	t35 = (((x149^x150)%x151)*x152);

	if (t35 != 37740U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	static int8_t x154 = -1;
	int64_t x155 = 122310869392966LL;
	volatile int64_t t36 = 46906985795190LL;

	t36 = (((x153^x154)%x155)*x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x157 = -1235046;
	static volatile int32_t x158 = -223;
	int8_t x159 = -1;
	int16_t x160 = -13;

	t37 = (((x157^x158)%x159)*x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = INT32_MIN;
	int16_t x172 = -1;
	int32_t t38 = -1703;

	t38 = (((x169^x170)%x171)*x172);

	if (t38 != -32766) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x173 = INT16_MIN;
	int16_t x175 = -1;
	int8_t x176 = -1;
	static volatile int64_t t39 = 2LL;

	t39 = (((x173^x174)%x175)*x176);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x178 = INT64_MAX;
	uint8_t x179 = 1U;
	static int16_t x180 = 3127;
	volatile int64_t t40 = 0LL;

	t40 = (((x177^x178)%x179)*x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MIN;
	static int16_t x182 = INT16_MIN;
	static int64_t x183 = -52300223405278913LL;
	uint64_t x184 = 474395LLU;

	t41 = (((x181^x182)%x183)*x184);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x185 = 1;
	volatile uint16_t x186 = 0U;
	int64_t x187 = INT64_MAX;
	volatile int64_t x188 = INT64_MAX;

	t42 = (((x185^x186)%x187)*x188);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x189 = -27;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = -1;
	volatile int32_t t43 = 2566;

	t43 = (((x189^x190)%x191)*x192);

	if (t43 != -26) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x197 = UINT8_MAX;
	int64_t x199 = INT64_MIN;
	int64_t x200 = -1096235833901LL;

	t44 = (((x197^x198)%x199)*x200);

	if (t44 != 9223652673228254464LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = -43;
	int64_t x202 = INT64_MAX;
	volatile int8_t x203 = -3;
	static volatile int64_t x204 = 29912740092LL;
	int64_t t45 = -6476891727347091LL;

	t45 = (((x201^x202)%x203)*x204);

	if (t45 != -59825480184LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x205 = 16402201U;
	int32_t x206 = INT32_MIN;
	volatile int32_t x208 = INT32_MIN;

	t46 = (((x205^x206)%x207)*x208);

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x214 = INT64_MAX;
	uint64_t x216 = 367169568LLU;

	t47 = (((x213^x214)%x215)*x216);

	if (t47 != 788478611910819840LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = UINT32_MAX;
	int8_t x218 = -1;
	uint64_t x219 = 16751298LLU;
	volatile uint32_t x220 = UINT32_MAX;

	t48 = (((x217^x218)%x219)*x220);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x221 = 402006293LLU;
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = INT64_MIN;
	volatile uint64_t t49 = 422443351LLU;

	t49 = (((x221^x222)%x223)*x224);

	if (t49 != 264721348136LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x227 = INT64_MIN;

	t50 = (((x225^x226)%x227)*x228);

	if (t50 != 123548352LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x229 = -1;
	uint64_t x230 = 6716LLU;
	int16_t x231 = INT16_MAX;
	int16_t x232 = -1;
	volatile uint64_t t51 = 24LLU;

	t51 = (((x229^x230)%x231)*x232);

	if (t51 != 18446744073709525550LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MIN;
	int8_t x234 = -1;
	int32_t x236 = -213;
	int64_t t52 = -412747598577053LL;

	t52 = (((x233^x234)%x235)*x236);

	if (t52 != -1491LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -1;
	int64_t x238 = INT64_MAX;
	static int64_t x239 = 75856476275LL;
	volatile uint64_t t53 = 79340302886LLU;

	t53 = (((x237^x238)%x239)*x240);

	if (t53 != 18340817235359333236LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = 111130LLU;
	int16_t x246 = INT16_MAX;
	static uint16_t x247 = UINT16_MAX;
	uint64_t x248 = 1103LLU;
	volatile uint64_t t54 = 458390LLU;

	t54 = (((x245^x246)%x247)*x248);

	if (t54 != 58139130LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x249 = UINT64_MAX;
	int64_t x250 = 2239258916850626528LL;
	static volatile uint16_t x251 = UINT16_MAX;
	uint8_t x252 = 1U;
	uint64_t t55 = 30391922362417594LLU;

	t55 = (((x249^x250)%x251)*x252);

	if (t55 != 37867LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x253 = -1;
	uint16_t x254 = 6U;
	int16_t x255 = -1;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t56 = -108936;

	t56 = (((x253^x254)%x255)*x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = INT32_MAX;
	int16_t x264 = -31;
	int32_t t57 = 6736022;

	t57 = (((x261^x262)%x263)*x264);

	if (t57 != 31) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = INT8_MAX;
	volatile int64_t x266 = 518352507886LL;
	int32_t x267 = -1;
	int32_t x268 = -5;
	static int64_t t58 = -146299046816567370LL;

	t58 = (((x265^x266)%x267)*x268);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = -983LL;
	uint8_t x270 = 0U;
	uint8_t x271 = 57U;
	volatile uint16_t x272 = UINT16_MAX;
	volatile int64_t t59 = 2487400772601897LL;

	t59 = (((x269^x270)%x271)*x272);

	if (t59 != -917490LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = -12727;
	int64_t x274 = INT64_MAX;
	uint32_t x275 = 16548321U;
	volatile int64_t t60 = 3413758586614271344LL;

	t60 = (((x273^x274)%x275)*x276);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x277 = INT16_MAX;
	int16_t x278 = -1;
	volatile int64_t t61 = -230825339739367LL;

	t61 = (((x277^x278)%x279)*x280);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = 7;
	uint8_t x282 = UINT8_MAX;
	uint16_t x283 = 71U;
	static int8_t x284 = 6;

	t62 = (((x281^x282)%x283)*x284);

	if (t62 != 210) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x285 = 232U;
	uint32_t x286 = 1083404U;
	static uint16_t x287 = 1U;
	uint32_t t63 = 106U;

	t63 = (((x285^x286)%x287)*x288);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MAX;
	static int8_t x290 = 3;
	static volatile uint64_t t64 = 85LLU;

	t64 = (((x289^x290)%x291)*x292);

	if (t64 != 2356LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = 162730385425626LLU;
	static uint64_t x295 = 227228808243369LLU;
	int8_t x296 = 5;
	uint64_t t65 = 130336431910LLU;

	t65 = (((x293^x294)%x295)*x296);

	if (t65 != 813651927128120LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	int32_t t66 = -526473;

	t66 = (((x297^x298)%x299)*x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x301 = 279053254;
	static uint8_t x302 = 63U;
	uint8_t x303 = UINT8_MAX;
	volatile int32_t t67 = 48364;

	t67 = (((x301^x302)%x303)*x304);

	if (t67 != -22400) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x310 = INT16_MIN;
	int8_t x312 = -1;
	int32_t t68 = -114860;

	t68 = (((x309^x310)%x311)*x312);

	if (t68 != -16) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x314 = INT8_MIN;
	uint8_t x315 = 57U;
	int8_t x316 = -1;
	volatile int64_t t69 = -420577983187131361LL;

	t69 = (((x313^x314)%x315)*x316);

	if (t69 != -42LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x317 = -1;
	int16_t x318 = INT16_MAX;
	volatile uint32_t x320 = 25788U;
	uint32_t t70 = 124U;

	t70 = (((x317^x318)%x319)*x320);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = INT8_MAX;
	static volatile uint32_t t71 = 7U;

	t71 = (((x321^x322)%x323)*x324);

	if (t71 != 2147483521U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x325 = 1584451978LL;
	static uint16_t x326 = 30U;
	static uint16_t x327 = UINT16_MAX;
	static int32_t x328 = INT32_MIN;
	static int64_t t72 = -97784438187974471LL;

	t72 = (((x325^x326)%x327)*x328);

	if (t72 != -26399016484864LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x329 = -1;
	volatile int8_t x332 = -29;
	int32_t t73 = -2199;

	t73 = (((x329^x330)%x331)*x332);

	if (t73 != -29) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = -1;
	int8_t x334 = -1;
	static int16_t x335 = INT16_MAX;
	int64_t x336 = INT64_MIN;

	t74 = (((x333^x334)%x335)*x336);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x337 = 722U;
	uint16_t x338 = 1634U;
	volatile int16_t x339 = INT16_MIN;
	int64_t t75 = 36LL;

	t75 = (((x337^x338)%x339)*x340);

	if (t75 != -1200LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = INT32_MIN;
	int32_t x344 = -964;
	volatile int32_t t76 = 3;

	t76 = (((x341^x342)%x343)*x344);

	if (t76 != -16832404) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = -568308486;
	static int16_t x348 = INT16_MIN;
	int32_t t77 = -54;

	t77 = (((x345^x346)%x347)*x348);

	if (t77 != 1000144896) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int64_t x350 = INT64_MAX;
	static volatile int64_t t78 = -1LL;

	t78 = (((x349^x350)%x351)*x352);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x353 = INT8_MAX;
	static int16_t x354 = -3;
	int32_t x355 = -4;
	int8_t x356 = INT8_MIN;
	volatile int32_t t79 = -37088;

	t79 = (((x353^x354)%x355)*x356);

	if (t79 != 256) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = UINT64_MAX;
	int64_t x358 = -25142LL;
	int64_t x359 = 886551LL;
	static int16_t x360 = -8;
	uint64_t t80 = 3988520LLU;

	t80 = (((x357^x358)%x359)*x360);

	if (t80 != 18446744073709350488LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x362 = 2U;
	uint64_t x363 = 30262414757LLU;
	static uint64_t t81 = 6080030162LLU;

	t81 = (((x361^x362)%x363)*x364);

	if (t81 != 14637797417715504866LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x365 = 2129993178LLU;
	static int32_t x366 = INT32_MIN;
	uint32_t x367 = 1598820888U;
	int64_t x368 = INT64_MAX;
	uint64_t t82 = 66LLU;

	t82 = (((x365^x366)%x367)*x368);

	if (t82 != 18446744073014196062LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = 81;
	int16_t x372 = INT16_MAX;
	static int32_t t83 = -51;

	t83 = (((x369^x370)%x371)*x372);

	if (t83 != -1071054929) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x374 = INT64_MIN;
	uint16_t x375 = 5U;
	int32_t x376 = INT32_MIN;

	t84 = (((x373^x374)%x375)*x376);

	if (t84 != 2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x377 = 74U;
	int16_t x378 = -1;
	static int8_t x379 = INT8_MIN;
	int64_t x380 = 5513LL;

	t85 = (((x377^x378)%x379)*x380);

	if (t85 != -413475LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = 55;
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = -1;
	int16_t x384 = -1488;
	uint64_t t86 = 4197884160845109051LLU;

	t86 = (((x381^x382)%x383)*x384);

	if (t86 != 83328LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x385 = UINT8_MAX;
	int16_t x386 = -1;
	uint32_t t87 = 1667417206U;

	t87 = (((x385^x386)%x387)*x388);

	if (t87 != 4072437684U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x391 = 4678U;
	volatile uint8_t x392 = UINT8_MAX;
	static int32_t t88 = 10320;

	t88 = (((x389^x390)%x391)*x392);

	if (t88 != -6885) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x393 = INT16_MAX;
	volatile int16_t x394 = -1;
	volatile int32_t x396 = -1;
	volatile int32_t t89 = -85;

	t89 = (((x393^x394)%x395)*x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x397 = INT16_MIN;
	static volatile uint64_t x398 = 3084388LLU;
	int8_t x399 = INT8_MAX;
	uint16_t x400 = UINT16_MAX;

	t90 = (((x397^x398)%x399)*x400);

	if (t90 != 4652985LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = INT64_MIN;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t91 = 106352647377LLU;

	t91 = (((x401^x402)%x403)*x404);

	if (t91 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = -1;
	uint32_t x406 = 63U;
	volatile int8_t x408 = -4;
	uint32_t t92 = 13826404U;

	t92 = (((x405^x406)%x407)*x408);

	if (t92 != 4294836468U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MIN;
	volatile int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MIN;
	uint64_t x412 = 21790LLU;
	uint64_t t93 = 1788LLU;

	t93 = (((x409^x410)%x411)*x412);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x414 = -1;
	int64_t x415 = INT64_MIN;
	int8_t x416 = 1;

	t94 = (((x413^x414)%x415)*x416);

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = -1;
	int16_t x418 = 5;
	int8_t x420 = INT8_MAX;

	t95 = (((x417^x418)%x419)*x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x421 = -1;
	int16_t x422 = INT16_MIN;
	volatile int64_t x423 = INT64_MIN;
	int64_t t96 = -161LL;

	t96 = (((x421^x422)%x423)*x424);

	if (t96 != -70366596694016LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x425 = 4U;
	volatile int16_t x426 = -76;
	volatile int64_t t97 = 1LL;

	t97 = (((x425^x426)%x427)*x428);

	if (t97 != -567087266070080LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x429 = UINT16_MAX;
	volatile uint64_t x431 = UINT64_MAX;
	uint64_t t98 = 2LLU;

	t98 = (((x429^x430)%x431)*x432);

	if (t98 != 18446744073703664806LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x433 = 775U;
	int16_t x436 = -5617;
	static uint64_t t99 = 712LLU;

	t99 = (((x433^x434)%x435)*x436);

	if (t99 != 18446743698973261460LLU) { NG(); } else { ; }
	
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

