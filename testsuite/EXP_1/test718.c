#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -498002147211LL;
int8_t x5 = INT8_MIN;
static uint64_t x10 = UINT64_MAX;
volatile int64_t t3 = -452282832LL;
volatile int64_t x17 = INT64_MIN;
int64_t t4 = -85764LL;
int8_t x24 = -1;
int32_t x27 = INT32_MAX;
int64_t x29 = -17LL;
static volatile uint64_t x31 = 1030458701565LLU;
uint64_t x35 = 47434099LLU;
uint16_t x37 = 3018U;
volatile int64_t x41 = 223384LL;
static volatile int32_t x42 = INT32_MIN;
uint16_t x44 = UINT16_MAX;
int64_t x46 = INT64_MAX;
static uint64_t x48 = 2213644303517980LLU;
int8_t x51 = INT8_MIN;
int64_t t12 = 1740876085791562LL;
static uint16_t x54 = UINT16_MAX;
volatile int8_t x59 = INT8_MIN;
static volatile int32_t x64 = 751;
int32_t x65 = INT32_MIN;
uint32_t x70 = 371863U;
int32_t x75 = -1;
volatile uint64_t t18 = 13862LLU;
volatile int32_t x85 = -1061767;
static volatile uint64_t x92 = 185787066179883LLU;
int8_t x93 = -1;
volatile uint64_t t23 = 3LLU;
static uint32_t x100 = 3916359U;
uint64_t x106 = 189725345165LLU;
volatile int16_t x121 = -6748;
uint64_t x124 = 56786114577LLU;
uint64_t t30 = 4452327237545827LLU;
volatile int32_t x126 = INT32_MIN;
int8_t x128 = INT8_MAX;
volatile uint64_t t33 = 873812179019LLU;
static uint8_t x143 = UINT8_MAX;
int16_t x152 = -1;
int32_t x160 = INT32_MIN;
int32_t t39 = -5045;
uint8_t x164 = UINT8_MAX;
int16_t x170 = INT16_MIN;
static int32_t x174 = 1;
volatile uint64_t t43 = 883LLU;
int16_t x181 = 5772;
uint32_t x183 = 1U;
uint32_t t44 = 376863U;
uint64_t t46 = 20193646142LLU;
volatile int32_t t47 = -957;
int32_t x202 = 7907604;
uint16_t x204 = 336U;
static volatile uint8_t x210 = 31U;
int16_t x211 = -14826;
int64_t x216 = -1LL;
int32_t x217 = 494113;
int64_t t54 = -14350401LL;
uint64_t x225 = 9179632183912460LLU;
int32_t x228 = INT32_MIN;
static volatile int32_t x238 = -3;
volatile int64_t x242 = -529675267233LL;
static int16_t x247 = 315;
static uint32_t x248 = 661U;
volatile uint32_t x254 = 39693U;
int16_t x258 = INT16_MIN;
int64_t x259 = -3957598616254LL;
static int32_t x274 = INT32_MAX;
int16_t x276 = INT16_MAX;
int16_t x277 = 5884;
int64_t x281 = -1LL;
int8_t x282 = INT8_MAX;
uint64_t x290 = UINT64_MAX;
uint64_t x307 = 177907LLU;
uint32_t x313 = 583U;
static int64_t x315 = -440354936LL;
static int64_t x317 = INT64_MAX;
volatile int16_t x322 = INT16_MIN;
volatile int64_t t78 = 243346916397822350LL;
uint32_t x331 = UINT32_MAX;
volatile int16_t x333 = -1;
uint8_t x342 = 26U;
int32_t t83 = -23;
uint8_t x345 = 92U;
volatile uint64_t t87 = 726281441521392638LLU;
int8_t x366 = -23;
uint64_t x367 = 213252LLU;
uint16_t x372 = 9426U;
int32_t x382 = INT32_MIN;
int16_t x385 = INT16_MIN;
uint8_t x390 = UINT8_MAX;
volatile int16_t x397 = INT16_MAX;
static int32_t x402 = INT32_MIN;


