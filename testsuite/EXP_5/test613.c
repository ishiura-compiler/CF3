#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = -3;
volatile int32_t t1 = 220901;
volatile uint8_t x9 = 6U;
static uint8_t x10 = 3U;
static volatile int16_t x12 = -1;
volatile int32_t t2 = -59;
int16_t x14 = -973;
int32_t x16 = INT32_MIN;
int8_t x17 = INT8_MAX;
static uint32_t x19 = UINT32_MAX;
volatile int32_t t4 = -3513571;
static int32_t x23 = INT32_MIN;
volatile int32_t t6 = 1;
volatile int32_t t7 = -7;
int32_t x35 = -59;
int32_t t8 = 27475314;
volatile int8_t x39 = INT8_MIN;
int64_t x45 = 65258300LL;
uint16_t x48 = 18659U;
static int64_t x60 = -1LL;
int64_t x61 = INT64_MAX;
int16_t x66 = INT16_MAX;
volatile int32_t t16 = -6;
static volatile uint16_t x79 = 52U;
uint16_t x81 = 3846U;
uint8_t x87 = 1U;
uint32_t x94 = 1632173371U;
uint64_t t24 = 1339944LLU;
volatile uint16_t x105 = 9U;
volatile uint64_t x107 = 4135855544031058544LLU;
volatile int32_t x109 = -1;
int32_t x110 = 8877;
uint8_t x112 = 55U;
int32_t x116 = 0;
int32_t t27 = 216001;
int16_t x117 = 15;
uint32_t x119 = 1876779U;
int32_t t28 = -28;
static volatile uint8_t x122 = UINT8_MAX;
uint16_t x128 = 181U;
static int8_t x129 = -1;
int8_t x136 = 24;
int64_t x142 = -1LL;
uint8_t x144 = UINT8_MAX;
int32_t x145 = INT32_MIN;
int8_t x149 = 15;
uint32_t x152 = UINT32_MAX;
int16_t x154 = INT16_MIN;
int8_t x155 = -1;
uint8_t x156 = 22U;
int64_t x178 = INT64_MIN;
int32_t x182 = INT32_MAX;
static int64_t x183 = INT64_MIN;
uint8_t x186 = 3U;
uint16_t x191 = 850U;
int8_t x196 = INT8_MAX;
static int16_t x200 = INT16_MIN;
int64_t t46 = INT64_MIN;
uint8_t x211 = UINT8_MAX;
uint64_t x224 = 3321900037LLU;
int32_t t51 = 2080622;
static uint16_t x228 = 0U;
volatile int64_t x230 = INT64_MIN;
volatile int16_t x232 = INT16_MIN;
uint32_t x250 = 514U;
static int16_t x251 = INT16_MAX;
int32_t x252 = 52333;
volatile int32_t t61 = -426;
volatile int32_t x267 = -1;
uint64_t x275 = UINT64_MAX;
int64_t x283 = 7894LL;
volatile int32_t x284 = 506009120;
int32_t x287 = -1;
volatile int32_t x292 = -3;
volatile uint8_t x300 = 4U;
int8_t x308 = -1;
int8_t x314 = INT8_MIN;
int8_t x319 = -1;
uint8_t x321 = 13U;
int64_t x324 = -1005400844211LL;
uint64_t x327 = 48005567990LLU;
static uint32_t x333 = 128938U;
int8_t x339 = INT8_MIN;
uint16_t x341 = 180U;
uint64_t x346 = UINT64_MAX;
static int8_t x347 = INT8_MAX;
static int16_t x358 = INT16_MAX;
static int64_t x359 = -1LL;
static int16_t x377 = -1;
volatile int16_t x379 = -207;
int8_t x380 = INT8_MIN;
int8_t x386 = -13;
int64_t x387 = INT64_MIN;
int64_t x390 = -110541269914715LL;
volatile int32_t t91 = 5;
int32_t x393 = INT32_MAX;
static int32_t t92 = 29;


