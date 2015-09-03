#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
int64_t x8 = INT64_MIN;
uint64_t t1 = 31936639238LLU;
int16_t x13 = -199;
int32_t t5 = -604;
int32_t x29 = -250873;
int8_t x30 = INT8_MIN;
uint8_t x36 = UINT8_MAX;
static volatile int32_t x47 = INT32_MIN;
int64_t x48 = 30707232431722973LL;
volatile int16_t x61 = 0;
volatile uint32_t x62 = UINT32_MAX;
int8_t x63 = -52;
static volatile int64_t x65 = -6LL;
uint64_t x68 = 45301708503414LLU;
int32_t x78 = INT32_MIN;
uint64_t t15 = 3417LLU;
uint16_t x88 = 10U;
static int16_t x98 = 218;
uint32_t x100 = UINT32_MAX;
uint32_t t18 = 1U;
int8_t x115 = INT8_MIN;
int32_t x120 = -1;
uint8_t x123 = 26U;
static int64_t x147 = -1LL;
int32_t x151 = INT32_MIN;
uint64_t t26 = 78184063LLU;
uint16_t x153 = UINT16_MAX;
static volatile int8_t x156 = 0;
int16_t x163 = -1;
static volatile uint32_t x169 = 3346U;
int64_t x176 = -1LL;
uint32_t x187 = 939370714U;
uint16_t x188 = UINT16_MAX;
int64_t x193 = INT64_MIN;
static int64_t x200 = -1LL;
uint64_t x202 = UINT64_MAX;
int8_t x205 = -15;
volatile int64_t t39 = 71607LL;
int32_t x209 = -1;
volatile uint16_t x220 = 8330U;
int64_t x222 = -1LL;
volatile int64_t t42 = 6LL;
uint32_t x236 = UINT32_MAX;
int32_t x241 = INT32_MAX;
int16_t x242 = -1;
uint32_t x244 = UINT32_MAX;
static int64_t x247 = INT64_MIN;
uint32_t x263 = 412U;
static uint8_t x271 = UINT8_MAX;
static uint32_t x274 = 43179268U;
int64_t x276 = -3569LL;
static int8_t x277 = 1;
volatile int8_t x290 = INT8_MIN;
volatile uint16_t x291 = UINT16_MAX;
static uint64_t x292 = 13415LLU;
static int8_t x300 = INT8_MAX;
volatile int32_t x312 = INT32_MAX;
uint32_t x314 = 80U;
static volatile uint64_t t65 = 14537886228190LLU;
uint32_t x350 = 967U;
uint64_t x365 = 5LLU;
int8_t x387 = INT8_MIN;
int16_t x390 = INT16_MIN;
volatile uint8_t x391 = 1U;
static int16_t x403 = INT16_MIN;
static int64_t t74 = -16LL;
volatile int32_t x408 = INT32_MIN;
int32_t x412 = 4988;
static volatile int64_t x433 = -1LL;
int8_t x435 = INT8_MIN;
uint64_t t80 = 8538867743258LLU;
int16_t x446 = -3;
int32_t x447 = INT32_MAX;
static uint32_t x448 = UINT32_MAX;
int8_t x460 = INT8_MIN;
volatile int32_t x462 = -1;
static int8_t x467 = INT8_MIN;
volatile int32_t t85 = -189959;
volatile int16_t x473 = 58;
int32_t x482 = -444037;
static int8_t x484 = 2;
uint64_t x507 = UINT64_MAX;
int16_t x509 = 57;
uint16_t x512 = 293U;
static uint32_t x513 = 529463609U;
int32_t x518 = -1399751;
volatile int64_t x523 = -1LL;
uint8_t x525 = 2U;
int16_t x526 = INT16_MIN;
int8_t x537 = -1;
volatile int64_t t98 = -6029000LL;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	volatile int8_t x2 = INT8_MIN;
	static uint64_t x4 = 43183169867459LLU;
	uint64_t t0 = 2021159764220933639LLU;

	t0 = (x1*((x2^x3)-x4));

	if (t0 != 15616735036445626051LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int32_t x6 = -5;
	uint64_t x7 = UINT64_MAX;

	t1 = (x5*((x6^x7)-x8));

	if (t1 != 9223372045444710396LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = -3;
	volatile uint16_t x11 = UINT16_MAX;
	volatile int64_t x12 = 3LL;
	static volatile int64_t t2 = 22LL;

	t2 = (x9*((x10^x11)-x12));

	if (t2 != 2147516416LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = -1;
	int16_t x15 = -1;
	uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 1U;

	t3 = (x13*((x14^x15)-x16));

	if (t3 != 4294967097U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	static uint16_t x18 = 74U;
	static volatile int8_t x19 = INT8_MAX;
	static uint8_t x20 = 0U;
	volatile int32_t t4 = -13291430;

	t4 = (x17*((x18^x19)-x20));

	if (t4 != -1736704) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 3;
	static uint8_t x26 = 4U;
	static int8_t x27 = -1;
	volatile int8_t x28 = -12;

	t5 = (x25*((x26^x27)-x28));

	if (t5 != 21) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x31 = INT8_MIN;
	int32_t x32 = 446;
	int32_t t6 = 457;

	t6 = (x29*((x30^x31)-x32));

	if (t6 != 111889358) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	int32_t x34 = INT32_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	volatile int64_t t7 = 839244407692LL;

	t7 = (x33*((x34^x35)-x36));

	if (t7 != -2147483392LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x45 = 388638LLU;
	uint64_t x46 = UINT64_MAX;
	static uint64_t t8 = 8793868LLU;

	t8 = (x45*((x46^x47)-x48));

	if (t8 != 1046852483876717564LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = -1;
	static int8_t x54 = 0;
	uint64_t x55 = UINT64_MAX;
	uint16_t x56 = 3831U;
	uint64_t t9 = 67807237LLU;

	t9 = (x53*((x54^x55)-x56));

	if (t9 != 3832LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x58 = INT64_MIN;
	int8_t x59 = 1;
	int8_t x60 = INT8_MIN;
	volatile uint64_t t10 = 7450662LLU;

	t10 = (x57*((x58^x59)-x60));

	if (t10 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x64 = INT16_MAX;
	volatile uint32_t t11 = 35U;

	t11 = (x61*((x62^x63)-x64));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x66 = INT16_MAX;
	static uint8_t x67 = 30U;
	volatile uint64_t t12 = 203897475368753692LLU;

	t12 = (x65*((x66^x67)-x68));

	if (t12 != 271810250824062LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x73 = 14U;
	volatile int8_t x74 = 21;
	volatile int16_t x75 = 59;
	uint64_t x76 = 9822426502LLU;
	static volatile uint64_t t13 = 1LLU;

	t13 = (x73*((x74^x75)-x76));

	if (t13 != 18446743936195581232LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x77 = INT32_MIN;
	volatile int32_t x79 = 12;
	volatile uint64_t x80 = 60835852219630172LLU;
	volatile uint64_t t14 = 2040561171LLU;

	t14 = (x77*((x78^x79)-x80));

	if (t14 != 10418058662441385984LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = 2U;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = -1;
	uint64_t x84 = UINT64_MAX;

	t15 = (x81*((x82^x83)-x84));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = 185668;
	uint64_t x86 = UINT64_MAX;
	static int8_t x87 = 2;
	volatile uint64_t t16 = 6648452013891779LLU;

	t16 = (x85*((x86^x87)-x88));

	if (t16 != 18446744073707137932LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = 31652855LLU;
	uint16_t x90 = 64U;
	int8_t x91 = INT8_MAX;
	static int16_t x92 = -1;
	uint64_t t17 = 13813901257LLU;

	t17 = (x89*((x90^x91)-x92));

	if (t17 != 2025782720LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x97 = 824533U;
	int16_t x99 = -44;

	t18 = (x97*((x98^x99)-x100));

	if (t18 != 4096254843U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = 1578LLU;
	volatile uint8_t x106 = 0U;
	volatile int64_t x107 = INT64_MAX;
	int32_t x108 = 378;
	volatile uint64_t t19 = 20866558166266LLU;

	t19 = (x105*((x106^x107)-x108));

	if (t19 != 18446744073708953554LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x113 = 11U;
	static int16_t x114 = INT16_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t20 = 1;

	t20 = (x113*((x114^x115)-x116));

	if (t20 != 1397) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MAX;
	volatile uint8_t x119 = 85U;
	static volatile int32_t t21 = 3;

	t21 = (x117*((x118^x119)-x120));

	if (t21 != 1070923861) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x121 = INT16_MIN;
	volatile int16_t x122 = INT16_MAX;
	int16_t x124 = INT16_MAX;
	volatile int32_t t22 = 969;

	t22 = (x121*((x122^x123)-x124));

	if (t22 != 851968) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x129 = UINT64_MAX;
	int8_t x130 = -1;
	int8_t x131 = -2;
	int16_t x132 = -79;
	volatile uint64_t t23 = 420408LLU;

	t23 = (x129*((x130^x131)-x132));

	if (t23 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = 1;
	int32_t x142 = INT32_MAX;
	static int64_t x143 = 1052447663LL;
	uint32_t x144 = UINT32_MAX;
	volatile int64_t t24 = -273047090135LL;

	t24 = (x141*((x142^x143)-x144));

	if (t24 != -3199931311LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x145 = 2U;
	static uint8_t x146 = 75U;
	int16_t x148 = INT16_MAX;
	volatile int64_t t25 = -431LL;

	t25 = (x145*((x146^x147)-x148));

	if (t25 != -65686LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x149 = 16969938LLU;
	int16_t x150 = -1;
	uint64_t x152 = UINT64_MAX;

	t26 = (x149*((x150^x151)-x152));

	if (t26 != 36442664362573824LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x154 = -140406241318336LL;
	uint8_t x155 = UINT8_MAX;
	int64_t t27 = 24407159636LL;

	t27 = (x153*((x154^x155)-x156));

	if (t27 != -9201523024788826815LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x157 = UINT64_MAX;
	uint32_t x158 = 0U;
	uint64_t x159 = 12896470384LLU;
	volatile uint64_t x160 = UINT64_MAX;
	uint64_t t28 = 3466730008661389LLU;

	t28 = (x157*((x158^x159)-x160));

	if (t28 != 18446744060813081231LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x161 = 84125682740197LLU;
	uint8_t x162 = UINT8_MAX;
	volatile int32_t x164 = INT32_MIN;
	uint64_t t29 = 3353098394883332LLU;

	t29 = (x161*((x162^x163)-x164));

	if (t29 != 9541811396469332736LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x165 = 16340LLU;
	int64_t x166 = INT64_MIN;
	int16_t x167 = -1;
	uint8_t x168 = 2U;
	static uint64_t t30 = 138549368040216LLU;

	t30 = (x165*((x166^x167)-x168));

	if (t30 != 18446744073709502596LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x170 = INT64_MAX;
	int8_t x171 = INT8_MAX;
	uint64_t x172 = UINT64_MAX;
	uint64_t t31 = 2LLU;

	t31 = (x169*((x170^x171)-x172));

	if (t31 != 18446744073709126674LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = 1U;
	volatile uint16_t x174 = UINT16_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	int64_t t32 = 237LL;

	t32 = (x173*((x174^x175)-x176));

	if (t32 != 4294901761LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x177 = INT8_MIN;
	int64_t x178 = -54419LL;
	int8_t x179 = INT8_MIN;
	int32_t x180 = -235;
	int64_t t33 = -4LL;

	t33 = (x177*((x178^x179)-x180));

	if (t33 != -7007232LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x185 = 13820;
	int64_t x186 = 12LL;
	volatile int64_t t34 = -5965611026297469LL;

	t34 = (x185*((x186^x187)-x188));

	if (t34 != 12981197518500LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x189 = -1;
	int16_t x190 = -1;
	volatile int16_t x191 = -1;
	int64_t x192 = -96604078412491255LL;
	int64_t t35 = 221274LL;

	t35 = (x189*((x190^x191)-x192));

	if (t35 != -96604078412491255LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x194 = -15;
	int32_t x195 = INT32_MIN;
	volatile uint64_t x196 = 236545778918551360LLU;
	uint64_t t36 = 2392121612002348235LLU;

	t36 = (x193*((x194^x195)-x196));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x197 = 62846287U;
	int64_t x198 = 365025283724LL;
	uint64_t x199 = UINT64_MAX;
	static uint64_t t37 = 3803029089186LLU;

	t37 = (x197*((x198^x199)-x200));

	if (t37 != 13953004404244170444LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x201 = -32390493670407221LL;
	uint8_t x203 = 37U;
	uint16_t x204 = 6355U;
	volatile uint64_t t38 = 749684419LLU;

	t38 = (x201*((x202^x203)-x204));

	if (t38 != 4158241224108296077LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x206 = -1LL;
	int32_t x207 = INT32_MIN;
	volatile int32_t x208 = INT32_MIN;

	t39 = (x205*((x206^x207)-x208));

	if (t39 != -64424509425LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MIN;
	int64_t t40 = 52429543045LL;

	t40 = (x209*((x210^x211)-x212));

	if (t40 != 9223372036854710145LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = -1;
	static int64_t x218 = INT64_MAX;
	volatile uint32_t x219 = UINT32_MAX;
	int64_t t41 = -14438318355LL;

	t41 = (x217*((x218^x219)-x220));

	if (t41 != -9223372032559800182LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x221 = INT32_MIN;
	int32_t x223 = -1;
	int16_t x224 = 3824;

	t42 = (x221*((x222^x223)-x224));

	if (t42 != 8211977469952LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = -1;
	volatile int16_t x226 = 11851;
	uint16_t x227 = 19250U;
	volatile int64_t x228 = -778LL;
	int64_t t43 = -192554989380109LL;

	t43 = (x225*((x226^x227)-x228));

	if (t43 != -26755LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x229 = INT32_MAX;
	uint64_t x230 = UINT64_MAX;
	int16_t x231 = -1;
	volatile int64_t x232 = INT64_MAX;
	static uint64_t t44 = 375LLU;

	t44 = (x229*((x230^x231)-x232));

	if (t44 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = -1;
	uint8_t x235 = 1U;
	volatile uint32_t t45 = 495571U;

	t45 = (x233*((x234^x235)-x236));

	if (t45 != 32768U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x243 = -14;
	volatile uint32_t t46 = 71042660U;

	t46 = (x241*((x242^x243)-x244));

	if (t46 != 4294967282U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	static uint32_t x248 = 1197916U;
	volatile uint64_t t47 = 2068609671619676LLU;

	t47 = (x245*((x246^x247)-x248));

	if (t47 != 9223372036855973725LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x253 = -43;
	uint32_t x254 = 232603U;
	volatile int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MAX;
	volatile uint32_t t48 = 10350U;

	t48 = (x253*((x254^x255)-x256));

	if (t48 != 11414092U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = -131338019828LL;
	static volatile int8_t x258 = INT8_MIN;
	uint64_t x259 = 403810LLU;
	static volatile int64_t x260 = 2042254660LL;
	uint64_t t49 = 2307581049276674622LLU;

	t49 = (x257*((x258^x259)-x260));

	if (t49 != 10024292671773072232LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x261 = -2076LL;
	volatile int16_t x262 = 1;
	uint8_t x264 = 13U;
	int64_t t50 = -1LL;

	t50 = (x261*((x262^x263)-x264));

	if (t50 != -830400LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x269 = -50;
	int64_t x270 = -1LL;
	volatile uint8_t x272 = 10U;
	int64_t t51 = 11510778LL;

	t51 = (x269*((x270^x271)-x272));

	if (t51 != 13300LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x273 = 56041380355522050LLU;
	int8_t x275 = INT8_MIN;
	volatile uint64_t t52 = 54201809LLU;

	t52 = (x273*((x274^x275)-x276));

	if (t52 != 2196210930623624938LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x278 = 59219U;
	uint64_t x279 = 12LLU;
	uint32_t x280 = 671001166U;
	static volatile uint64_t t53 = 32600455528LLU;

	t53 = (x277*((x278^x279)-x280));

	if (t53 != 18446744073038609681LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x281 = -1LL;
	int64_t x282 = 4351LL;
	int64_t x283 = -331LL;
	static int8_t x284 = -1;
	static volatile int64_t t54 = -7238452126439502LL;

	t54 = (x281*((x282^x283)-x284));

	if (t54 != 4533LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x289 = UINT32_MAX;
	static volatile uint64_t t55 = 789414871LLU;

	t55 = (x289*((x290^x291)-x292));

	if (t55 != 18446405527207490536LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x293 = -1;
	volatile int32_t x294 = INT32_MAX;
	static uint16_t x295 = 92U;
	static uint8_t x296 = UINT8_MAX;
	int32_t t56 = 53;

	t56 = (x293*((x294^x295)-x296));

	if (t56 != -2147483300) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x297 = -1;
	int32_t x298 = 63713;
	volatile int16_t x299 = INT16_MIN;
	int32_t t57 = 8;

	t57 = (x297*((x298^x299)-x300));

	if (t57 != 34718) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x301 = 8874;
	int64_t x302 = -1LL;
	volatile int16_t x303 = 0;
	uint64_t x304 = 10640555LLU;
	volatile uint64_t t58 = 240LLU;

	t58 = (x301*((x302^x303)-x304));

	if (t58 != 18446743979285257672LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x305 = 11U;
	volatile int64_t x306 = INT64_MAX;
	static int32_t x307 = -4602931;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t59 = 68078586835221LLU;

	t59 = (x305*((x306^x307)-x308));

	if (t59 != 9223372036905408049LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x309 = -491251;
	int64_t x310 = -1LL;
	uint64_t x311 = UINT64_MAX;
	uint64_t t60 = 51131363022167LLU;

	t60 = (x309*((x310^x311)-x312));

	if (t60 != 1054953489072397LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x313 = INT16_MAX;
	static int8_t x315 = -3;
	uint8_t x316 = UINT8_MAX;
	volatile uint32_t t61 = 0U;

	t61 = (x313*((x314^x315)-x316));

	if (t61 != 4283892050U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x325 = -1LL;
	static int16_t x326 = INT16_MAX;
	volatile int32_t x327 = 462577;
	int16_t x328 = INT16_MIN;
	volatile int64_t t62 = -26564LL;

	t62 = (x325*((x326^x327)-x328));

	if (t62 != -520462LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x333 = 7808961LLU;
	volatile uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MIN;
	volatile uint64_t t63 = 17934635871890598LLU;

	t63 = (x333*((x334^x335)-x336));

	if (t63 != 1991285055LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x337 = 0U;
	static uint64_t x338 = 177696079028LLU;
	int16_t x339 = -1;
	int16_t x340 = 4;
	volatile uint64_t t64 = 3LLU;

	t64 = (x337*((x338^x339)-x340));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x341 = INT8_MIN;
	volatile int8_t x342 = INT8_MAX;
	uint64_t x343 = 235070575529LLU;
	int64_t x344 = -1LL;

	t65 = (x341*((x342^x343)-x344));

	if (t65 != 18446713984675878016LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x349 = INT8_MIN;
	int8_t x351 = 0;
	uint16_t x352 = 23U;
	static uint32_t t66 = 0U;

	t66 = (x349*((x350^x351)-x352));

	if (t66 != 4294846464U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x357 = INT32_MAX;
	uint64_t x358 = UINT64_MAX;
	int64_t x359 = INT64_MIN;
	volatile uint16_t x360 = UINT16_MAX;
	volatile uint64_t t67 = 1617933LLU;

	t67 = (x357*((x358^x359)-x360));

	if (t67 != 9223231299366486016LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x361 = 36813LLU;
	static int32_t x362 = 1;
	static uint8_t x363 = UINT8_MAX;
	uint64_t x364 = 125LLU;
	volatile uint64_t t68 = 1488455139463LLU;

	t68 = (x361*((x362^x363)-x364));

	if (t68 != 4748877LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x366 = INT64_MAX;
	static uint64_t x367 = 84235226418LLU;
	int16_t x368 = INT16_MAX;
	uint64_t t69 = 27226328LLU;

	t69 = (x365*((x366^x367)-x368));

	if (t69 != 9223371615678479878LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x377 = 4;
	int16_t x378 = 0;
	static int16_t x379 = INT16_MAX;
	int8_t x380 = 1;
	volatile int32_t t70 = 8287474;

	t70 = (x377*((x378^x379)-x380));

	if (t70 != 131064) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x381 = 7U;
	int32_t x382 = INT32_MAX;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 466U;
	volatile uint32_t t71 = 656U;

	t71 = (x381*((x382^x383)-x384));

	if (t71 != 2147709755U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x385 = UINT32_MAX;
	static int32_t x386 = 1;
	volatile uint8_t x388 = 0U;
	static volatile uint32_t t72 = 964U;

	t72 = (x385*((x386^x387)-x388));

	if (t72 != 127U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x389 = 0;
	int32_t x392 = INT32_MIN;
	volatile int32_t t73 = 272213945;

	t73 = (x389*((x390^x391)-x392));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x401 = 456524LL;
	static int32_t x402 = -1;
	volatile int16_t x404 = INT16_MAX;

	t74 = (x401*((x402^x403)-x404));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x405 = -11;
	uint32_t x406 = UINT32_MAX;
	static volatile uint8_t x407 = 57U;
	uint32_t t75 = 0U;

	t75 = (x405*((x406^x407)-x408));

	if (t75 != 2147484286U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x409 = UINT32_MAX;
	int8_t x410 = -1;
	volatile int16_t x411 = -7;
	volatile uint32_t t76 = 244U;

	t76 = (x409*((x410^x411)-x412));

	if (t76 != 4982U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x425 = 6;
	int16_t x426 = INT16_MIN;
	int8_t x427 = -1;
	static int8_t x428 = 5;
	int32_t t77 = 57;

	t77 = (x425*((x426^x427)-x428));

	if (t77 != 196572) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x429 = -1LL;
	uint8_t x430 = 0U;
	uint32_t x431 = 430988U;
	static int64_t x432 = INT64_MAX;
	int64_t t78 = -2373111484995628761LL;

	t78 = (x429*((x430^x431)-x432));

	if (t78 != 9223372036854344819LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x434 = 2;
	static int32_t x436 = INT32_MIN;
	int64_t t79 = -4307564579865969669LL;

	t79 = (x433*((x434^x435)-x436));

	if (t79 != -2147483522LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x437 = -187;
	int32_t x438 = INT32_MIN;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = -3;

	t80 = (x437*((x438^x439)-x440));

	if (t80 != 18446743672130109066LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = -1LL;
	volatile int64_t t81 = -2485601451055195656LL;

	t81 = (x445*((x446^x447)-x448));

	if (t81 != -2147483651LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x457 = INT32_MAX;
	int16_t x458 = -3;
	static uint32_t x459 = 351012957U;
	uint32_t t82 = 19618151U;

	t82 = (x457*((x458^x459)-x460));

	if (t82 != 351012832U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x461 = 1LLU;
	int64_t x463 = -1LL;
	uint64_t x464 = UINT64_MAX;
	uint64_t t83 = 511644LLU;

	t83 = (x461*((x462^x463)-x464));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x465 = 13864;
	int64_t x466 = -67349809467LL;
	uint8_t x468 = 1U;
	int64_t t84 = -3164883841LL;

	t84 = (x465*((x466^x467)-x468));

	if (t84 != 933737758575264LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x469 = 32339U;
	static int16_t x470 = INT16_MIN;
	int8_t x471 = INT8_MIN;
	volatile uint16_t x472 = UINT16_MAX;

	t85 = (x469*((x470^x471)-x472));

	if (t85 != -1063791405) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x474 = -1;
	int16_t x475 = -1;
	int8_t x476 = 0;
	int32_t t86 = 1297871;

	t86 = (x473*((x474^x475)-x476));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x481 = 32794063817106LLU;
	int32_t x483 = -1;
	uint64_t t87 = 91LLU;

	t87 = (x481*((x482^x483)-x484));

	if (t87 != 14561679332964845604LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x485 = UINT16_MAX;
	static int8_t x486 = INT8_MIN;
	uint32_t x487 = 951766182U;
	int64_t x488 = -1LL;
	int64_t t88 = -165LL;

	t88 = (x485*((x486^x487)-x488));

	if (t88 != 219096681663705LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x489 = 0U;
	int8_t x490 = 1;
	int64_t x491 = -1LL;
	uint64_t x492 = 104LLU;
	volatile uint64_t t89 = 106782894171927369LLU;

	t89 = (x489*((x490^x491)-x492));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x493 = 8898542441984045775LLU;
	int32_t x494 = 0;
	uint64_t x495 = 22439437762LLU;
	int8_t x496 = INT8_MAX;
	uint64_t t90 = 508103785LLU;

	t90 = (x493*((x494^x495)-x496));

	if (t90 != 10462433958724679469LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x501 = 8U;
	volatile uint16_t x502 = 1U;
	int32_t x503 = -20635;
	volatile uint8_t x504 = 12U;
	static uint32_t t91 = 7U;

	t91 = (x501*((x502^x503)-x504));

	if (t91 != 4294802112U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x505 = 20;
	static int32_t x506 = INT32_MAX;
	uint64_t x508 = 34016818776358LLU;
	uint64_t t92 = 12491511567421113LLU;

	t92 = (x505*((x506^x507)-x508));

	if (t92 != 18446063694384351496LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x510 = UINT32_MAX;
	static int64_t x511 = -1LL;
	int64_t t93 = -17010675LL;

	t93 = (x509*((x510^x511)-x512));

	if (t93 != -244813152573LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x514 = INT32_MIN;
	uint64_t x515 = 9875LLU;
	int64_t x516 = -1LL;
	uint64_t t94 = 844778048468926LLU;

	t94 = (x513*((x514^x515)-x516));

	if (t94 != 17309734860153588468LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x517 = 103LLU;
	int32_t x519 = INT32_MIN;
	volatile uint32_t x520 = 101599U;
	volatile uint64_t t95 = 55779069273976LLU;

	t95 = (x517*((x518^x519)-x520));

	if (t95 != 221036176694LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x521 = INT64_MIN;
	uint16_t x522 = 7541U;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t96 = 18743873035LLU;

	t96 = (x521*((x522^x523)-x524));

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x527 = -97898759433LL;
	uint8_t x528 = 3U;
	int64_t t97 = -3654847639642LL;

	t97 = (x525*((x526^x527)-x528));

	if (t97 != 195797579240LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x538 = -1LL;
	static int8_t x539 = -45;
	int64_t x540 = INT64_MAX;

	t98 = (x537*((x538^x539)-x540));

	if (t98 != 9223372036854775763LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x541 = 5;
	int64_t x542 = INT64_MIN;
	volatile uint16_t x543 = 1U;
	int64_t x544 = INT64_MIN;
	int64_t t99 = -75274636063211941LL;

	t99 = (x541*((x542^x543)-x544));

	if (t99 != 5LL) { NG(); } else { ; }
	
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