void f0(void) {
	int8_t x1 = 51;
	uint8_t x2 = 6U;
	int64_t x4 = INT64_MAX;
	int64_t t0 = -7253651120780532LL;

	t0 = (((x1%x2)/x3)*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -2693;
	volatile uint32_t x7 = 1344776535U;
	static int8_t x8 = INT8_MAX;
	uint32_t t1 = 889299268U;

	t1 = (((x5%x6)/x7)*x8);

	if (t1 != 381U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile int8_t x11 = INT8_MIN;
	int16_t x12 = 13;
	uint64_t t2 = 88LLU;

	t2 = (((x9%x10)/x11)*x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint16_t x14 = UINT16_MAX;
	int64_t x15 = INT64_MIN;
	int64_t x16 = -5750320537LL;

	t3 = (((x13%x14)/x15)*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x18 = -2394;
	volatile int64_t x19 = INT64_MIN;
	int16_t x20 = 44;

	t4 = (((x17%x18)/x19)*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	int16_t x22 = 48;
	static volatile int8_t x23 = 39;
	volatile int64_t t5 = 13681LL;

	t5 = (((x21%x22)/x23)*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 43506U;
	uint8_t x26 = UINT8_MAX;
	uint16_t x28 = 382U;
	volatile uint32_t t6 = 5066340U;

	t6 = (((x25%x26)/x27)*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MAX;
	volatile int16_t x32 = -1;
	uint64_t t7 = 768449LLU;

	t7 = (((x29%x30)/x31)*x32);

	if (t7 != 18446744073691650129LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	volatile uint8_t x34 = 3U;
	static int32_t x36 = INT32_MAX;
	volatile uint64_t t8 = 1859539558698948LLU;

	t8 = (((x33%x34)/x35)*x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	static int16_t x39 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	volatile int64_t t9 = -65143383LL;

	t9 = (((x37%x38)/x39)*x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x43 = 6670526;
	static int64_t t10 = 1668415LL;

	t10 = (((x41%x42)/x43)*x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 92535753U;
	volatile int32_t x47 = -1;
	volatile uint64_t t11 = 7181945LLU;

	t11 = (((x45%x46)/x47)*x48);

	if (t11 != 9850438347742356740LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	volatile int32_t x50 = 4285180;
	int32_t x52 = INT32_MIN;

	t12 = (((x49%x50)/x51)*x52);

	if (t12 != 6133213298688LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	static int32_t x55 = -1;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = INT64_MIN;

	t13 = (((x53%x54)/x55)*x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = UINT64_MAX;
	volatile int32_t x58 = 307444126;
	uint32_t x60 = 372U;
	static volatile uint64_t t14 = 51063LLU;

	t14 = (((x57%x58)/x59)*x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = -1;
	int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MAX;
	int64_t t15 = -675386543817LL;

	t15 = (((x61%x62)/x63)*x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -1LL;
	static int32_t x67 = -1;
	int16_t x68 = -11;
	int64_t t16 = -67LL;

	t16 = (((x65%x66)/x67)*x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MAX;
	uint16_t x71 = 10U;
	int64_t x72 = 238599548949481LL;
	int64_t t17 = -7787109671503LL;

	t17 = (((x69%x70)/x71)*x72);

	if (t17 != 8271769162980607308LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 774734927978288772LLU;
	int16_t x74 = 21;
	volatile uint8_t x76 = UINT8_MAX;

	t18 = (((x73%x74)/x75)*x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 439;
	int32_t x78 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = 728259568U;
	static volatile uint32_t t19 = 2361009U;

	t19 = (((x77%x78)/x79)*x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = -1;
	uint64_t x83 = 33039430552756LLU;
	volatile int64_t x84 = 16200761199705498LL;
	uint64_t t20 = 1710440684LLU;

	t20 = (((x81%x82)/x83)*x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = INT64_MIN;
	int64_t x88 = -2605LL;
	uint64_t t21 = 631263LLU;

	t21 = (((x85%x86)/x87)*x88);

	if (t21 != 18446744073709549011LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -368493039;
	volatile uint32_t x90 = 15U;
	int16_t x91 = INT16_MIN;
	uint64_t t22 = 88380240980LLU;

	t22 = (((x89%x90)/x91)*x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = -1LL;
	int64_t x95 = INT64_MIN;
	uint64_t x96 = UINT64_MAX;

	t23 = (((x93%x94)/x95)*x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	uint32_t x99 = UINT32_MAX;
	volatile int64_t t24 = -258169858248LL;

	t24 = (((x97%x98)/x99)*x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -755;
	volatile int32_t x102 = INT32_MIN;
	uint32_t x103 = 279416U;
	int8_t x104 = -1;
	volatile uint32_t t25 = 11113655U;

	t25 = (((x101%x102)/x103)*x104);

	if (t25 != 4294951925U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1913134U;
	volatile uint8_t x107 = UINT8_MAX;
	uint16_t x108 = 34U;
	volatile uint64_t t26 = 0LLU;

	t26 = (((x105%x106)/x107)*x108);

	if (t26 != 255068LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 5U;
	uint8_t x110 = 107U;
	int16_t x111 = INT16_MAX;
	static int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -956470616;

	t27 = (((x109%x110)/x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 984;
	int8_t x114 = 13;
	static int16_t x115 = INT16_MIN;
	static int64_t x116 = INT64_MIN;
	volatile int64_t t28 = -2LL;

	t28 = (((x113%x114)/x115)*x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	int32_t x118 = -1;
	uint64_t x119 = 37648852659LLU;
	int64_t x120 = -1LL;
	volatile uint64_t t29 = 28838965592277645LLU;

	t29 = (((x117%x118)/x119)*x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x122 = INT32_MIN;
	uint32_t x123 = 3930208U;

	t30 = (((x121%x122)/x123)*x124);

	if (t30 != 62010437118084LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 60370667LLU;
	volatile int16_t x127 = -10360;
	volatile uint64_t t31 = 18582350LLU;

	t31 = (((x125%x126)/x127)*x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	volatile uint8_t x130 = 109U;
	int8_t x131 = -1;
	uint32_t x132 = 311698U;
	uint32_t t32 = 1U;

	t32 = (((x129%x130)/x131)*x132);

	if (t32 != 4286863148U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 1;
	uint64_t x134 = 8LLU;
	int8_t x135 = -33;
	int32_t x136 = -1;

	t33 = (((x133%x134)/x135)*x136);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int32_t x138 = INT32_MIN;
	int16_t x139 = -1;
	static int32_t x140 = INT32_MAX;
	volatile int64_t t34 = -991LL;

	t34 = (((x137%x138)/x139)*x140);

	if (t34 != -4611686014132420609LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	static int8_t x142 = -15;
	int16_t x144 = -1;
	volatile int32_t t35 = -89563250;

	t35 = (((x141%x142)/x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 7282191LLU;
	uint64_t x146 = 8694809336876LLU;
	static int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MIN;
	uint64_t t36 = 4973797298LLU;

	t36 = (((x145%x146)/x147)*x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;
	volatile int32_t x151 = 14949276;
	volatile int32_t t37 = -2845388;

	t37 = (((x149%x150)/x151)*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 10179436U;
	int32_t x154 = 238008721;
	uint16_t x155 = 8U;
	uint16_t x156 = UINT16_MAX;
	uint32_t t38 = 1163729937U;

	t38 = (((x153%x154)/x155)*x156);

	if (t38 != 1784255891U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = -149;

	t39 = (((x157%x158)/x159)*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int16_t x162 = -1;
	int64_t x163 = INT64_MAX;
	static volatile uint64_t t40 = 9973643470581891LLU;

	t40 = (((x161%x162)/x163)*x164);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 0U;
	int16_t x171 = INT16_MAX;
	static uint8_t x172 = UINT8_MAX;
	static int32_t t41 = -1011825338;

	t41 = (((x169%x170)/x171)*x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x173 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	int64_t x176 = 1LL;
	volatile int64_t t42 = 28LL;

	t42 = (((x173%x174)/x175)*x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 765U;
	uint64_t x178 = UINT64_MAX;
	static int8_t x179 = 13;
	int16_t x180 = INT16_MAX;

	t43 = (((x177%x178)/x179)*x180);

	if (t43 != 1900486LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x182 = INT32_MAX;
	volatile uint8_t x184 = 5U;

	t44 = (((x181%x182)/x183)*x184);

	if (t44 != 28860U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 1932477658LLU;
	int16_t x186 = 40;
	static int64_t x187 = 28LL;
	static uint32_t x188 = 244U;
	volatile uint64_t t45 = 44LLU;

	t45 = (((x185%x186)/x187)*x188);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -2;
	uint64_t x190 = UINT64_MAX;
	volatile int64_t x191 = INT64_MIN;
	static int32_t x192 = 361;

	t46 = (((x189%x190)/x191)*x192);

	if (t46 != 361LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 4901U;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = 120U;
	int32_t x196 = -107881;

	t47 = (((x193%x194)/x195)*x196);

	if (t47 != -4315240) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x197 = 452;
	int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MIN;
	int64_t x200 = -3LL;
	int64_t t48 = 7264363928763000LL;

	t48 = (((x197%x198)/x199)*x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = 449894093;
	int64_t x203 = 919509929395347334LL;
	int64_t t49 = -1011895LL;

	t49 = (((x201%x202)/x203)*x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MAX;
	volatile int32_t x207 = INT32_MIN;
	int64_t x208 = -1037465373518380LL;
	static int64_t t50 = 2LL;

	t50 = (((x205%x206)/x207)*x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 108413U;
	int8_t x212 = INT8_MIN;
	uint32_t t51 = 65481907U;

	t51 = (((x209%x210)/x211)*x212);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = -13344622626LL;
	int32_t x214 = INT32_MIN;
	uint64_t x215 = UINT64_MAX;
	uint64_t t52 = 34339583644593LLU;

	t52 = (((x213%x214)/x215)*x216);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x218 = INT16_MIN;
	volatile uint32_t x219 = 55U;
	static int8_t x220 = 14;
	volatile uint32_t t53 = 552304912U;

	t53 = (((x217%x218)/x219)*x220);

	if (t53 != 658U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = -1LL;
	int8_t x222 = -7;
	volatile int16_t x223 = INT16_MAX;
	int16_t x224 = -1;

	t54 = (((x221%x222)/x223)*x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x226 = -1;
	uint32_t x227 = 281063445U;
	uint64_t t55 = 130893485757972LLU;

	t55 = (((x225%x226)/x227)*x228);

	if (t55 != 18376606493261692928LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MAX;
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = INT8_MIN;
	uint32_t x232 = 408U;
	int64_t t56 = 55LL;

	t56 = (((x229%x230)/x231)*x232);

	if (t56 != -104040LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x233 = -1;
	int64_t x234 = -1LL;
	int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	volatile int64_t t57 = -4181581LL;

	t57 = (((x233%x234)/x235)*x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	uint64_t x239 = 646LLU;
	volatile int64_t x240 = INT64_MAX;
	static volatile uint64_t t58 = 1919LLU;

	t58 = (((x237%x238)/x239)*x240);

	if (t58 != 18418188742326100298LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x241 = 0;
	int64_t x243 = -1LL;
	uint16_t x244 = 1939U;
	int64_t t59 = 1295526625421607LL;

	t59 = (((x241%x242)/x243)*x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = 0U;
	static int32_t x246 = INT32_MAX;
	static uint32_t t60 = 55041U;

	t60 = (((x245%x246)/x247)*x248);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = -1;
	volatile int8_t x250 = 60;
	int32_t x251 = INT32_MIN;
	static uint32_t x252 = 1688255U;
	uint32_t t61 = 1683592653U;

	t61 = (((x249%x250)/x251)*x252);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x253 = 7U;
	static uint8_t x255 = 4U;
	static uint8_t x256 = UINT8_MAX;
	static volatile uint32_t t62 = 2105U;

	t62 = (((x253%x254)/x255)*x256);

	if (t62 != 255U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = 602U;
	volatile int32_t x260 = -1;
	int64_t t63 = 5252476LL;

	t63 = (((x257%x258)/x259)*x260);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x262 = 8540461418551290LL;
	int8_t x263 = -1;
	static volatile int64_t x264 = -1LL;
	static volatile int64_t t64 = -14584821734179LL;

	t64 = (((x261%x262)/x263)*x264);

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 1095463130373LLU;
	volatile uint8_t x266 = UINT8_MAX;
	int16_t x267 = 1853;
	static uint64_t x268 = UINT64_MAX;
	volatile uint64_t t65 = 704275829180164LLU;

	t65 = (((x265%x266)/x267)*x268);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1;
	volatile int16_t x270 = -897;
	static uint32_t x271 = 3U;
	int8_t x272 = -1;
	volatile uint32_t t66 = 53U;

	t66 = (((x269%x270)/x271)*x272);

	if (t66 != 2863311531U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x273 = 229U;
	static int8_t x275 = INT8_MIN;
	volatile uint32_t t67 = 733019196U;

	t67 = (((x273%x274)/x275)*x276);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = 28;
	int8_t x280 = -1;
	uint64_t t68 = 12695643LLU;

	t68 = (((x277%x278)/x279)*x280);

	if (t68 != 18446744073709551406LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t69 = 49630173315583LL;

	t69 = (((x281%x282)/x283)*x284);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x289 = 1;
	uint8_t x291 = 2U;
	uint8_t x292 = UINT8_MAX;
	volatile uint64_t t70 = 18902LLU;

	t70 = (((x289%x290)/x291)*x292);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	uint8_t x294 = 1U;
	int64_t x295 = 157650138737285LL;
	int16_t x296 = -1;
	int64_t t71 = -545548958482488474LL;

	t71 = (((x293%x294)/x295)*x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x297 = 1949LLU;
	static int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	volatile int64_t x300 = INT64_MIN;
	uint64_t t72 = 96885LLU;

	t72 = (((x297%x298)/x299)*x300);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x301 = INT32_MIN;
	int16_t x302 = -18;
	volatile int8_t x303 = INT8_MIN;
	int64_t x304 = INT64_MIN;
	volatile int64_t t73 = 177795217512077LL;

	t73 = (((x301%x302)/x303)*x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	uint32_t x306 = UINT32_MAX;
	uint8_t x308 = 23U;
	static volatile uint64_t t74 = 3501LLU;

	t74 = (((x305%x306)/x307)*x308);

	if (t74 != 555243LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x309 = -14200;
	volatile int32_t x310 = INT32_MIN;
	uint16_t x311 = 26U;
	int16_t x312 = 3752;
	int32_t t75 = -226940210;

	t75 = (((x309%x310)/x311)*x312);

	if (t75 != -2048592) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x314 = INT16_MIN;
	uint16_t x316 = 4441U;
	volatile int64_t t76 = -132LL;

	t76 = (((x313%x314)/x315)*x316);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x318 = 8745396724354LLU;
	static int16_t x319 = -1;
	int64_t x320 = INT64_MAX;
	uint64_t t77 = 690598140LLU;

	t77 = (((x317%x318)/x319)*x320);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MIN;
	volatile int16_t x323 = -2;
	int64_t x324 = 48473754683732LL;

	t78 = (((x321%x322)/x323)*x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = 1456769768U;
	volatile int64_t x326 = -1LL;
	int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MIN;
	int64_t t79 = -1785684678LL;

	t79 = (((x325%x326)/x327)*x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MIN;
	volatile int32_t x330 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	volatile uint32_t t80 = 904U;

	t80 = (((x329%x330)/x331)*x332);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x334 = -9;
	int64_t x335 = INT64_MAX;
	int8_t x336 = 42;
	int64_t t81 = -207LL;

	t81 = (((x333%x334)/x335)*x336);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = 1;
	volatile uint32_t x338 = 25476U;
	uint32_t x339 = 1333U;
	int32_t x340 = INT32_MIN;
	volatile uint32_t t82 = 93U;

	t82 = (((x337%x338)/x339)*x340);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 1U;
	int32_t x343 = INT32_MIN;
	volatile int16_t x344 = INT16_MIN;

	t83 = (((x341%x342)/x343)*x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x346 = INT16_MAX;
	volatile int8_t x347 = -1;
	static volatile uint16_t x348 = UINT16_MAX;
	static int32_t t84 = -92323;

	t84 = (((x345%x346)/x347)*x348);

	if (t84 != -6029220) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	int8_t x351 = -1;
	volatile int64_t x352 = INT64_MIN;
	static volatile int64_t t85 = -14LL;

	t85 = (((x349%x350)/x351)*x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = 12394505LLU;
	volatile uint64_t x354 = 482LLU;
	static uint64_t x355 = 2657253393150LLU;
	int16_t x356 = 15135;
	uint64_t t86 = 3140LLU;

	t86 = (((x353%x354)/x355)*x356);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 4U;
	uint64_t x358 = 539LLU;
	static int16_t x359 = INT16_MIN;
	uint32_t x360 = 21726836U;

	t87 = (((x357%x358)/x359)*x360);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = INT8_MAX;
	uint8_t x362 = UINT8_MAX;
	uint16_t x363 = 798U;
	int16_t x364 = -1;
	volatile int32_t t88 = -1;

	t88 = (((x361%x362)/x363)*x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MIN;
	static uint8_t x368 = 6U;
	uint64_t t89 = 0LLU;

	t89 = (((x365%x366)/x367)*x368);

	if (t89 != 519012550608000LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x369 = INT16_MIN;
	int8_t x370 = -1;
	static volatile uint32_t x371 = UINT32_MAX;
	uint32_t t90 = 83U;

	t90 = (((x369%x370)/x371)*x372);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x373 = INT16_MIN;
	static uint16_t x374 = 3869U;
	static int16_t x375 = INT16_MAX;
	int8_t x376 = 1;
	int32_t t91 = -869;

	t91 = (((x373%x374)/x375)*x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x377 = 2064U;
	static uint32_t x378 = 878137U;
	static int8_t x379 = INT8_MIN;
	int32_t x380 = -1;
	uint32_t t92 = 90U;

	t92 = (((x377%x378)/x379)*x380);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x381 = 4U;
	int32_t x383 = -1;
	static int32_t x384 = -1;
	volatile uint32_t t93 = 7053U;

	t93 = (((x381%x382)/x383)*x384);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MAX;
	uint8_t x388 = 15U;
	volatile int32_t t94 = -344224;

	t94 = (((x385%x386)/x387)*x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = INT8_MIN;
	static int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

	t95 = (((x389%x390)/x391)*x392);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = 6U;
	static uint8_t x394 = UINT8_MAX;
	int16_t x395 = INT16_MIN;
	volatile uint8_t x396 = 23U;
	int32_t t96 = -1;

	t96 = (((x393%x394)/x395)*x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	int32_t x400 = -686929049;
	volatile int32_t t97 = -35420740;

	t97 = (((x397%x398)/x399)*x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x401 = UINT32_MAX;
	static uint8_t x403 = UINT8_MAX;
	volatile int16_t x404 = INT16_MAX;
	uint32_t t98 = 289U;

	t98 = (((x401%x402)/x403)*x404);

	if (t98 != 1069514624U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MAX;
	static volatile int64_t x406 = -5LL;
	uint16_t x407 = 11105U;
	int8_t x408 = -1;
	static volatile int64_t t99 = 10052323LL;

	t99 = (((x405%x406)/x407)*x408);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