void f0(void) {
	uint16_t x1 = 0U;
	int64_t x2 = -1LL;
	volatile int8_t x3 = 1;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = -1632;

	t0 = (x1-((x2/x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	int16_t x6 = 111;
	volatile uint32_t x8 = UINT32_MAX;

	t1 = (x5-((x6/x7)<x8));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x11 = -30883468LL;

	t2 = (x9-((x10/x11)<x12));

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 127U;
	int16_t x15 = -1;
	int32_t t3 = 35534;

	t3 = (x13-((x14/x15)<x16));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -7311766;
	volatile int32_t x20 = INT32_MAX;

	t4 = (x17-((x18/x19)<x20));

	if (t4 != 126) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	uint32_t x22 = 9312U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -395171843;

	t5 = (x21-((x22/x23)<x24));

	if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;

	t6 = (x25-((x26/x27)<x28));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int8_t x30 = 0;
	static uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 50990215U;

	t7 = (x29-((x30/x31)<x32));

	if (t7 != 32766) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	uint16_t x34 = UINT16_MAX;
	uint8_t x36 = 69U;

	t8 = (x33-((x34/x35)<x36));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = UINT16_MAX;
	volatile int32_t x38 = -973793;
	volatile int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 37;

	t9 = (x37-((x38/x39)<x40));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	int16_t x44 = 73;
	static int32_t t10 = -85;

	t10 = (x41-((x42/x43)<x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	static int32_t x47 = 276224;
	int64_t t11 = 7LL;

	t11 = (x45-((x46/x47)<x48));

	if (t11 != 65258299LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -3;
	volatile int8_t x50 = INT8_MAX;
	uint32_t x51 = UINT32_MAX;
	uint16_t x52 = 0U;
	volatile int32_t t12 = 49;

	t12 = (x49-((x50/x51)<x52));

	if (t12 != -3) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MAX;
	uint16_t x54 = 10844U;
	static int16_t x55 = INT16_MAX;
	uint32_t x56 = UINT32_MAX;
	int32_t t13 = -34;

	t13 = (x53-((x54/x55)<x56));

	if (t13 != 32766) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = 0;
	static uint16_t x59 = 5U;
	int32_t t14 = INT32_MIN;

	t14 = (x57-((x58/x59)<x60));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x62 = 51U;
	uint32_t x63 = 49U;
	uint64_t x64 = 16744218LLU;
	int64_t t15 = -618249892824150LL;

	t15 = (x61-((x62/x63)<x64));

	if (t15 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint64_t x67 = 1398356LLU;
	volatile int64_t x68 = INT64_MIN;

	t16 = (x65-((x66/x67)<x68));

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 209007875LL;
	int64_t x70 = INT64_MIN;
	volatile int32_t x71 = INT32_MAX;
	static int64_t x72 = INT64_MAX;
	volatile int64_t t17 = -92338136150LL;

	t17 = (x69-((x70/x71)<x72));

	if (t17 != 209007874LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	uint16_t x78 = 0U;
	volatile uint8_t x80 = 3U;
	int64_t t18 = 1LL;

	t18 = (x77-((x78/x79)<x80));

	if (t18 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x82 = -2LL;
	uint16_t x83 = UINT16_MAX;
	int32_t x84 = INT32_MIN;
	volatile int32_t t19 = -24;

	t19 = (x81-((x82/x83)<x84));

	if (t19 != 3846) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 164708U;
	uint32_t x86 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	uint32_t t20 = 5U;

	t20 = (x85-((x86/x87)<x88));

	if (t20 != 164708U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MIN;
	volatile int32_t x90 = 0;
	int16_t x91 = 32;
	volatile uint16_t x92 = 6U;
	int32_t t21 = -7;

	t21 = (x89-((x90/x91)<x92));

	if (t21 != -32769) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 193522928U;
	static volatile int8_t x95 = 1;
	static int16_t x96 = 0;
	uint32_t t22 = 97916U;

	t22 = (x93-((x94/x95)<x96));

	if (t22 != 193522928U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	uint64_t x98 = 141204343903060431LLU;
	int64_t x99 = -1LL;
	static volatile uint64_t x100 = 4LLU;
	volatile int32_t t23 = 1;

	t23 = (x97-((x98/x99)<x100));

	if (t23 != -129) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x101 = 765LLU;
	uint8_t x102 = 3U;
	static int64_t x103 = -1005654643370836LL;
	uint8_t x104 = UINT8_MAX;

	t24 = (x101-((x102/x103)<x104));

	if (t24 != 764LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x106 = INT16_MIN;
	int16_t x108 = INT16_MIN;
	int32_t t25 = -21630763;

	t25 = (x105-((x106/x107)<x108));

	if (t25 != 8) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x111 = -1;
	int32_t t26 = 5;

	t26 = (x109-((x110/x111)<x112));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	int16_t x114 = 1092;
	int64_t x115 = INT64_MAX;

	t27 = (x113-((x114/x115)<x116));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x118 = 7U;
	static uint8_t x120 = 122U;

	t28 = (x117-((x118/x119)<x120));

	if (t28 != 14) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -467LL;
	uint32_t x123 = 124U;
	int32_t x124 = 7;
	int64_t t29 = 33952302581032385LL;

	t29 = (x121-((x122/x123)<x124));

	if (t29 != -468LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = UINT64_MAX;
	static int32_t x127 = INT32_MIN;
	static volatile int32_t t30 = -1127;

	t30 = (x125-((x126/x127)<x128));

	if (t30 != -32769) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x130 = 6483LL;
	int8_t x131 = INT8_MIN;
	static volatile uint16_t x132 = 5253U;
	int32_t t31 = 30455583;

	t31 = (x129-((x130/x131)<x132));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = -1;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = UINT64_MAX;
	int32_t t32 = -1120335;

	t32 = (x133-((x134/x135)<x136));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x141 = 1U;
	int16_t x143 = -1;
	volatile int32_t t33 = -2680;

	t33 = (x141-((x142/x143)<x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x146 = 1U;
	int64_t x147 = INT64_MIN;
	int32_t x148 = -531906963;
	int32_t t34 = INT32_MIN;

	t34 = (x145-((x146/x147)<x148));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x150 = 108U;
	int16_t x151 = INT16_MAX;
	volatile int32_t t35 = -1;

	t35 = (x149-((x150/x151)<x152));

	if (t35 != 14) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 13928127U;
	static volatile uint32_t t36 = 63184U;

	t36 = (x153-((x154/x155)<x156));

	if (t36 != 13928127U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 44;
	int64_t x158 = -44207674LL;
	int64_t x159 = 1890286427LL;
	uint8_t x160 = 0U;
	int32_t t37 = -495;

	t37 = (x157-((x158/x159)<x160));

	if (t37 != 44) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = 786811292;
	int32_t x167 = -1;
	int64_t x168 = INT64_MIN;
	int64_t t38 = INT64_MIN;

	t38 = (x165-((x166/x167)<x168));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	static volatile int32_t x170 = 1741289;
	int32_t x171 = INT32_MAX;
	int8_t x172 = 0;
	int32_t t39 = 6641387;

	t39 = (x169-((x170/x171)<x172));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = -1;
	uint64_t x174 = 635652788807LLU;
	volatile int32_t x175 = INT32_MAX;
	volatile uint8_t x176 = 4U;
	int32_t t40 = 4;

	t40 = (x173-((x174/x175)<x176));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = -9;
	int16_t x179 = INT16_MIN;
	static uint64_t x180 = 462905LLU;
	volatile int32_t t41 = 1551;

	t41 = (x177-((x178/x179)<x180));

	if (t41 != -9) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = -1;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t42 = -4756;

	t42 = (x181-((x182/x183)<x184));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x185 = INT16_MIN;
	int32_t x187 = 1664801;
	static int32_t x188 = -1;
	int32_t t43 = 26884810;

	t43 = (x185-((x186/x187)<x188));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = -1;
	int64_t x190 = INT64_MIN;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t44 = -27;

	t44 = (x189-((x190/x191)<x192));

	if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = UINT64_MAX;
	static uint8_t x194 = 1U;
	int16_t x195 = INT16_MAX;
	uint64_t t45 = 277295LLU;

	t45 = (x193-((x194/x195)<x196));

	if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MIN;
	uint8_t x198 = 31U;
	volatile int32_t x199 = -1;

	t46 = (x197-((x198/x199)<x200));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x201 = INT16_MIN;
	static uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 11395U;
	static uint16_t x204 = 383U;
	int32_t t47 = 8139;

	t47 = (x201-((x202/x203)<x204));

	if (t47 != -32769) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x205 = INT64_MAX;
	uint16_t x206 = 82U;
	volatile uint8_t x207 = 20U;
	int64_t x208 = INT64_MAX;
	int64_t t48 = 674374LL;

	t48 = (x205-((x206/x207)<x208));

	if (t48 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	static int32_t x210 = -1;
	int16_t x212 = -29;
	static volatile int64_t t49 = INT64_MIN;

	t49 = (x209-((x210/x211)<x212));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MIN;
	volatile int32_t x220 = 2205;
	volatile int32_t t50 = -6;

	t50 = (x217-((x218/x219)<x220));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = 0;
	volatile int8_t x222 = INT8_MIN;
	uint8_t x223 = 15U;

	t51 = (x221-((x222/x223)<x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	static uint8_t x226 = 15U;
	int8_t x227 = -43;
	int32_t t52 = -383;

	t52 = (x225-((x226/x227)<x228));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x229 = 110U;
	uint64_t x231 = 203533366645742LLU;
	int32_t t53 = -1;

	t53 = (x229-((x230/x231)<x232));

	if (t53 != 109) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = 8284;
	static int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;
	uint32_t t54 = 0U;

	t54 = (x233-((x234/x235)<x236));

	if (t54 != 4294967294U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x237 = -1;
	static int16_t x238 = -1;
	int16_t x239 = -339;
	int16_t x240 = INT16_MIN;
	int32_t t55 = 34;

	t55 = (x237-((x238/x239)<x240));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = 11U;
	uint16_t x242 = 5591U;
	static uint32_t x243 = 113U;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t56 = -4774;

	t56 = (x241-((x242/x243)<x244));

	if (t56 != 10) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = -1;
	int64_t x246 = 231194557040619LL;
	uint16_t x247 = UINT16_MAX;
	uint64_t x248 = 2379920182012980LLU;
	static volatile int32_t t57 = 9448483;

	t57 = (x245-((x246/x247)<x248));

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -5;
	volatile int32_t t58 = -502998330;

	t58 = (x249-((x250/x251)<x252));

	if (t58 != -6) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x254 = INT32_MAX;
	int64_t x255 = INT64_MAX;
	volatile int8_t x256 = INT8_MAX;
	volatile int32_t t59 = -934;

	t59 = (x253-((x254/x255)<x256));

	if (t59 != 254) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = -812LL;
	static uint8_t x258 = 5U;
	int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MAX;
	int64_t t60 = -1406LL;

	t60 = (x257-((x258/x259)<x260));

	if (t60 != -813LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = 30U;
	int8_t x262 = INT8_MAX;
	int16_t x263 = INT16_MAX;
	int64_t x264 = INT64_MAX;

	t61 = (x261-((x262/x263)<x264));

	if (t61 != 29) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x265 = 60;
	static volatile int64_t x266 = -1LL;
	int8_t x268 = -1;
	volatile int32_t t62 = 440520522;

	t62 = (x265-((x266/x267)<x268));

	if (t62 != 60) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = -1;
	static volatile int8_t x271 = -1;
	uint8_t x272 = 1U;
	volatile int64_t t63 = INT64_MIN;

	t63 = (x269-((x270/x271)<x272));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x274 = 3;
	int16_t x276 = 4;
	volatile uint64_t t64 = 0LLU;

	t64 = (x273-((x274/x275)<x276));

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x277 = 73;
	static uint8_t x278 = UINT8_MAX;
	int64_t x279 = INT64_MIN;
	volatile uint32_t x280 = UINT32_MAX;
	volatile int32_t t65 = 313732;

	t65 = (x277-((x278/x279)<x280));

	if (t65 != 72) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x281 = INT16_MIN;
	uint32_t x282 = 119210787U;
	volatile int32_t t66 = -6375;

	t66 = (x281-((x282/x283)<x284));

	if (t66 != -32769) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -3LL;
	volatile uint64_t x286 = 442848081LLU;
	int32_t x288 = INT32_MIN;
	volatile int64_t t67 = 583199015991LL;

	t67 = (x285-((x286/x287)<x288));

	if (t67 != -4LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = -1;
	volatile int32_t x290 = INT32_MIN;
	uint64_t x291 = UINT64_MAX;
	volatile int32_t t68 = 643;

	t68 = (x289-((x290/x291)<x292));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = 106U;
	uint16_t x294 = 14U;
	int8_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	int32_t t69 = 73201788;

	t69 = (x293-((x294/x295)<x296));

	if (t69 != 105) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x297 = 6;
	int32_t x298 = INT32_MIN;
	int64_t x299 = -1LL;
	volatile int32_t t70 = 16185;

	t70 = (x297-((x298/x299)<x300));

	if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -6752;
	static uint32_t x302 = UINT32_MAX;
	static int32_t x303 = -104;
	static int16_t x304 = INT16_MIN;
	int32_t t71 = 342588;

	t71 = (x301-((x302/x303)<x304));

	if (t71 != -6753) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MAX;
	uint8_t x306 = 2U;
	static int16_t x307 = INT16_MAX;
	volatile int32_t t72 = -816;

	t72 = (x305-((x306/x307)<x308));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 1U;
	static int64_t x310 = INT64_MAX;
	volatile int8_t x311 = INT8_MAX;
	static int8_t x312 = INT8_MIN;
	int32_t t73 = -629;

	t73 = (x309-((x310/x311)<x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x313 = UINT32_MAX;
	uint8_t x315 = 111U;
	uint8_t x316 = 11U;
	static uint32_t t74 = 3U;

	t74 = (x313-((x314/x315)<x316));

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x317 = 1241413100627LLU;
	uint64_t x318 = 64LLU;
	static int16_t x320 = -1;
	uint64_t t75 = 45906757994902367LLU;

	t75 = (x317-((x318/x319)<x320));

	if (t75 != 1241413100626LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x322 = -1;
	int8_t x323 = -1;
	static int32_t t76 = 44;

	t76 = (x321-((x322/x323)<x324));

	if (t76 != 13) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = 8U;
	static int16_t x326 = -12474;
	uint32_t x328 = 8334878U;
	volatile int32_t t77 = 595063;

	t77 = (x325-((x326/x327)<x328));

	if (t77 != 8) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x334 = -1LL;
	int64_t x335 = INT64_MIN;
	int16_t x336 = 1;
	uint32_t t78 = 19U;

	t78 = (x333-((x334/x335)<x336));

	if (t78 != 128937U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = 1200;
	static volatile int16_t x338 = -1;
	volatile int8_t x340 = INT8_MIN;
	int32_t t79 = -11;

	t79 = (x337-((x338/x339)<x340));

	if (t79 != 1200) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x342 = 7U;
	int64_t x343 = -306809132701878097LL;
	uint16_t x344 = UINT16_MAX;
	static int32_t t80 = 12669070;

	t80 = (x341-((x342/x343)<x344));

	if (t80 != 179) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x345 = 2U;
	uint32_t x348 = UINT32_MAX;
	uint32_t t81 = 85U;

	t81 = (x345-((x346/x347)<x348));

	if (t81 != 2U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x349 = INT8_MIN;
	uint8_t x350 = 27U;
	int8_t x351 = INT8_MIN;
	uint8_t x352 = 0U;
	static volatile int32_t t82 = -161867;

	t82 = (x349-((x350/x351)<x352));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = -4;
	static volatile uint32_t x354 = UINT32_MAX;
	volatile int8_t x355 = INT8_MIN;
	uint32_t x356 = 194U;
	volatile int32_t t83 = 767877;

	t83 = (x353-((x354/x355)<x356));

	if (t83 != -5) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x357 = UINT8_MAX;
	volatile uint8_t x360 = UINT8_MAX;
	volatile int32_t t84 = -378132;

	t84 = (x357-((x358/x359)<x360));

	if (t84 != 254) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = INT16_MAX;
	int8_t x366 = INT8_MIN;
	uint32_t x367 = 12504612U;
	int16_t x368 = INT16_MAX;
	int32_t t85 = 17;

	t85 = (x365-((x366/x367)<x368));

	if (t85 != 32766) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MAX;
	uint32_t x371 = 136982U;
	uint32_t x372 = 35501827U;
	static volatile int32_t t86 = 14610;

	t86 = (x369-((x370/x371)<x372));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x373 = 896U;
	static volatile uint32_t x374 = 8915464U;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = 6LLU;
	static int32_t t87 = -401;

	t87 = (x373-((x374/x375)<x376));

	if (t87 != 896) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x378 = 15U;
	volatile int32_t t88 = 2;

	t88 = (x377-((x378/x379)<x380));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = 610U;
	uint16_t x382 = 1642U;
	int16_t x383 = -7;
	int8_t x384 = -1;
	uint32_t t89 = 274U;

	t89 = (x381-((x382/x383)<x384));

	if (t89 != 609U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = 3916;
	uint32_t x388 = 22U;
	volatile int32_t t90 = 1;

	t90 = (x385-((x386/x387)<x388));

	if (t90 != 3915) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = INT16_MIN;
	int8_t x391 = -1;
	int64_t x392 = INT64_MAX;

	t91 = (x389-((x390/x391)<x392));

	if (t91 != -32769) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x394 = 4U;
	uint64_t x395 = 20799232LLU;
	volatile int16_t x396 = 4;

	t92 = (x393-((x394/x395)<x396));

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x397 = INT8_MIN;
	volatile uint8_t x398 = UINT8_MAX;
	int16_t x399 = INT16_MIN;
	uint64_t x400 = 5900988702LLU;
	static volatile int32_t t93 = 30;

	t93 = (x397-((x398/x399)<x400));

	if (t93 != -129) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x401 = 578006399057870463LL;
	int64_t x402 = -1LL;
	int16_t x403 = 813;
	int64_t x404 = INT64_MAX;
	static int64_t t94 = -105828861108425LL;

	t94 = (x401-((x402/x403)<x404));

	if (t94 != 578006399057870462LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x405 = 30U;
	int8_t x406 = 2;
	int16_t x407 = INT16_MIN;
	static uint32_t x408 = 52612309U;
	int32_t t95 = 67362;

	t95 = (x405-((x406/x407)<x408));

	if (t95 != 29) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MAX;
	uint64_t x411 = 82452382721LLU;
	uint16_t x412 = 27632U;
	volatile int32_t t96 = -2;

	t96 = (x409-((x410/x411)<x412));

	if (t96 != 32766) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = INT64_MAX;
	static volatile uint16_t x414 = UINT16_MAX;
	int32_t x415 = INT32_MIN;
	uint32_t x416 = 11U;
	static volatile int64_t t97 = -1088675LL;

	t97 = (x413-((x414/x415)<x416));

	if (t97 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x417 = INT8_MIN;
	int32_t x418 = 37;
	volatile int32_t x419 = 2;
	volatile int8_t x420 = 1;
	volatile int32_t t98 = -6;

	t98 = (x417-((x418/x419)<x420));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = 1067;
	static uint8_t x422 = UINT8_MAX;
	int64_t x423 = INT64_MAX;
	static int64_t x424 = -57143091061LL;
	volatile int32_t t99 = 0;

	t99 = (x421-((x422/x423)<x424));

	if (t99 != 1067) { NG(); } else { ; }
	
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

